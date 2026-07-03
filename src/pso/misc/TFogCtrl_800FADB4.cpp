#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TFogCtrl__sub_800FADB4(void *arg0);
M2C_UNK TFogCtrl__sub_800FAE1C(void *);
s32 is_split_screen();

void TFogCtrl__sub_800FADB4(void *arg0) {
    s32 temp_r3;

    if (is_split_screen() == 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r3 & 1) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r3 & 0xFFFFFFFE);
            TFogCtrl__sub_800FAE1C(arg0);
        }
    } else {
        TFogCtrl__sub_800FAE1C(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFFE);
    }
}

}
