#ifndef PSO_ENEMY_TOBJENERECONBOMB_H
#define PSO_ENEMY_TOBJENERECONBOMB_H

#include "types.h"

struct TObjEneReconBomb
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x1E0];
    void* m_248;
    u8 _pad24C[0xB0];
    void* m_2fc;
    u8 _pad300[0x34];
    u32 m_334;
    u16 m_338;
    u8 _pad33A[0x2];
    void* m_33c;
    u8 _pad340[0x18];
    u32 m_358;
    u32 m_35c;
    u32 m_360;
    void render();
    void run_task();
};

#endif
