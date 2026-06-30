#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F58A4(void *, s32, s32, s32);
M2C_UNK fn_800F5A50();
s32 TOBoss4Rock__sub_80147AA8(s32);
extern s32 lbl_805D5318;
extern s32 lbl_805D531C;
extern s32 lbl_805D5320;

void *fn_800F5CF0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    lbl_805D5320 = 0;
    fn_800F5A50();
    M2C_FIELD(arg0, s32 *, 8) = TOBoss4Rock__sub_80147AA8(M2C_FIELD(arg0, s32 *, 4) * 8);
    M2C_FIELD(arg0, s32 *, 0xC) = TOBoss4Rock__sub_80147AA8(M2C_FIELD(arg0, s32 *, 0) * 4);
    lbl_805D5318 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xC);
    lbl_805D531C = temp_r6;
    lbl_805D5320 = 0;
    fn_800F58A4(arg0, arg1, arg2, temp_r6);
    return arg0;
}

}
