#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1);

M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK __dl__FPv(void *);
M2C_UNK fn_80156720(u32);

void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA8) != 0U) {
            fn_80156720(M2C_FIELD(arg0, u32 *, 0xA8));
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xA8));
            M2C_FIELD(arg0, u32 *, 0xA8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
