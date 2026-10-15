#include "types.h"

extern "C" {

void rocket_punch_draw(u8 *arg0);
s32 clear_flags__11TAdRicoRingFPvUi(void *, s32);
s32 set_flags__10TObjPlayerFPvUi(void *, s32);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, void *);
s32 draw_weapon_model(void *);
s32 draw_weapon_at_joint(void *, s32);

void rocket_punch_draw(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
    set_flags__10TObjPlayerFPvUi(arg0 + 0x1F8, 1);
    draw_weapon_model(arg0);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x1FC);
    *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x180);
    clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1F8, 1);
    draw_weapon_at_joint(arg0, 0x23);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x208);
    *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
}

}
