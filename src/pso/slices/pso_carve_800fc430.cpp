#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_800FC0F8(void *);
M2C_UNK strncpy(void *, void *, M2C_UNK);
extern const f64 lbl_8043DAA0;
extern const f32 lbl_805DA9C0;

void fn_800FC430(u8 *arg0, u32 arg1) {
    if (arg1 == 0U) {
        M2C_FIELD(arg0, s8 *, 0x30) = 0;
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DA9C0;
        return;
    }
    strncpy(arg0 + 0x30, (void*)arg1, 0x1F);
    M2C_FIELD(arg0, s8 *, 0x4F) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) fn_800FC0F8(arg0 + 0x30);
}

}
