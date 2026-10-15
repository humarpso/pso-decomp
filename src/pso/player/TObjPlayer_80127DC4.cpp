#include "types.h"

extern "C" {

void yamigarasu_start_timers(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
s32 confusion_curse_timer_ct(s32, u32, s32, s32, f32);
s32 __nw__15TItemHeapObjectFUl(s32);
s32 ct__13TItemProArmorFPv(s32, u32, s32, s32);

extern f32 lbl_805DADD8;

void yamigarasu_start_timers(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3 != 0) {
            confusion_curse_timer_ct(temp_r3, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DADD8);
        }
        temp_r3_2 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3_2 != 0) {
            ct__13TItemProArmorFPv(temp_r3_2, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
