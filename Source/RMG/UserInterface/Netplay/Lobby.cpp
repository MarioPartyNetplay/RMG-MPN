#include "Lobby.hpp"
#include <QGridLayout>
#include <QMessageBox>
#include <QJsonArray>
#include <RMG-Core/m64p/Api.hpp>
#include <RMG-Core/Settings/Settings.hpp>
#include <RMG-Core/Core.hpp>
#include <QSpinBox>
#include <QClipboard>

Lobby::Lobby(QString filename, QJsonObject room, QWebSocket *socket, QWidget *parent)
    : QDialog(parent)
{

    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    QJsonObject featuresObject = room.value("features").toObject();
    QString cheatsString = featuresObject.value("cheats").toString();
    QJsonDocument cheatsDoc = QJsonDocument::fromJson(cheatsString.toUtf8());
    QJsonObject cheatsObject = cheatsDoc.object();

    // Initialize cheats member
    cheats = cheatsObject;

    setWindowTitle("RMG NetPlay");
    w = dynamic_cast<UserInterface::MainWindow*>(parent);

    this->resize(640, 480);

    player_name = room.value("player_name").toString();
    room_port = room.value("port").toInt();
    room_name = room.value("room_name").toString();
    file_name = filename;
    base_port = room.value("base_port").toInt();
    started = 0;

    QGridLayout *layout = new QGridLayout(this);

    QLabel *gameLabel = new QLabel("Game Name:", this);
    layout->addWidget(gameLabel, 0, 0);
    QLabel *gameName = new QLabel(room.value("game_name").toString(), this);
    layout->addWidget(gameName, 0, 1);

    QLabel *pingLabel = new QLabel("Your Ping:", this);
    layout->addWidget(pingLabel, 1, 0);
    pingValue = new QLabel(this);
    layout->addWidget(pingValue, 1, 1);

    QLabel *p1Label = new QLabel("Player 1:", this);
    layout->addWidget(p1Label, 3, 0);
    
    QLabel *p2Label = new QLabel("Player 2:", this);
    layout->addWidget(p2Label, 4, 0);

    QLabel *p3Label = new QLabel("Player 3:", this);
    layout->addWidget(p3Label, 5, 0);

    QLabel *p4Label = new QLabel("Player 4:", this);
    layout->addWidget(p4Label, 6, 0);
    
    for (int i = 0; i < 4; ++i)
    {
        pName[i] = new QLabel(this);
        layout->addWidget(pName[i], i + 3, 1);
    }

    QStringList playerNames;
    for (int i = 0; i < 4; ++i)
    {
        playerNames.append(pName[i]->text());
    }

    webSocket = socket;
    connect(webSocket, &QWebSocket::textMessageReceived, this, [this, playerNames](QString message){ processTextMessage(message, cheats, playerNames); });
    connect(webSocket, &QWebSocket::pong, this, &Lobby::updatePing);

    chatWindow = new QPlainTextEdit(this);
    chatWindow->setReadOnly(true);
    layout->addWidget(chatWindow, 7, 0, 3, 2);

    chatEdit = new QLineEdit(this);
    chatEdit->setPlaceholderText("Enter chat message here");
    connect(chatEdit, &QLineEdit::returnPressed, this, &Lobby::sendChat);
    layout->addWidget(chatEdit, 10, 0, 1, 2);

    startGameButton = new QPushButton(this);
    startGameButton->setText("Start Game");
    startGameButton->setAutoDefault(false);
    connect(startGameButton, &QPushButton::released, this, &Lobby::startGame);
    layout->addWidget(startGameButton, 11, 0, 1, 2);

    // Add the promotional label
    QLabel *promoLabel = new QLabel(this);
    promoLabel->setText("<p style='text-align:center;'>Servers are donated by BisectHosting! Use this <a href='https://bisecthosting.com/endangerednayla'>link</a> for 25% off your own server.</p>");
    promoLabel->setTextFormat(Qt::RichText);
    promoLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    promoLabel->setOpenExternalLinks(true);
    layout->addWidget(promoLabel, 12, 0, 1, 2);

    // Add the "Copy Public IP" button for Player 1
    copyIpButton = new QPushButton("Copy Public IP", this);
    layout->addWidget(copyIpButton, 14, 0, 1, 2);
    connect(copyIpButton, &QPushButton::clicked, this, &Lobby::copyPublicIp);
    copyIpButton->setVisible(false);

    connect(this, &QDialog::finished, this, &Lobby::onFinished);

    QJsonObject json;
    json.insert("type", "request_players");
    json.insert("port", room_port);
    QJsonDocument json_doc = QJsonDocument(json);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Lobby::sendPing);
    timer->start(5000);

    webSocket->sendTextMessage(json_doc.toJson());

    setupBufferSpinBox(playerNames, 3);

    // Set up a timer to send ping messages periodically
    QTimer *pingTimer = new QTimer(this);
    connect(pingTimer, &QTimer::timeout, this, &Lobby::sendPingMessage);
    pingTimer->start(5000); // Send ping every 5 seconds

}

