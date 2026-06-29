#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_803D8D00();
M2C_UNK fn_803D97B4(s32);
extern f32 lbl_805DB158;

s32 fn_80141D1C(s32 arg0) {
    if (fn_803D8D00() < lbl_805DB158) {
        return 0;
    }
    fn_803D97B4(arg0);
    return 1;
}

}
