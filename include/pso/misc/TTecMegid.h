#ifndef PSO_MISC_TTECMEGID_H
#define PSO_MISC_TTECMEGID_H

#include "types.h"

struct TTecMegid
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x34];
    u32 m_58;
    u8 _pad5C[0x6A];
    s16 m_c6;
    u16 m_c8;
    u8 _padCA[0x2E];
    u32 m_f8;
    u8 _padFC[0x34];
    u32 m_130;
    u8 _pad134[0x40];
    u32 m_174;
    void update_by_state();
    void spawn_particle_emitters();
    void init_parameters();
    static void create(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void create_ex(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void render();
    u8 *construct_facing(s32 _w1, s32 _w2, s32 _w3, s32 _w4);
    void update_lifetime();
};

#endif
