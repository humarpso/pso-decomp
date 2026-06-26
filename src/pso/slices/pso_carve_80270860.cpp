#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80223B88(void *, s32);
M2C_UNK fn_8024503C(void *, s32, s32);
s32 fn_8026C63C(void *);

void fn_80270860(void *arg0, void *arg1) {
    s32 temp;

    temp = fn_80223B88(arg0, (s32) ((s8 *) arg0)[0x61]);
    fn_8024503C(arg1, temp, fn_8026C63C(arg0));
}

}
