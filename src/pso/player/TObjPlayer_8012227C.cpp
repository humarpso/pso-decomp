#include "types.h"

extern "C" {

void guld_milla_draw(u8 *arg0);
s32 draw_status_icon__10TObjPlayerFl(void *, void *);
s32 draw_weapon_model();
s32 draw_weapon_at_joint(void *, int);

void guld_milla_draw(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
    draw_weapon_model();
    draw_status_icon__10TObjPlayerFl(arg0, arg0 + 0x1F8);
    *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x180);
    draw_weapon_at_joint(arg0, 0x23);
    draw_status_icon__10TObjPlayerFl(arg0, arg0 + 0x204);
    *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
}

}
