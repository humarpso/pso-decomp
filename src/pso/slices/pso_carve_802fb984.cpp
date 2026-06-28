#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802FC8CC(void * a0 = 0, s32 a1 = 0);
s32 fn_802FBBFC(void * a0 = 0, s32 a1 = 0);
int fn_802FB984(void);

int fn_802FB984(void) { return 0; }
s32 fn_802FB98C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x40) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s16) M2C_FIELD(arg0, s16 *, 0x67A)) {
        M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x67A);
        fn_802FC8CC(arg0, 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0) {
            fn_802FBBFC(arg0, 0xD);
            return 1;
        }
        fn_802FBBFC(arg0, 0xB);
        return 1;
    }
    return 0;
}

}
