#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubStatusDisp__sub_80223B88(void *, s16);
M2C_UNK fn_80249058();

void fn_80266E0C(void *arg0) {
    TWindowSubStatusDisp__sub_80223B88(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    fn_80249058();
}

}
