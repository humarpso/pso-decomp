#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCameraCtrl__sub_8006B368();
M2C_UNK fn_801A35C8();
M2C_UNK fn_801A3698();

void fn_801A3988(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        fn_801A35C8();
        return;
    }
    fn_801A3698();
}

}
