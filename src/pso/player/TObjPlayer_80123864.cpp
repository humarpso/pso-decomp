#include "types.h"
#include "pso/item/TUnk_804A1B40.h"

extern "C" {

void reserved_53__13TUnk_804A1B40Fv(u8 *arg0);
s32 draw_weapon_model();
s32 draw_weapon_at_joint(void *, int);

void TUnk_804A1B40::reserved_53() {
    s32 temp_r31;

    temp_r31 = *(s32 *)((s8 *)((u8 *)this) + 0xF4);
    draw_weapon_model();
    *(s32 *)((s8 *)((u8 *)this) + 0xF4) = (s32) *(s32 *)((s8 *)((u8 *)this) + 0x188);
    draw_weapon_at_joint(((u8 *)this), 0x23);
    *(s32 *)((s8 *)((u8 *)this) + 0xF4) = temp_r31;
}

}
