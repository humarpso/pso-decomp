#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802AC17C();
s32 fn_802BC6E8(void *);

s32 fn_802BA860(void *arg0) {
    s32 temp;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        return 0;
    }
    if (fn_802AC17C() != 0) {
        return 0;
    }
    temp = fn_802BC6E8(arg0);
    return M2C_FIELD(arg0, s32 *, 0x4C0) <= temp ? 1 : 0;
}

}
