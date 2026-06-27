#ifndef PSO_BOSS_TBOSS7PHOTONBULLET_H
#define PSO_BOSS_TBOSS7PHOTONBULLET_H

#include "types.h"

struct TBoss7PhotonBullet
{
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
    void* m_d8;
    u8 _padDC[0x8];
    u32 m_e4;
    u32 m_e8;
    u8 _padEC[0x4];
    u32 m_f0;
    u32 m_f4;
};

#endif
