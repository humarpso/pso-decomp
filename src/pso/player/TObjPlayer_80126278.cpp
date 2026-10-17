#include "types.h"
#include "pso/player/TObjPlayer_80126278.h"

extern "C" {

s32 get_id__13TItemProArmorFv(void *);
s32 freeze_curse_timer_ct(s32, u32, s32, s32, f32);
s32 __nw__15TItemHeapObjectFUl(s32);
}

extern f32 lbl_805DAD74;

void frozen_shooter_start_curse(void *item_pro_armor) {
    s32 temp_r3;

    if ((u32) *(u32 *)((s8 *)item_pro_armor + 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3 != 0) {
            freeze_curse_timer_ct(temp_r3, *(u32 *)((s8 *)item_pro_armor + 0x174), get_id__13TItemProArmorFv(item_pro_armor), 0xE10, lbl_805DAD74);
        }
    }
}
