#ifndef PSO_OBJECT_TOBJTANK_H
#define PSO_OBJECT_TOBJTANK_H

#include "types.h"

struct TObjTank
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    void render();
    static void run_task();
    static void free_globals();
    static void load_globals();
};

#endif
