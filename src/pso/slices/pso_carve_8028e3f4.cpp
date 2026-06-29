#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F8FC();
s32 TCameraCtrl__sub_8006B368();

s32 TCharaMaking__sub_8028E3F4(void) {
    if ((fn_8000F8FC() == 0xF) || (TCameraCtrl__sub_8006B368() != 0)) {
        return 1;
    }
    return 0;
}

}
