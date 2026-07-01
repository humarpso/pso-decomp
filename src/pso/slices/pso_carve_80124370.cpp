#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800196EC();
s32 fn_80099EF8(void *);
M2C_UNK fn_8012429C(s32, s32, M2C_UNK);
s32 fn_802034B0();
extern s32 tl_05;

void fn_80124370(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 1) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        }
    }
    temp_r3 = fn_800196EC();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x204) != temp_r3) && ((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U)) {
        M2C_FIELD(arg0, s32 *, 0x204) = temp_r3;
        if (fn_802034B0() != 0) {
            fn_8012429C(tl_05, fn_80099EF8(arg0), 5);
        }
    }
}

}