void Lobby::sendPing()
{
    webSocket->ping();
}

void Lobby::sendPingMessage() {
    QJsonObject json;
    json.insert("type", 5);
    json.insert("ping", pingValue->text().toInt()); // Include the ping value
    QJsonDocument json_doc = QJsonDocument(json);
    webSocket->sendTextMessage(json_doc.toJson());
}

void Lobby::copyPublicIp()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, [this](QNetworkReply *reply) {
        if (reply->error() == QNetworkReply::NoError)
        {
            QString publicIp = reply->readAll();
            QClipboard *clipboard = QGuiApplication::clipboard();
            clipboard->setText(publicIp + ":" + QString::number(room_port));
            QMessageBox::information(this, "Public IP", "Public IP copied to clipboard: " + publicIp + ":" + QString::number(base_port));
        }
        reply->deleteLater();
    });
    manager->get(QNetworkRequest(QUrl("https://api.ipify.org")));
}

void Lobby::updatePing(quint64 elapsedTime, const QByteArray&)
{
    pingValue->setText(QString::number(elapsedTime) + " ms");
}

void Lobby::startGame()
{
    if (player_name == pName[0]->text())
    {
        startGameButton->setEnabled(false);
        QJsonObject json;
        json.insert("type", "request_begin_game");
        json.insert("port", room_port);
        QJsonDocument json_doc = QJsonDocument(json);
        webSocket->sendTextMessage(json_doc.toJson());
    }
    else
    {
        QMessageBox::information(this, "Information", "Only Player 1 can start the game");
    }
}

void Lobby::sendChat()
{
    if (!chatEdit->text().isEmpty())
    {
        QJsonObject json;
        json.insert("type", "request_chat_message");
        json.insert("port", room_port);
        json.insert("player_name", player_name);
        json.insert("message", chatEdit->text());
        QJsonDocument json_doc = QJsonDocument(json);
        webSocket->sendTextMessage(json_doc.toJson());
        chatEdit->clear();
    }
}

void Lobby::onFinished(int)
{
    timer->stop();
    webSocket->close();
    webSocket->deleteLater();
}

void Lobby::setupBufferSpinBox(const QStringList &playerNames, int p1BufferValue)
{
    QLabel *bufferLabel = new QLabel("Buffer:", this);
    QSpinBox *bufferSpinBox = new QSpinBox(this);
    bufferSpinBox->setRange(1, 100);
    bufferSpinBox->setValue(p1BufferValue); // Set initial value

    connect(bufferSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &Lobby::changeBuffer);

    QGridLayout *gridLayout = qobject_cast<QGridLayout*>(layout());
    if (gridLayout) {
        // Only add buffer controls if the player is Player 1
        if (player_name == pName[0]->text()) {
            gridLayout->addWidget(bufferLabel, 13, 0);
            gridLayout->addWidget(bufferSpinBox, 13, 1);
            bufferSpinBox->setEnabled(true);
        } else {
            // If not Player 1, ensure they are not added
            bufferLabel->hide();
            bufferSpinBox->hide();
        }
    }
}

void Lobby::changeBuffer(int value)
{
    if (bufferChangeInProgress) return; // Prevent feedback loop

    bufferChangeInProgress = true; // Set the flag

    QJsonObject json;
    json.insert("type", "request_change_buffer");
    json.insert("port", room_port);

    QJsonObject features;
    features.insert("buffer", QString::number(value));
    json.insert("features", features);

    QJsonDocument json_doc = QJsonDocument(json);
    QString jsonString = json_doc.toJson();
    CoreAddCallbackMessage(CoreDebugMessageType::Info, ("Sending buffer change request: " + jsonString).toStdString().c_str());
    webSocket->sendTextMessage(jsonString);

    // Update the QSpinBox value directly
    QSpinBox *bufferSpinBox = findChild<QSpinBox*>();
    if (bufferSpinBox) {
        bufferSpinBox->setEnabled(true);
        bufferSpinBox->setValue(value);
        bufferSpinBox->setEnabled(false);
    }
}

