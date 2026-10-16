#ifndef PSO_OBJECT_TOBJWARPLOBBY_H
#define PSO_OBJECT_TOBJWARPLOBBY_H

#include "types.h"

struct TObjWarpLobby
{
    void run_task();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x24];
    u32 m_88;
    u8 _pad8C[0x24];
    u32 m_b0;
    u8 _padB4[0x18];
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    static void release_static();
    void open_lobby_menu();
    void render();
};

#endif
