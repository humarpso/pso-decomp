#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_effect_position__18TWindowEffectPartyFPvPv(void *arg0, void *arg1);
f32 get_scale__15TWindowCtrlMainFv(s32);

extern s32 lbl_805D53A0;
extern f32 lbl_805DCCC0;

void calc_effect_position__18TWindowEffectPartyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (lbl_805DCCC0 / get_scale__15TWindowCtrlMainFv(lbl_805D53A0));
}

}
