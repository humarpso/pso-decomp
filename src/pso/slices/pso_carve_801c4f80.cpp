#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801C19C8(f32);
M2C_UNK fn_801C4FBC(s32, f32);
extern const f32 lbl_805DC300;

void fn_801C4F80(s32 arg0) {
    fn_801C19C8(lbl_805DC300);
    fn_801C4FBC(arg0, lbl_805DC300);
}

}
