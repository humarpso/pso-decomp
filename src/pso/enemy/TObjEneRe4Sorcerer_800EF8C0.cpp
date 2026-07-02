#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Sorcerer__sub_800EF8C0(void *arg0);
void TObjEneRe4Sorcerer__sub_800EF8E4(void *arg0);
void TObjEneRe4Sorcerer__sub_800EF920(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void TObjEneRe4Sorcerer__sub_800EF8C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E8) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) >= 3) {
        M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    }
}

void TObjEneRe4Sorcerer__sub_800EF8E4(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        TObjEneDD__sub_800BBA18(arg0, 4);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 6);
}

void TObjEneRe4Sorcerer__sub_800EF920(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) != 2) {
        TObjEneDD__sub_800BBA18(arg0, 5);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 7);
}

}
