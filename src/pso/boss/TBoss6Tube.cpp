#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Tube__vt1(void *arg0);

s32 fn_800B9C88();
s32 fn_802B1018();
M2C_UNK fn_802B1218(void *);
M2C_UNK fn_802B138C(void *);
M2C_UNK fn_802B14B8(void *);
M2C_UNK fn_802B1500(void *);

void TBoss6Tube__vt1(void *arg0) {
    s32 temp_r0;

    if ((fn_802B1018() == 0) && (fn_800B9C88() == 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
        switch (temp_r0) {
        case 0:
            fn_802B1500(arg0);
            return;
        case 1:
            fn_802B14B8(arg0);
            fn_802B1218(arg0);
            return;
        case 2:
            fn_802B138C(arg0);
            break;
        }
    }
}

}
