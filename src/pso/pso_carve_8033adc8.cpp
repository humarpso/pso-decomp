#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801FDA4C();
M2C_UNK fn_80202BA8(M2C_UNK);
M2C_UNK fn_8033B1E0(void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_8033B5F0(void *);

void fn_8033ADC8(void *arg0) {
    if (fn_801FDA4C() == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 5;
        fn_80202BA8(6);
        fn_8033B1E0(arg0, 0xC, -1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    fn_8033B5F0(arg0);
}

}
