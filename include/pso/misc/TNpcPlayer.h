#ifndef PSO_MISC_TNPCPLAYER_H
#define PSO_MISC_TNPCPLAYER_H

#include "types.h"

struct TNpcPlayer
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x4];
    s16 m_2c;
    u8 _pad2E[0x2];
    void* m_30;
    u8 _pad34[0x28];
    void* m_5c;
    u8 _pad60[0x14];
    u32 m_74;
    u32 m_78;
    u32 m_7c;
    u32 m_80;
    u32 m_84;
    u8 _pad88[0x4];
    u8 m_8c;
    u8 m_8d;
    u16 m_8e;
    u8 _pad90[0x34];
    u32 m_c4;
    u32 m_c8;
    u32 m_cc;
    u8 _padD0[0xC];
    void* m_dc;
};

#endif
