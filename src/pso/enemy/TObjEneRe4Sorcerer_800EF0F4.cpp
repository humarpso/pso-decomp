#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Sorcerer__sub_800EF0F4(void *arg0, s32 arg1);

M2C_UNK fn_800BBA18(void *, M2C_UNK);

void TObjEneRe4Sorcerer__sub_800EF0F4(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        break;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) >= 2) {
            fn_800BBA18(arg0, 1);
        }
        break;
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4E4) + 1);
        break;
    }
}

}
