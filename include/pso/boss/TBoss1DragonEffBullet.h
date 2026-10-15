#ifndef PSO_BOSS_TBOSS1DRAGONEFFBULLET_H
#define PSO_BOSS_TBOSS1DRAGONEFFBULLET_H

#include "types.h"

struct TBoss1DragonEffBullet
{
    void* m_1c;
    u8 _pad20[0x8];
    void* m_28;
    u8 _pad2C[0x8];
    u32 m_34;
    u32 m_38;
    u8 _pad3C[0x8];
    u32 m_44;
    u32 m_48;
    static void render();
    void run_task();
};

#endif
