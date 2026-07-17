#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_shield_scale_to_unit__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK set_evp__12TItemProUnitFPvf(s32, f32);

extern f32 lbl_805DAD80;
extern f32 lbl_805DAD84;
extern f32 lbl_805DAD88;
extern f32 lbl_805DAD8C;
extern f32 lbl_805DAD90;

void apply_shield_scale_to_unit__10TObjPlayerFPv(void *arg0) {
    f32 var_f31;
    u8 temp_r3;

    var_f31 = lbl_805DAD80;
    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 0:
        var_f31 = lbl_805DAD84;
        break;
    case 1:
        var_f31 = lbl_805DAD88;
        break;
    case 2:
        var_f31 = lbl_805DAD8C;
        break;
    case 3:
        var_f31 = lbl_805DAD90;
        break;
    }
    set_evp__12TItemProUnitFPvf(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC, var_f31);
}

}
