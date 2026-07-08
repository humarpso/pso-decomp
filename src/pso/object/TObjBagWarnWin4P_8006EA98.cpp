#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBagWarnWin4P__sub_8006EA98(u8 *arg0);
s32 fn_8006EF6C(M2C_UNK);
M2C_UNK fn_80269C6C(u32, void *, M2C_UNK);
u32 fn_80269CC0(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);

M2C_UNK strncpy(void *, s32, M2C_UNK);
extern M2C_UNK lbl_80488E48[];

void TObjBagWarnWin4P__sub_8006EA98(u8 *arg0) {
    M2C_UNK r3 = fn_8026CBB8(0x5B);
    M2C_FIELD(arg0, u32 *, 0x1C) = fn_80269CC0(r3, lbl_80488E48, 1, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        strncpy(arg0 + 0x20, fn_8006EF6C(0x69), 0x7F);
        M2C_FIELD(arg0, s8 *, 0x9F) = 0;
        fn_80269C6C(M2C_FIELD(arg0, u32 *, 0x1C), arg0 + 0x20, 0);
    }
}

}
