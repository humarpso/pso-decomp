#include "types.h"

extern "C" {

void draw_icon_selected__10TObjPlayerFi(s32 arg0);
s32 spawn_particle_effect(s32 *, s32);
s32 draw_icon__10TObjPlayerFPvii(s32, s32, s32 *);

void draw_icon_selected__10TObjPlayerFi(s32 arg0) {
    s32 sp8[6];

    draw_icon__10TObjPlayerFPvii(arg0, 1, sp8);
    spawn_particle_effect(sp8, 0xC1);
}

}
