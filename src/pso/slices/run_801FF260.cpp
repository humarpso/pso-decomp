#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TAdSinglePlyChrSelectGC__sub_80202BA0();

void TAdSinglePlyChrSelectGC__sub_801FF260(void) {
    void *temp_r3;

    temp_r3 = TAdSinglePlyChrSelectGC__sub_80202BA0();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x11564) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x11564) + 1);
    }
}

extern void *lbl_805D5F58;
extern void *lbl_805D5F5C;

void TAdSinglePlyChrSelectGC__sub_801FF298(void) {
    if ((void *) lbl_805D5F58 != NULL) {
        M2C_FIELD(lbl_805D5F58, s32 *, 0x11564) = (s32) (M2C_FIELD(lbl_805D5F58, s32 *, 0x11564) + 1);
    }
    if ((void *) lbl_805D5F5C != NULL) {
        M2C_FIELD(lbl_805D5F5C, s32 *, 0x11564) = (s32) (M2C_FIELD(lbl_805D5F5C, s32 *, 0x11564) + 1);
    }
}

}
