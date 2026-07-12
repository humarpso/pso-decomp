#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TRaderMapCore__sub_80053A88(void *arg0, void *arg1);

extern const f32 lbl_805D8B58;
extern const f32 lbl_805D8B5C;

void TRaderMapCore__sub_80053A88(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8B5C);
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8B5C);
}

}
