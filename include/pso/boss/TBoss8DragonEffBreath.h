#ifndef PSO_BOSS_TBOSS8DRAGONEFFBREATH_H
#define PSO_BOSS_TBOSS8DRAGONEFFBREATH_H

#include "types.h"

struct TBoss8DragonEffBreath
{
    void* m_1c;
    u8 _pad20[0x8];
    void* m_28;
    u8 _pad2C[0x8];
    u32 m_34;
    u16 m_38;
    u8 _pad3A[0x2];
    u32 m_3c;
    static void render();
    void run_task();
};

#endif
