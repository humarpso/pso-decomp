#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801019B8(s32 arg0, s32 arg1, s16 *arg2);
M2C_UNK TItem__sub_80101CFC(s32, void *);
M2C_UNK TWindowHelpItem__sub_80104FCC(s32, void *, s32 *);
M2C_UNK init__9TItemDataFv(void *);

void TObjPlayer__sub_801019B8(s32 arg0, s32 arg1, s16 *arg2) {
    s32 spC[2];
    s32 sp8;

    init__9TItemDataFv(spC);
    TItem__sub_80101CFC(arg0, spC);
    TWindowHelpItem__sub_80104FCC(arg1, spC, &sp8);
    if (arg2 != NULL) {
        *arg2 = (s16) sp8;
    }
}

}
