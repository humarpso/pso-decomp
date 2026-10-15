#ifndef PSO_BOSS_TBOSS7LASERLIGHT_H
#define PSO_BOSS_TBOSS7LASERLIGHT_H

#include "types.h"

struct TBoss7LaserLight
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    void* m_28;
    u8 _pad2C[0xC];
    void* m_38;
    u8 _pad3C[0x4];
    u32 m_40;
    static void render();
    void run_task();
};

#endif
