#ifndef PSO_BOSS_TBOSS6TYPE2_H
#define PSO_BOSS_TBOSS6TYPE2_H

#include "types.h"
#include <stddef.h>

struct TBoss6Type2Point { f32 x, y, z; };

struct TBoss6Type2
{
    u8 _unknown0[0x1C];
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    TBoss6Type2Point position;
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    u8 _pad54[0x8];
    void* m_5c;
    u32 m_60;
    u8 _pad64[0x10];
    void* m_74;
    u8 _pad78[0x230];
    u32 m_2a8;
    u8 _pad2AC[0x38];
    u32 m_2e4;
    u8 _pad2E8[0x44];
    s16 m_32c;
    u8 _pad32E[0x10];
    u16 m_33e;
    u8 _pad340[0x34];
    u32 m_374;
    u8 _pad378[0x80];
    u32 m_3f8;
    u32 m_3fc;
    u8 _pad400[0x18];
    u32 m_418;
    u8 _pad41C[0x4];
    u32 m_420;
    u32 m_424;
    u32 m_428;
    u32 m_42c;
    u32 m_430;
    u8 _pad434[0x24];
    u32 m_458;
    u8 _pad45C[0x8];
    u16 m_464;
    u16 m_466;
    u16 m_468;
    u16 m_46a;
    u32 m_46c;
    u32 m_470;
    u32 m_474;
    u8 m_478;
    u8 _pad479[0x3];
    u32 m_47c;
    u32 m_480;
    TBoss6Type2Point target_position;
    u8 _pad490[0x4F8 - 0x490];
    u32 m_4f8;
    u8 _pad4FC[0xC];
    u32 m_508;
    u8 _pad50C[0x520 - 0x50C];
    s32 lower_contact_index;
    TBoss6Type2Point lower_contact_delta;
    TBoss6Type2Point previous_lower_contact;
    u8 _pad53C[0x59C - 0x53C];
    void* m_59c;
    u8 _pad5A0[0x5C0 - 0x5A0];
    TBoss6Type2Point contact_point_5c0;
    u8 _pad5CC[0x5FC - 0x5CC];
    TBoss6Type2Point contact_point_5fc;
    u8 _pad608[0x764 - 0x608];
    u32 m_764;
    void* m_768;

    void update_lower_contact_delta();
    s32 turn_toward_target_position();
};

typedef char TBoss6Type2_offset_position[(offsetof(TBoss6Type2, position) == 0x38) ? 1 : -1];
typedef char TBoss6Type2_offset_target_position[(offsetof(TBoss6Type2, target_position) == 0x484) ? 1 : -1];
typedef char TBoss6Type2_offset_lower_contact_index[(offsetof(TBoss6Type2, lower_contact_index) == 0x520) ? 1 : -1];
typedef char TBoss6Type2_offset_lower_contact_delta[(offsetof(TBoss6Type2, lower_contact_delta) == 0x524) ? 1 : -1];
typedef char TBoss6Type2_offset_previous_lower_contact[(offsetof(TBoss6Type2, previous_lower_contact) == 0x530) ? 1 : -1];
typedef char TBoss6Type2_offset_contact_point_5c0[(offsetof(TBoss6Type2, contact_point_5c0) == 0x5c0) ? 1 : -1];
typedef char TBoss6Type2_offset_contact_point_5fc[(offsetof(TBoss6Type2, contact_point_5fc) == 0x5fc) ? 1 : -1];
typedef char TBoss6Type2_offset_m_764[(offsetof(TBoss6Type2, m_764) == 0x764) ? 1 : -1];
typedef char TBoss6Type2_offset_m_768[(offsetof(TBoss6Type2, m_768) == 0x768) ? 1 : -1];

#endif
