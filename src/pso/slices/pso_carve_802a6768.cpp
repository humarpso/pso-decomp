#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
u32 fn_802A720C(M2C_UNK);

void fn_802A6768(u32 arg0) {
    u32 t0, t1, t2;
    t0 = fn_802A720C(0);
    if (t0 == arg0 || (t1 = fn_802A720C(1), t1 == arg0) || (t2 = fn_802A720C(2), t2 == arg0)) {
        fn_801E2EFC();
        return;
    }
    fn_801E2F20();
}

}
