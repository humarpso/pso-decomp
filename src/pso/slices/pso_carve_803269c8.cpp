#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80121200();
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);

void fn_803269C8(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80121200();
    switch (temp_r3) {
    case 1:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 2:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    }
}

}
