#include "types.h"
#include "pso/item/TUnk_804A08B8.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void emit_marker_effects__13TUnk_804A08B8Fv(s32 arg0);
void marina_bag_start_regen(void *arg0);
s32 get_id__13TItemProArmorFv(void *);
s32 spawn_particle_effect(s32 *, s32);
s32 init_item_timer_event__10TObjPlayerFv(s32, u32, s32, s32);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 __nw__15TItemHeapObjectFUl(s32);

void TUnk_804A08B8::emit_marker_effects() {
    s32 arg0 = (s32)this;
    s32 sp8;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        ((TObjPlayer *)arg0)->draw_icon((s32)2, (s32)(&sp8));
        spawn_particle_effect(&sp8, 0x1BE);
    }
}

void marina_bag_start_regen(void *arg0) {
    s32 temp_r3;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFv(temp_r3, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFv(arg0), 0x5A);
        }
    }
}

}
