#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK fn_803D9650(int);
extern u32 lbl_805D7774;
void TObjPlayer__sub_803D9624(u32 arg0);
M2C_UNK PSMTXCopy(int, int);
extern u32 lbl_805D7774;
void TObjPlayer__sub_803D9324(u32 arg0, u32 arg1);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
void TBoss8Dragon__sub_803D9394(u8 *arg0, u8 *arg1);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
void TBoss8Dragon__sub_803D94DC(u8 *arg0, u8 *arg1);
}

extern "C" {

#pragma push
#pragma peephole off
void TObjPlayer__sub_803D9324(u32 arg0, u32 arg1) {
    u32 var_r0;
    u32 var_r3;
    if (arg0 == 0U) {
        var_r0 = lbl_805D7774;
    } else {
        var_r0 = arg0;
    }
    if (arg1 == 0U) {
        var_r3 = lbl_805D7774;
    } else {
        var_r3 = arg1;
    }
    PSMTXCopy((int) (var_r3), (int) (var_r0));
}
#pragma pop

void TBoss8Dragon__sub_803D9394(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    temp_f27 = TBoss8Dragon__sub_803D64C0((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f28 = TBoss8Dragon__sub_803D64DC((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f29 = TBoss8Dragon__sub_803D64C0((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f30 = TBoss8Dragon__sub_803D64DC((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f31 = TBoss8Dragon__sub_803D64C0((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    temp_f1 = TBoss8Dragon__sub_803D64DC((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f1 * (temp_f28 * temp_f30)) + (temp_f31 * (temp_f27 * temp_f29)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) ((temp_f31 * (-temp_f28 * temp_f29)) + (temp_f1 * (temp_f27 * temp_f30)));
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f27 * (temp_f30 * temp_f31)) + (temp_f28 * (temp_f29 * temp_f1)));
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) ((temp_f29 * (-temp_f1 * temp_f27)) + (temp_f30 * (temp_f31 * temp_f28)));
}

void TBoss8Dragon__sub_803D94DC(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    temp_f27 = TBoss8Dragon__sub_803D64C0((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f28 = TBoss8Dragon__sub_803D64DC((int) ((s32) M2C_FIELD(arg0, s32 *, 0) >> 1));
    temp_f29 = TBoss8Dragon__sub_803D64C0((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f30 = TBoss8Dragon__sub_803D64DC((int) ((s32) M2C_FIELD(arg0, s32 *, 4) >> 1));
    temp_f31 = TBoss8Dragon__sub_803D64C0((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    temp_f1 = TBoss8Dragon__sub_803D64DC((int) ((s32) M2C_FIELD(arg0, s32 *, 8) >> 1));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f1 * (temp_f28 * temp_f30)) + (temp_f31 * (temp_f27 * temp_f29)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) ((temp_f31 * (temp_f28 * temp_f29)) + (temp_f1 * (temp_f27 * temp_f30)));
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f27 * (-temp_f30 * temp_f31)) + (temp_f28 * (temp_f29 * temp_f1)));
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) ((temp_f29 * (-temp_f1 * temp_f27)) + (temp_f30 * (temp_f31 * temp_f28)));
}

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D9624(u32 arg0) {
    u32 var_r3;
    u32 var_r3_2;
    u32 phi_r3;
    var_r3 = arg0;
    phi_r3 = var_r3;
    if (var_r3 == 0U) {
        var_r3_2 = lbl_805D7774;
        phi_r3 = var_r3_2;
    }
    fn_803D9650((int) (phi_r3));
}
#pragma pop

}
