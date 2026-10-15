#include "types.h"

extern "C" {

void create_shield__10TObjPlayerFPv(void *arg0);
void trigger_megid_special__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
u8 get_slot_count__14TItemProShieldFPv();
s32 create_item_eff_cane__10TObjPlayerFiUiii(s32, void *, s32, s32);
s32 drain_owner_hp_fraction__10TObjPlayerFPvf(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
s32 __nw__15TItemHeapObjectFUl(s32);
s32 create_ex__9TTecMegidFiiii(void *, s32 *, s32, s32);
s32 ct__13TItemProArmorFPv(s32, u32, s32, s32);

void create_shield__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x174) != 0U) {
        if (get_slot_count__14TItemProShieldFPv() == 0) {
            temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
            if (temp_r3 != 0) {
                ct__13TItemProArmorFPv(temp_r3, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0x96);
            }
        } else {
            temp_r3_2 = __nw__15TItemHeapObjectFUl(0x2C);
            if (temp_r3_2 != 0) {
                ct__13TItemProArmorFPv(temp_r3_2, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
            }
        }
    }
}

extern s32 tl_05;
extern f32 lbl_805DAF18;

void trigger_megid_special__10TObjPlayerFPv(void *arg0) {
    s32 sp8;
    void *temp_r3;

    if (get_slot_count__14TItemProShieldFPv() == 1) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, 2, 0x101);
        if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
            if (draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8) != 0) {
                temp_r3 = *(void **)((s8 *)arg0 + 0xF0);
                create_ex__9TTecMegidFiiii(temp_r3, &sp8, *(s32 *)((s8 *)temp_r3 + 0x60), 0);
                drain_owner_hp_fraction__10TObjPlayerFPvf(arg0, lbl_805DAF18);
            }
        } else {
            update_active_game_effect__10TObjPlayerFPv(arg0);
        }
    }
}

}
