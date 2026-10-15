#ifndef PSO_OBJECT_TOBJWARPJUNG_H
#define PSO_OBJECT_TOBJWARPJUNG_H

#include "types.h"

struct TObjWarpJung
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x28];
    u32 m_8c;
    u8 _pad90[0x30];
    u32 m_c0;
    void render();
    void run_task();
    static f32 get_static_field4_as_float();
    static void set_global_render_param();
    static void render_warp_effect(s32 arg0, s32 arg1);
    static void render_warp(void* a0);
    static s32 update_warp_display();
};

#endif
