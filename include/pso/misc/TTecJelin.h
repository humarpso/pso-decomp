#ifndef PSO_MISC_TTECJELIN_H
#define PSO_MISC_TTECJELIN_H

#include "types.h"

struct TTecJelin
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x56];
    s16 m_7a;
    u8 _pad7C[0x38];
    u16 m_b4;
    u8 _padB6[0x2];
    u32 m_b8;
    u8 _padBC[0x2C];
    u32 m_e8;
    u32 m_ec;
    u32 m_f0;
    void init_tech_params();
    static void create(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void render();
};

#endif
