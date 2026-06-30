#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007FF28(void *, M2C_UNK *);
M2C_UNK fn_8007FFF4(void *, M2C_UNK *);
M2C_UNK fn_800800EC(void *, void *, s32);
M2C_UNK fn_80141F1C();
M2C_UNK fn_80141F50();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803DEE6C(M2C_UNK);
M2C_UNK fn_803DEEAC();
M2C_UNK fn_803DF160(M2C_UNK, M2C_UNK);
extern s32 lbl_805D63F0;

void TDuelEffectNumber__vt2(void *arg0) {
    char sp8[0x20];

    fn_800800EC(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0x24));
    fn_80141F50();
    fn_803DEE6C(1);
    fn_803DA798(lbl_805D63F0);
    fn_803DF160(6, -1);
    fn_8007FFF4(arg0, (M2C_UNK *)&sp8);
    fn_8007FF28(arg0, (M2C_UNK *)&sp8);
    fn_803DEEAC();
    fn_80141F1C();
}

}
