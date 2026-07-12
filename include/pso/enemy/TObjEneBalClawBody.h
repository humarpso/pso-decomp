#ifndef PSO_ENEMY_TOBJENEBALCLAWBODY_H
#define PSO_ENEMY_TOBJENEBALCLAWBODY_H

#include "types.h"

struct TObjEneBalClawBody
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
    u8 _pad2BC[0x70];
    s16 m_32c;
    u16 m_32e;
    u8 _pad330[0xE];
    u16 m_33e;
    u8 _pad340[0x78];
    u32 m_3b8;
    u8 _pad3BC[0x1C];
    u16 m_3d8;
    u8 _pad3DA[0x2];
    u32 m_3dc;
    u32 m_3e0;
    u32 m_3e4;
    u32 m_3e8;
};

#endif
