#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);
extern f32 lbl_805DEEB0;

void fn_802FAB08(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DEEB0 * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x758)));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (lbl_805DEEB0 * fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x758)));
}

}
