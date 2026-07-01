#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKeyCave01__vt14(void *arg0);

extern f32 lbl_805DB744;
extern f32 lbl_805DB748;

void TOKeyCave01__vt14(void *arg0) {
    s32 temp_r4;

    if (lbl_805DB748 < M2C_FIELD(arg0, f32 *, 0x6C)) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805DB744);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xFC);
    if (temp_r4 < 0x2000) {
        M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (temp_r4 + 0x333);
    }
}

}
