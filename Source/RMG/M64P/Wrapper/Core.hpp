/*
 * Rosalie's Mupen GUI - https://github.com/Rosalie241/RMG
 *  Copyright (C) 2020 Rosalie Wanders <rosalie@mailbox.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 3.
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef M64P_WRAPPER_CORE_HPP
#define M64P_WRAPPER_CORE_HPP

#include "Types.hpp"
#include "Plugin.hpp"

#include <QString>
#include <QList>

namespace M64P
{
    namespace Wrapper
    {
        class Core
        {
        public:
            Core(void);
            ~Core(void);

            bool Init(m64p_dynlib_handle);

            bool HasPluginConfig(PluginType);
            bool OpenPluginConfig(PluginType);

            QList<Plugin_t> GetPlugins(PluginType);
            bool SetPlugin(Plugin_t);

            bool GetRomInfo(QString, RomInfo_t*);

            bool LaunchEmulation(QString);
            bool StopEmulation(void);
            bool PauseEmulation(void);
            bool ResumeEmulation(void);
            bool ResetEmulation(bool);

            QString GetLastError(void);

        private:
            QString error_Message;

            m64p_dynlib_handle handle;

            M64P::Wrapper::Plugin plugin_Rsp;
            M64P::Wrapper::Plugin plugin_Gfx;
            M64P::Wrapper::Plugin plugin_Audio;
            M64P::Wrapper::Plugin plugin_Input;

            M64P::Wrapper::Plugin* plugin_Get(PluginType);
            bool plugin_Attach(Plugin*);
            bool plugins_Attach(void);
            bool plugins_Detach(void);

            bool rom_Open(QString);
            bool rom_Close(void);

            bool emulation_QueryState(m64p_emu_state*);
            bool emulation_IsRunning(void);
            bool emulation_IsPaused(void);
        };
    } // namespace Wrapper
} // namespace M64P

#endif // M64P_WRAPPER_CORE_HPP