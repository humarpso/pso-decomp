#ifndef PSO_BOSS_TBOSS3VOLOPTCORE_H
#define PSO_BOSS_TBOSS3VOLOPTCORE_H

#include "types.h"

struct TBoss3VoloptCore
{
    u8 _pad1C[0x88];
    u32 m_a4;
    u8 _padA8[0x10];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1D8];
    s16 m_2b8;
    s16 m_2ba;
    u8 _pad2BC[0x70];
    s16 m_32c;
    u16 m_32e;
    u8 _pad330[0xE];
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x1C];
    u32 m_388;
    u8 _pad38C[0x4];
    u32 m_390;
    u8 _pad394[0x34];
    u32 m_3c8;
};

extern "C" {
void TBoss3VoloptCore__sub_80040788(void);
void *TBoss3VoloptCore__sub_800407E0(void *arg0);
void *TBoss3VoloptCore__sub_80040A7C(void *arg0, void *arg1, void *arg1_arg);
void TObjPlayer__sub_8003F81C(u8 *arg0);
void TObjPlayer__sub_8003F9D4(void *arg0_);
void TObjPlayer__sub_8003FCD0(u8 *arg0);
void TObjPlayer__sub_800401CC(u8 *arg0);
void TObjPlayer__sub_80040558(void *_w0);
s32 TObjPlayer__sub_80040AE4(s32 i);
void cache_volopt_resource_ptrs(void);
void *create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3);
}

#endif
