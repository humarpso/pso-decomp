#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8036CDA8();
extern f32 lbl_805E03A8;
extern f32 lbl_805E03AC;

s32 fn_8036C268(void *arg0) {
    f32 temp_f1;

    if (fn_8036CDA8() == 0) {
        return 0;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    if ((temp_f1 < lbl_805E03A8) || (temp_f1 > lbl_805E03AC)) {
        return 0;
    }
    return 1;
}

}
