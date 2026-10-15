#ifndef PSO_MISC_TORAINBOWCAVE01_H
#define PSO_MISC_TORAINBOWCAVE01_H

#include "types.h"

struct TORainbowCave01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x70];
    void* m_d4;
    void update();
    s32 is_player_in_range(f32 farg0);
    void init_light_params(int _w1, f32 _w2, f32 _w3);
    void render();
    void run_task();
    static void *create(void *arg0);
    static void free_static_data();
    static void load_resource_instance();
};

#endif
