#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80154764(void *, M2C_UNK, M2C_UNK);
s32 fn_80158360(void *, f32);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern u8 *lbl_805D5964;
extern const f32 lbl_805DB4B0;

void TODoorCave02__vt15(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(lbl_805D5964, s32 *, 4);
        if (fn_80158360(arg0, lbl_805DB4B0) != 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            fn_80154764(arg0, (M2C_UNK)0, (M2C_UNK)8);
            fn_8022675C(0x42807, arg0 + 0x38, 0, 0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(lbl_805D5964, s32 *, 0);
        fn_80154764(arg0, (M2C_UNK)NULL, (M2C_UNK)8);
        fn_8022675C(0x42807, arg0 + 0x38, 0, 0);
    }
}

}
