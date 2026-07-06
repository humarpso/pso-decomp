#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80027B78(f32, f32, f32);
extern const f32 lbl_805D8010;
extern const f32 lbl_805D809C;
extern const f32 lbl_805D80A0;

void fn_80027B4C(void) {
    fn_80027B78(lbl_805D8010, lbl_805D809C, lbl_805D80A0);
}

}
