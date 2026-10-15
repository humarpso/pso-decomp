#include "types.h"

extern "C" {

void marina_bag_marker(s32 arg0);
void marina_bag_start_regen(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
s32 spawn_particle_effect(s32 *, s32);
s32 init_item_timer_event__10TObjPlayerFPv(s32, u32, s32, s32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s32 draw_icon__10TObjPlayerFPvii(s32, s32, s32 *);
s32 __nw__15TItemHeapObjectFUl(s32);

void marina_bag_marker(s32 arg0) {
    s32 sp8;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8);
        spawn_particle_effect(&sp8, 0x1BE);
    }
}

void marina_bag_start_regen(void *arg0) {
    s32 temp_r3;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFPv(temp_r3, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
