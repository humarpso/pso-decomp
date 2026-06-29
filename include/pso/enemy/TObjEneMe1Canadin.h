#ifndef PSO_ENEMY_TOBJENEME1CANADIN_H
#define PSO_ENEMY_TOBJENEME1CANADIN_H

#include "types.h"

struct TObjEneMe1Canadin
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x254];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    void* m_3cc;
    u8 _pad3D0[0x30];
    u32 m_400;
    u32 m_404;
    u8 _pad408[0x4];
    u32 m_40c;
    u8 _pad410[0x5C];
    u32 m_46c;
    u32 m_470;
    u8 _pad474[0x40];
    u32 m_4b4;
    u32 m_4b8;
    u8 _pad4BC[0xC];
    u16 m_4c8;
};

#endif
