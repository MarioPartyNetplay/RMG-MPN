/*
 * Rosalie's Mupen GUI - https://github.com/Rosalie241/RMG
 *  Copyright (C) 2020 Rosalie Wanders <rosalie@mailbox.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 3.
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef EMULATIONTHREAD_HPP
#define EMULATIONTHREAD_HPP

#include <QString>
#include <QSurfaceFormat>
#include <QThread>
#include <QJsonObject>

enum class VidExtRenderMode
{
    OpenGL,
    Vulkan
};

namespace Thread
{
class EmulationThread : public QThread
{
    Q_OBJECT

  public:
    EmulationThread(QObject *parent = nullptr);
    ~EmulationThread();

    void SetRomFile(QString file);
    void SetDiskFile(QString file);
    void SetNetplay(QString ip, int port, int player);
    void ApplyCheats(QJsonObject cheats);
    QString GetLastError(void);

  signals:
    void on_Emulation_Started(void);
    void on_Emulation_Finished(bool success);

    void on_VidExt_SetupOGL(QSurfaceFormat, QThread *);
    void on_VidExt_ResizeWindow(int, int);

    void on_VidExt_Init(VidExtRenderMode);
    void on_VidExt_SetWindowedMode(int, int, int, int);
    void on_VidExt_SetFullscreenMode(int, int, int, int);
    void on_VidExt_SetCaption(QString);
    void on_VidExt_ToggleFS(bool);
    void on_VidExt_Quit(void);

    void createOGLWindow(QSurfaceFormat *format, QThread *thread);
    void resizeMainWindow(int Width, int Height);

  protected:
    void run(void) override;

  private:
    QString rom;
    QString disk;
    QString errorMessage;
    QString netplay_ip;
    int netplay_port;
    int netplay_player;
    QJsonObject cheatsObject;
};
} // namespace Thread

#endif // EMULATIONTHREAD_HPP