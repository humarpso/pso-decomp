#ifndef PSO_MISC_TOMONITORMACHINE01_H
#define PSO_MISC_TOMONITORMACHINE01_H

#include "types.h"

struct TOMonitorMachine01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u8 _pad88[0x24];
    u32 m_ac;
    void run_task();
    void render();
    void *create();
    static void reset_static_state();
    static void load_resources();
};

#endif
