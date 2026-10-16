#ifndef PSO_OBJECT_TOBJWARPJUNG_H
#define PSO_OBJECT_TOBJWARPJUNG_H

#include "types.h"
#include "pso/object/TObjAreaWarp.h"

struct TObjWarpJung : public TObjAreaWarp {
    virtual ~TObjWarpJung();
    void render();
    void run_task();
    static f32 get_static_field4_as_float();
    static void set_global_render_param();
    static void render_warp_effect(s32 arg0, s32 arg1);
    static void render_warp(void* a0);
    static s32 update_warp_display();
    u8 unk_AC[0x1C];
};

typedef char TObjWarpJung_size[sizeof(TObjWarpJung) == 0xC8 ? 1 : -1];
#endif
