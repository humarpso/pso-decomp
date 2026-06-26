#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8004D990(s32);
M2C_UNK fn_80053CEC(void *, M2C_UNK);

void fn_8005354C(void *arg0) {
    if (fn_8004D990(M2C_FIELD(arg0, s32 *, 0x38C)) <= (s32) (0xC - M2C_FIELD(arg0, s32 *, 0x3C4))) {
        fn_80053CEC(arg0, 5);
        return;
    }
    fn_80053CEC(arg0, 6);
}

}
