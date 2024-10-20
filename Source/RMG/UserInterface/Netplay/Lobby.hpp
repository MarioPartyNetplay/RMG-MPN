#ifndef WAITROOM_H
#define WAITROOM_H

#include <QDialog>
#include <QJsonObject>
#include <QJsonDocument>
#include <QWebSocket>
#include <QLabel>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QTimer>
#include <QCheckBox>

#include <UserInterface/MainWindow.hpp>

class Lobby : public QDialog
{
    Q_OBJECT
public:
    Lobby(QString filename, QJsonObject room, QWebSocket *socket, QWidget *parent = nullptr);
    bool bufferChangeInProgress = false;
private slots:
    void processTextMessage(QString message, QJsonObject cheats, QStringList playerNames);
    void onFinished(int);
    void sendChat();
    void startGame();
    void updatePing(quint64 elapsedTime, const QByteArray &payload);
    void sendPing();
    void changeBuffer(int value);
    void setupBufferSpinBox(const QStringList &playerNames, int p1BufferValue);
    void copyPublicIp();
    void sendPingMessage();
private:
    QWebSocket *webSocket = nullptr;
    QLabel *pName[4];
    QPushButton *copyIpButton;
    QPlainTextEdit *chatWindow;
    QLineEdit *chatEdit;
    QString player_name;
    QJsonObject cheats;
    int player_number;
    QString file_name;
    int room_port;
    int base_port;
    QString room_name;
    QPushButton *startGameButton;
    QSpinBox *bufferSpinBox;
    int lastBufferValue;
    QLabel *pingValue;
    QTimer *timer;
    int started;
    UserInterface::MainWindow* w;
    bool isNetplayRunning();
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // WAITROOM_H
