#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D9A04(s16);
s32 TObjEneHoldEffect__sub_8036CDA8();

s32 fn_8036BD08(void *arg0) {
    if (TObjEneHoldEffect__sub_8036CDA8() == 0) {
        return 0;
    }
    return TObjPlayer__sub_801D9A04(M2C_FIELD(arg0, s16 *, 4)) != 0 ? 1 : 0;
}

}
