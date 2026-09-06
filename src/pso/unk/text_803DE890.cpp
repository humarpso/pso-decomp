#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern u8 *lbl_805D77A8;
void xfree__FPv(void *arg0);
}

extern "C" {

#pragma push
#pragma scheduling off
void xfree__FPv(void *arg0) {
    M2C_FIELD(lbl_805D77A8, M2C_UNK (**)(void *, void *), 4)(arg0, lbl_805D77A8);
}
#pragma pop

}
