#ifndef PSO_ENEMY_TOBJENEGYARANZO_H
#define PSO_ENEMY_TOBJENEGYARANZO_H

#include "types.h"
#include "dolphin/mtx.h"

struct TObjEneGyaranzo
{
    void spawn_missile();

    u8 _pad00[0x1C];
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    Vec position;
    u8 _pad44[0x1C];
    s32 yaw;
    u8 _pad64[0x54];
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
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x20];
    u32 m_38c;
    u8 _pad390[0x18];
    u32 m_3a8;
    u32 m_3ac;
    u32 m_3b0;
    u32 m_3b4;
    u32 m_3b8;
    u8 _pad3BC[0x14];
    void* m_3d0;
    u8 _pad3D4[0x18];
    void* m_3ec;
};

#endif
