#include "types.h"

extern "C" {

void update_weapon_kill_count__10TObjPlayerFPv(void *arg0);
void sealed_j_sword_start_timers(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
u16 TObjPlayer__sub_80100474(void *);
s32 TObjPlayer__sub_8010047C(void *, u16);
u32 test_item_flags__10TObjPlayerFPvUi(void *, s32);
s32 add_item_flags__10TObjPlayerFPvUi(void *, s32);
s16 get_kill_count__10TObjPlayerFPv(s32);
s32 slow_curse_timer_ct(s32, u32, s32, s32, f32);
s32 __nw__15TItemHeapObjectFUl(s32);

void update_weapon_kill_count__10TObjPlayerFPv(void *arg0) {
    if ((s16) *(s16 *)((s8 *)arg0 + 0x1F8) < get_kill_count__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0xF0))) {
        TObjPlayer__sub_8010047C(arg0, (u16) (TObjPlayer__sub_80100474(arg0) + 1));
        *(s16 *)((s8 *)arg0 + 0x1F8) = get_kill_count__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0xF0));
    }
    if ((TObjPlayer__sub_80100474(arg0) >= 0x59D8U) && (test_item_flags__10TObjPlayerFPvUi(arg0, 0x200) == 0U)) {
        add_item_flags__10TObjPlayerFPvUi(arg0, 0x200);
    }
}

extern f32 lbl_805DAF20;

void sealed_j_sword_start_timers(void *arg0) {
    s32 temp_r3;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3 != 0) {
            slow_curse_timer_ct(temp_r3, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DAF20);
        }
    }
    *(s16 *)((s8 *)arg0 + 0x1F8) = get_kill_count__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0xF0));
}

}
