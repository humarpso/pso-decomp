#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindowInputNumber__sub_802561E8(void *);
M2C_UNK TWindowInputNumber__sub_802562F0(void *);
extern M2C_UNK lbl_8044EE0C[];

void TWindowInputNumber__sub_80255F20(void *arg0) {
    fn_8022675C(0x54100, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) - lbl_8044EE0C[(s8) M2C_FIELD(arg0, u8 *, 0x63)]);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) < (s32) M2C_FIELD(arg0, s32 *, 0x64)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x68);
    }
    TWindowInputNumber__sub_802562F0(arg0);
    TWindowInputNumber__sub_802561E8(arg0);
}

}