void Lobby::processTextMessage(QString message, QJsonObject cheats, QStringList playerNames)
{
    QJsonDocument json_doc = QJsonDocument::fromJson(message.toUtf8());
    QJsonObject json = json_doc.object();

    CoreAddCallbackMessage(CoreDebugMessageType::Info, ("Received message: " + message).toStdString().c_str());

    if (json.value("type").toString() == "reply_players") {
        if (json.contains("player_names")) {
            QStringList newPlayerNames;
            for (int i = 0; i < 4; ++i) {
                QString playerName = json.value("player_names").toArray().at(i).toString();
                pName[i]->setText(playerName);
                newPlayerNames.append(playerName);
                if (playerName == player_name)
                    player_number = i + 1;
            }
            if (player_number == 1 && webSocket->peerAddress().toString() == "127.0.0.1") {
                copyIpButton->setVisible(true);
            }

            // Check if a new user has joined
            if (newPlayerNames != playerNames) {
                // If this client is Player 1its 
                if (player_name == pName[0]->text()) {
                    QSpinBox *bufferSpinBox = findChild<QSpinBox*>();
                    if (bufferSpinBox) {
                        int p1BufferValue = bufferSpinBox->value();
                        if (p1BufferValue == 0) { // Check if the value is empty (0)
                            p1BufferValue = 3; // Set to 3 if empty
                        }

                        // Send Player 1's buffer value to the new user
                        QJsonObject json;
                        json.insert("type", "request_change_buffer");
                        json.insert("port", room_port);

                        QJsonObject features;
                        features.insert("buffer", QString::number(p1BufferValue));
                        json.insert("features", features);

                        QJsonDocument json_doc = QJsonDocument(json);
                        QString jsonString = json_doc.toJson();
                        CoreAddCallbackMessage(CoreDebugMessageType::Info, ("Sending buffer change request to new user: " + jsonString).toStdString().c_str());
                        webSocket->sendTextMessage(jsonString);

                        // Change the buffer to Player 1's buffer value
                        changeBuffer(p1BufferValue);
                        setupBufferSpinBox(newPlayerNames, p1BufferValue);
                    }
                }
            }
        }
    } else if (json.value("type").toString() == "reply_chat_message") {
        chatWindow->appendPlainText(json.value("message").toString());
    } else if (json.value("type").toString() == "reply_begin_game") {
        started = 1;
        if (player_name == pName[0]->text()) {
            QSpinBox *bufferSpinBox = findChild<QSpinBox*>();
        }
        w->OpenROMNetplay(file_name, webSocket->peerAddress().toString(), room_port, player_number, cheats);
    } else if (json.value("type").toString() == "reply_change_buffer") {
        CoreAddCallbackMessage(CoreDebugMessageType::Info, "Processing reply_change_buffer message");

        // Ensure the buffer value is correctly parsed as an integer
        QString bufferString = json.value("features").toObject().value("buffer").toString();
        bool ok;
        int newBufferValue = bufferString.toInt(&ok);
        if (!ok) {
            CoreAddCallbackMessage(CoreDebugMessageType::Error, "Failed to convert buffer value to integer");
            return;
        }

        // Check if the buffer value has changed
        if (newBufferValue != lastBufferValue) {
            lastBufferValue = newBufferValue;

            QSpinBox *bufferSpinBox = findChild<QSpinBox*>();
            if (bufferSpinBox) {
                CoreAddCallbackMessage(CoreDebugMessageType::Info, ("Updating buffer to: " + std::to_string(newBufferValue)).c_str());
                bufferSpinBox->setEnabled(true);
                bufferSpinBox->setValue(newBufferValue);
                bufferSpinBox->setEnabled(false);
            }
            // Log buffer change to chat window
            chatWindow->appendPlainText(tr("Buffer changed to %1").arg(newBufferValue));
            CoreAddCallbackMessage(CoreDebugMessageType::Info, ("Buffer changed to " + std::to_string(newBufferValue)).c_str());
        }

        bufferChangeInProgress = false; // Reset the flag
    }
}

bool Lobby::isNetplayRunning()
{
    return CoreIsEmulationRunning();
}

void Lobby::closeEvent(QCloseEvent *event)
{
    if (isNetplayRunning())
    {
        int result = QMessageBox::question(this, tr("Close Room"), tr("Are you sure you want to close the room?"), QMessageBox::Yes | QMessageBox::No);
        if (result == QMessageBox::Yes) {
            event->accept();
        } else {
            event->ignore();
        }
    }
    else
    {
        event->accept();
    }
}