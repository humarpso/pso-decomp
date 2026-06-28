#ifndef PSO_MISC_TPARTICLECTRL_H
#define PSO_MISC_TPARTICLECTRL_H

#include "types.h"

struct TParticleCtrl
{
    u8 _pad1C[0x4];
    u32 m_20;
    u8 _pad24[0x4];
    u32 m_28;
    u16 m_2c;
    u16 m_2e;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u8 _pad40[0x8];
    u32 m_48;
    u32 m_4c;
    u32 m_50;
    u32 m_54;
    u32 m_58;
    u8 _pad5C[0x4];
    void* m_60;
    u8 _pad64[0x8];
    u32 m_6c;
    u32 m_70;
    u32 m_74;
};

#endif
