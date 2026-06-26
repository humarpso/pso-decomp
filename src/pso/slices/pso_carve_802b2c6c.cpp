#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802AC17C();
M2C_UNK fn_802B8E1C(void *);

void fn_802B2C6C(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) && (fn_802AC17C() != 0)) {
        fn_802B8E1C(arg0);
    }
}

}
