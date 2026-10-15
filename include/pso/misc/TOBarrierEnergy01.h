#ifndef PSO_MISC_TOBARRIERENERGY01_H
#define PSO_MISC_TOBARRIERENERGY01_H

#include "types.h"

struct TOBarrierEnergy01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x48];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    void*init();
    void play_ambient_loop_sound();
    void render();
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
    void update_anim_phase();
};

#endif
