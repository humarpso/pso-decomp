#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011E2FC(void *, f32);
s32 fn_8011E384(void *);
M2C_UNK fn_802D5C0C();
extern const f32 lbl_805DE788;
extern const f32 lbl_805DE78C;

void fn_802D5318(void *arg0, void *arg1) {
    fn_802D5C0C();
    if (fn_8011E384(arg0) != 0) {
        fn_8011E2FC(arg0, lbl_805DE788);
        M2C_FIELD(arg1, s32 *, 0x10) = 0xA;
        M2C_FIELD(arg1, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
        M2C_FIELD(arg1, f32 *, 0x4C) = lbl_805DE78C;
    }
}

}
