#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void fn_800D0C7C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        TObjEneDD__sub_800BBA18(arg0, 7);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 6);
}

}
