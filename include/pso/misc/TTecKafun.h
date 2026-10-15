#ifndef PSO_MISC_TTECKAFUN_H
#define PSO_MISC_TTECKAFUN_H

#include "types.h"

struct TTecKafun
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x90];
    u16 m_b4;
    u8 _padB6[0x32];
    u32 m_e8;
    u8 _padEC[0x4];
    u32 m_f0;
    u32 m_f4;
    u32 m_f8;
    u32 m_fc;
    static void render();
    void run_task();
    static void create(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1);
    static void create(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1);
};

#endif
