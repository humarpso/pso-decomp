#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D66D4(void *);
s32 fn_801D66DC(void *);
extern const f32 lbl_805DC3D8;

s32 fn_801D60F4(u8 *arg0) {
    if ((fn_801D66DC(arg0 + 0x4C) < 3) && (M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DC3D8) && (fn_801D66D4(arg0 + 0x4C) < 0)) {
        return 1;
    }
    return 0;
}

}
