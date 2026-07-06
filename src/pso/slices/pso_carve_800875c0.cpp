#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D4EF8;
extern s32 lbl_805D4EFC;
extern const f32 lbl_805D94E0;
extern const f32 lbl_805D94E4;

void TBoss4Type2__sub_800875C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805D94E0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D94E4;
    if (arg1 >= 0x200) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (lbl_805D4EFC + ((arg1 - 0x200) * 0x98));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (lbl_805D4EF8 + (arg1 * 0x98));
}

}
