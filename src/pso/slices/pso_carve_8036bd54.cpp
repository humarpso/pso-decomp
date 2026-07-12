#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D9A28(u8);
s32 TObjEneHoldEffect__sub_8036CDA8();

s32 fn_8036BD54(void *arg0) {
    if (TObjEneHoldEffect__sub_8036CDA8() == 0) {
        return 0;
    }
    return TObjPlayer__sub_801D9A28(M2C_FIELD(arg0, u8 *, 4)) != 0 ? 1 : 0;
}

}
