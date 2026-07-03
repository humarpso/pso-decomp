#ifndef PSO_ENEMY_TOBJENEBALCLAWCLAW_H
#define PSO_ENEMY_TOBJENEBALCLAWCLAW_H

#include "types.h"

struct TObjEneBalClawClaw
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x7C];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1B0];
    void* m_290;
    u8 _pad294[0x8];
    void* m_29c;
    u8 _pad2A0[0x18];
    s16 m_2b8;
    s16 m_2ba;
    u8 _pad2BC[0x40];
    void* m_2fc;
    u8 _pad300[0x2C];
    s16 m_32c;
    u16 m_32e;
    u8 _pad330[0xE];
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x4C];
    u32 m_3b8;
};

#endif
