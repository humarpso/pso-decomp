#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBalClawClaw__sub_8008DC90(void);
void check_claw_distance__18TObjEneBalClawClawFi(s32 arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(s32, M2C_UNK);
f32 fn_8013157C(s32, s32);

void TObjEneBalClawClaw__sub_8008DC90(void) {  }

extern f32 lbl_805D961C;

void check_claw_distance__18TObjEneBalClawClawFi(s32 arg0) {
    if (fn_8013157C(arg0 + 0x38, arg0 + 0x50) > lbl_805D961C) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 8);
        return;
    }
    update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
}

}
