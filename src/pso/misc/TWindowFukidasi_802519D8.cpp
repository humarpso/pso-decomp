#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

s32 clamp_position__15TWindowFukidasiFPvPvf(void *arg0, void *arg1, f32 farg0);
f32 TWindowCtrlMain__sub_8024CB9C(s16);
f32 TWindowCtrlMain__sub_8024CBC0(s16);
f32 TWindowCtrlMain__sub_8024CBE4(s16);
f32 TWindowCtrlMain__sub_8024CC08(s16);

extern const f32 TWindowFukidasi__data_805DCCFC;
extern const f32 lbl_805DCD44;

s32 clamp_position__15TWindowFukidasiFPvPvf(void *arg0, void *arg1, f32 farg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 var_r31;

    var_r31 = 0;
    temp_f1 = TWindowFukidasi__data_805DCCFC + TWindowCtrlMain__sub_8024CC08(M2C_FIELD(arg0, s16 *, 0x20));
    if (M2C_FIELD(arg1, f32 *, 0) < temp_f1) {
        M2C_FIELD(arg1, f32 *, 0) = temp_f1;
        var_r31 = 1;
    }
    temp_f1_2 = (TWindowCtrlMain__sub_8024CBC0(M2C_FIELD(arg0, s16 *, 0x20)) - TWindowFukidasi__data_805DCCFC) - (M2C_FIELD(arg0, f32 *, 0x48) * farg0);
    if (M2C_FIELD(arg1, f32 *, 0) > temp_f1_2) {
        M2C_FIELD(arg1, f32 *, 0) = temp_f1_2;
        var_r31 = 1;
    }
    temp_f1_3 = lbl_805DCD44 + TWindowCtrlMain__sub_8024CBE4(M2C_FIELD(arg0, s16 *, 0x20));
    if (M2C_FIELD(arg1, f32 *, 4) < temp_f1_3) {
        M2C_FIELD(arg1, f32 *, 4) = temp_f1_3;
        var_r31 = 1;
    }
    temp_f1_4 = (TWindowCtrlMain__sub_8024CB9C(M2C_FIELD(arg0, s16 *, 0x20)) - lbl_805DCD44) - (M2C_FIELD(arg0, f32 *, 0x4C) * farg0);
    if (M2C_FIELD(arg1, f32 *, 4) > temp_f1_4) {
        M2C_FIELD(arg1, f32 *, 4) = temp_f1_4;
        var_r31 = 1;
    }
    return var_r31;
}

}
