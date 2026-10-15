#ifndef PSO_ENEMY_TOBJENERECOBOX_H
#define PSO_ENEMY_TOBJENERECOBOX_H

#include "types.h"

struct TObjEneRecobox
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x7C];
    s16 m_b8;
    u8 _padBA[0x26C];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x6C];
    void* m_3c0;
    u8 _pad3C4[0x1C];
    u32 m_3e0;
    void* m_3e4;
    u8 _pad3E8[0xC];
    u32 m_3f4;
    u32 m_3f8;
    u8 _pad3FC[0x10];
    u32 m_40c;
    u32 m_410;
    u32 m_414;
    u8 _pad418[0x48];
    void* m_460;
    u8 _pad464[0x74];
    u32 m_4d8;
    u32 m_4dc;
    u32 m_4e0;
    u32 m_4e4;
    u32 m_4e8;
    u32 m_4ec;
    static u32 remap_area_sound_id(u32 arg0);
    static void release_static_instance();
    static void load_resources();
};

#endif
