#ifndef PSO_ENEMY_TOBJENENANODRAGO_H
#define PSO_ENEMY_TOBJENENANODRAGO_H

#include "types.h"

struct NanoDragoVector { f32 x, y, z; };
struct NanoDragoMovementParams { f32 f0; u8 unknown04[4]; s32 turn; };

struct TObjEneNanoDrago {
    u8 unknown00[0x30];
    s32 flags30;
    u8 unknown34[4];
    NanoDragoVector pos;
    NanoDragoVector m_44;
    NanoDragoVector m_50;
    u8 unknown5C[4];
    s32 angle;
    u8 unknown64[0xA4 - 0x64];
    u32 m_a4;
    u8 unknownA8[0x10];
    s16 fb8;
    u8 unknownBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 unknownE0[0x1B0];
    NanoDragoVector m_290;
    NanoDragoVector home;
    u8 *target;
    u8 unknown2AC[0xC];
    s16 hpmax;
    s16 m_2ba;
    u8 unknown2BC[0x70];
    s16 hp;
    u16 m_32e;
    u8 unknown330[0xE];
    u16 m_33e;
    u8 unknown340[0x10];
    NanoDragoMovementParams *params;
    u8 unknown354[0x14];
    u32 m_368;
    u32 m_36c;
    u8 unknown370[0xC];
    s32 state;
    u8 unknown380[8];
    s32 flags388;
    u16 m_38c;
    u8 unknown38E[2];
    NanoDragoVector m_390;
    u8 unknown39C[0x34];
    s32 accum;
    f32 t;
    f32 speed;
    u32 m_3dc;
    s32 toggle;
    u8 unknown3E4[4];
    void *m_3e8;
    u8 unknown3EC[0x20];
    void *m_40c;

    void update_circling_state();
};

#endif
