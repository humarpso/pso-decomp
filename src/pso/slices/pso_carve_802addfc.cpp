#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802ADCD8();
extern f32 lbl_805DE15C;
extern f32 lbl_805DE160;
extern f32 lbl_805DE164;

void fn_802ADDFC(void *arg0, f32 farg0) {
    if (fn_802ADCD8() != 0) {
        farg0 += lbl_805DE15C;
    } else {
        farg0 += lbl_805DE160;
    }
    farg0 += lbl_805DE164;
    if (M2C_FIELD(arg0, f32 *, 0x3C) != farg0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 8;
    }
}

}
