#ifndef PSO_OBJECT_TOBJCURTAINLOBBY_H
#define PSO_OBJECT_TOBJCURTAINLOBBY_H

#include "types.h"

struct TObjCurtainLobby
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x64];
    u32 m_c8;
    void render();
    void run_task();
    static void *create(void *arg0);
    static void close_dialog_window();
    static void load_resources();
};

#endif
