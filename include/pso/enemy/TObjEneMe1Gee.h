#ifndef PSO_ENEMY_TOBJENEME1GEE_H
#define PSO_ENEMY_TOBJENEME1GEE_H

#include "types.h"

struct TObjEneMe1Gee
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
    u32 m_64;
    u8 _pad68[0x3C];
    u32 m_a4;
    u8 _padA8[0x10];
    u16 m_b8;
    u8 _padBA[0x242];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    void* m_3cc;
    u8 _pad3D0[0x10];
    u32 m_3e0;
    u8 _pad3E4[0x20];
    u32 m_404;
    u32 m_408;
    u8 _pad40C[0x4];
    u32 m_410;
    void* m_414;
    u8 _pad418[0x8];
    void* m_420;
    u8 _pad424[0xC];
    u32 m_430;
    u32 m_434;
    u8 _pad438[0x40];
    u32 m_478;
    u32 m_47c;
    u8 _pad480[0xC];
    u16 m_48c;
    static void load_resources();
    void draw_model();
    void update_missile();
    static void cache_result_805D6660();
    static void queue_debug_text(s32 arg0, char *arg1);
};

#endif
