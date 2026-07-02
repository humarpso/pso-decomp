#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Mine__sub_80038898(void *arg0, s32 arg1);

extern const f32 lbl_805D850C;

void TBoss2Mine__sub_80038898(void *arg0, s32 arg1) {
    if (arg1 < 0x5A) {
        f32 temp = lbl_805D850C;
        M2C_FIELD(arg0, s32 *, 0x3C0) = 3;
        M2C_FIELD(arg0, f32 *, 0x3B8) = temp;
        return;
    }
    if (arg1 < 0x96) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 5;
        return;
    }
    if (arg1 < 0x12C) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0xA;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0x1E;
}

}
