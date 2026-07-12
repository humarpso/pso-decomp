#ifndef PSO_BOSS_TBOSS5GRYPHON_H
#define PSO_BOSS_TBOSS5GRYPHON_H

#include "types.h"

struct TBoss5Gryphon
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x74];
    u32 m_b0;
    u8 _padB4[0x4];
    s16 m_b8;
    u8 _padBA[0x1F6];
    u32 m_2b0;
    u8 _pad2B4[0x72];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x12C];
    u32 m_480;
    u8 _pad484[0x10];
    void* m_494;
    u8 _pad498[0x24];
    u32 m_4bc;
    u32 m_4c0;
    void* m_4c4;
    u8 _pad4C8[0x18];
    u32 m_4e0;
    u32 m_4e4;
    u8 _pad4E8[0x78];
    void* m_560;
    u8 _pad564[0x8];
    void* m_56c;
    u8 _pad570[0x8];
    u32 m_578;
    u32 m_57c;
    void* m_580;
    u8 _pad584[0x6C];
    u32 m_5f0;
    void* m_5f4;
    u8 _pad5F8[0xE4];
    u32 m_6dc;
    u32 m_6e0;
    u32 m_6e4;
    u32 m_6e8;
    u32 m_6ec;
    u32 m_6f0;
    u8 _pad6F4[0x2C];
    u32 m_720;
    u32 m_724;
    u32 m_728;
    u32 m_72c;
    u32 m_730;
    u8 _pad734[0x40];
    u32 m_774;
    u32 m_778;
};

#endif
