#ifndef PSO_BOSS_TBOSS5GRYPHONSHOCKWAVE_H
#define PSO_BOSS_TBOSS5GRYPHONSHOCKWAVE_H

#include "types.h"

struct TBoss5GryphonShockWave
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u16 m_28;
    u8 _pad2A[0x2];
    void* m_2c;
    u8 _pad30[0x8];
    u32 m_38;
    u32 m_3c;
    void* m_40;
    u8 _pad44[0xC];
    void* m_50;
    u8 _pad54[0xC];
    void* m_60;
    static void render();
    void run_task();
};

#endif
