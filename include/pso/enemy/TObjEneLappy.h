#ifndef PSO_ENEMY_TOBJENELAPPY_H
#define PSO_ENEMY_TOBJENELAPPY_H

#include "types.h"

struct LappyVec { f32 x, y, z; };
struct LappyObjectHeader { u8 object_header[0x18]; };

struct TObjEneLappy : LappyObjectHeader
{
    virtual void virtual_00();
    virtual void virtual_01();
    virtual void virtual_02();
    virtual void virtual_03();
    virtual void virtual_04();
    virtual void virtual_05();
    virtual void virtual_06();
    virtual void virtual_07();
    virtual void virtual_08();
    virtual void virtual_09();
    virtual void virtual_10();
    virtual void virtual_11();
    virtual void virtual_12();
    virtual void virtual_13();
    virtual void virtual_14();
    virtual void virtual_15();
    virtual void virtual_16();
    virtual s32 has_update_cadence(s32 period);
    s32 advance_flee_step();
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    LappyVec position;
    LappyVec previous_position;
    void* m_50;
    u8 _pad54[0x8];
    void* m_5c;
    u8 _pad60[0x44];
    u32 m_a4;
    u8 _padA8[0x10];
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
    LappyVec center;
    LappyVec velocity;
    u8 _pad314[0x18];
    s16 m_32c;
    u16 m_32e;
    u8 _pad330[0xA];
    s16 m_33a;
    u16 m_33c;
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u32 m_36c;
    u8 _pad370[0x4];
    s16 m_374;
    u8 _pad376[0x2];
    u8 m_378;
    u8 m_379;
    u16 m_37a;
    u8 _pad37C[0x2];
    u16 m_37e;
    u16 m_380;
    u16 m_382;
    u16 m_384;
    u8 _pad386[0x10];
    u16 m_396;
};

#endif
