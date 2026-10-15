#ifndef PSO_MISC_TTECDEBAND_H
#define PSO_MISC_TTECDEBAND_H

#include "types.h"

struct TTecDeband
{
    u32 m_1c;
    u8 _pad20[0x84];
    s16 m_a4;
    u8 _padA6[0x2];
    u16 m_a8;
    u8 _padAA[0x2];
    u32 m_ac;
    u8 _padB0[0x2C];
    u32 m_dc;
    u32 m_e0;
    u8 _padE4[0x58];
    u32 m_13c;
    int init_params();
    void update_effect_params();
    static void create(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void create(s32 arg0, s32 arg1, s32 arg2);
    static void render();
    void play_state_sound();
};

#endif
