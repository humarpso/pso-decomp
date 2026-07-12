#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK allow_rendering__7TObjectFv(void *);
f32 TWindowSubStatusDisp__sub_801A5228(s16);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DCAD4;

void window_request_show(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r3 & 1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (TWindowSubStatusDisp__sub_801A5228(M2C_FIELD(arg0, s16 *, 0x20)) > lbl_805DCAD4) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 3);
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 0x20)) {
        TBoss3Volopt__sub_8022675C(0x53703, 0, 0, 0);
    }
    allow_rendering__7TObjectFv(arg0);
}

}
