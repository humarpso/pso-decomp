#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneRe4Sorcerer__sub_800EFAD4(s32 arg0, f32 farg0, f32 farg1);
s32 TObjEneRe4Sorcerer__sub_800EFB60(s32, f32, f32);
s32 fn_800B9194(s32);
M2C_UNK fn_800B98C0(s32);
s32 fn_800BBE64(s32, M2C_UNK, M2C_UNK);

s32 TObjEneRe4Sorcerer__sub_800EFAD4(s32 arg0, f32 farg0, f32 farg1) {
    if (fn_800BBE64(arg0, arg0 + 0x3B0, 0x1E) != 0) {
        return TObjEneRe4Sorcerer__sub_800EFB60(arg0, farg0, farg1);
    }
    if (fn_800B9194(arg0) != 0) {
        return 1;
    }
    fn_800B98C0(arg0);
    return 0;
}

}
