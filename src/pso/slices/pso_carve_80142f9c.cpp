#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80141F1C();
M2C_UNK fn_803E4A94(s32, void *, f32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
M2C_UNK TObjEneRe7Berura__sub_803E4CE0(M2C_UNK *);
extern M2C_UNK fn_80142EEC[];
extern u32 lbl_805D567C;

void fn_80142F9C(u8 *arg0) {
    s32 temp_r3;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0xE0);
    if (temp_r0 != 0U) {
        lbl_805D567C = temp_r0;
        TObjEneRe7Berura__sub_803E4CE0(fn_80142EEC);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
        if ((temp_r3 & 4) && !(temp_r3 & 0x400)) {
            fn_803E4A94(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
        } else {
            fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        TObjEneRe7Berura__sub_803E4CE0(NULL);
        fn_80141F1C();
    }
}

}
