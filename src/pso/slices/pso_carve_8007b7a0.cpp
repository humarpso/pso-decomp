#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8007AB54(void *);

void *fn_8007B7A0(void *arg0) {
    fn_8007AB54((void *)((char *)arg0 + 4));
    M2C_FIELD(arg0, u8 *, 0x0) = 6;
    M2C_FIELD(arg0, u8 *, 0x1) = 37;
    return arg0;
}

}
