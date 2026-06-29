#ifndef PSO_MISC_TCAMERACTRL_H
#define PSO_MISC_TCAMERACTRL_H

#include "types.h"

struct TCameraCtrl
{
    u8 m_1c;
    u8 _pad1D[0x3];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u8 _pad2C[0x8];
    u32 m_34;
    u8 _pad38[0x2C];
    u16 m_64;
    u8 _pad66[0x26];
    u32 m_8c;
    u32 m_90;
    u8 _pad94[0xE0];
    u32 m_174;
    u8 _pad178[0x18];
    u32 m_190;
    u32 m_194;
    u32 m_198;
    u32 m_19c;
    u8 _pad1A0[0x20];
    u32 m_1c0;
};

#endif
