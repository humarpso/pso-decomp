#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern f32 lbl_805DB15C;
extern f32 lbl_805DB160;

s32 fn_80142450(f32 farg0) {
    if ((lbl_805DB160 < farg0) && (farg0 < lbl_805DB15C)) {
        return 1;
    }
    return 0;
}

}
