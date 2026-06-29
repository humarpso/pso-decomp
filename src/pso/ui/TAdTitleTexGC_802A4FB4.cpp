#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdTitleTexGC__vt1(void *arg0);

M2C_UNK TAdTitleTexGC__sub_802A4EF4();

void TAdTitleTexGC__vt1(void *arg0) {
    s32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r4_3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r4 < 0x14) {
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r4 + 1);
    }
    temp_r4_2 = M2C_FIELD(arg0, u32 *, 0x7C);
    if (temp_r4_2 < 0xFFU) {
        M2C_FIELD(arg0, u32 *, 0x7C) = (u32) (temp_r4_2 + 0xC);
    }
    temp_r4_3 = M2C_FIELD(arg0, u32 *, 0x7C);
    M2C_FIELD(arg0, u32 *, 0x7C) = (temp_r4_3 <= 0xFFU) ? temp_r4_3 : 0xFFU;
    TAdTitleTexGC__sub_802A4EF4();
}

}
