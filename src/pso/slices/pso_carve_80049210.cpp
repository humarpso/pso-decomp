#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjVoloptCage__sub_80048CDC();
M2C_UNK fn_80048E80();
M2C_UNK fn_80048F40();
M2C_UNK fn_80049000();

void TObjVoloptCage__sub_80049210(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 7:
        fn_80049000();
        return;
    case 1:
        fn_80048F40();
        return;
    case 4:
        fn_80048E80();
        return;
    case 5:
        TObjVoloptCage__sub_80048CDC();
        return;
    }
}

}
