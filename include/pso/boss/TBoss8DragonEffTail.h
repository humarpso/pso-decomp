#ifndef PSO_BOSS_TBOSS8DRAGONEFFTAIL_H
#define PSO_BOSS_TBOSS8DRAGONEFFTAIL_H

#include "types.h"

struct TBoss8DragonEffTail
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x4];
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    u32 m_b8;
    u32 m_bc;
    void* m_c0;
    static void render();
    void enable();
    void disable();
    int get_state();
    static void free_statics();
};

#endif
