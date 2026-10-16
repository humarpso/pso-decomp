#ifndef PSO_BOSS_TBOSS2PHOTONBULLET_H
#define PSO_BOSS_TBOSS2PHOTONBULLET_H

#include "types.h"

struct TBoss2PhotonBullet
{
    void render();
    void run_task();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x68];
    u32 m_a4;
    u8 _padA8[0xC];
    void* m_b4;
    u8 _padB8[0x8];
    void* m_c0;
    u8 _padC4[0x8];
    void* m_cc;
    u8 _padD0[0x8];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x4];
    u32 m_e4;
};

#endif
