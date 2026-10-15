#include "types.h"

extern "C" {

void frozen_shooter_start_curse(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
s32 freeze_curse_timer_ct(s32, u32, s32, s32, f32);
s32 __nw__15TItemHeapObjectFUl(s32);

extern f32 lbl_805DAD74;

void frozen_shooter_start_curse(void *arg0) {
    s32 temp_r3;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3 != 0) {
            freeze_curse_timer_ct(temp_r3, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DAD74);
        }
    }
}

}
