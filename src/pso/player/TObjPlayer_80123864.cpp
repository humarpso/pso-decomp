#include "types.h"

extern "C" {

void run_with_temp_level__10TObjPlayerFPv(u8 *arg0);
s32 draw_weapon_model();
s32 draw_weapon_at_joint(void *, int);

void run_with_temp_level__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
    draw_weapon_model();
    *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x188);
    draw_weapon_at_joint(arg0, 0x23);
    *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
}

}
