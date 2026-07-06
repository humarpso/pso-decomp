#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80269D24(s32, void *, s32);
f32 fn_803D647C(f32);
extern const f32 lbl_805DD238;

void fn_80269D48(s32 arg0, void *arg1) {
    fn_80269D24(arg0, arg1, (s32) fn_803D647C((M2C_FIELD(arg1, f32 *, 4) - lbl_805DD238) / lbl_805DD238) + 2);
}

}
