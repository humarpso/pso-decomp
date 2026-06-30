#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803DEE6C(M2C_UNK);
M2C_UNK fn_803DEEAC();
M2C_UNK fn_803DEECC(s32, f32);
M2C_UNK fn_803DF160(M2C_UNK, s32);
extern s32 lbl_805D6668;
extern f32 lbl_805DDF88;

void fn_802A4DE8(s32 arg0, s32 arg1) {
    fn_803DEE6C(1);
    fn_803DA798(lbl_805D6668);
    fn_803DF160(0, arg1);
    fn_803DEECC(arg0 + 0x1C, lbl_805DDF88);
    fn_803DEEAC();
    fn_803DEE6C(1);
    fn_803DA798(lbl_805D6668);
    fn_803DF160(0, arg1);
    fn_803DEECC(arg0 + 0x3C, lbl_805DDF88);
    fn_803DEEAC();
}

}
