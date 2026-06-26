#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8013E8C0(s32);
u8 fn_8013E8E0(s32);
u8 fn_8013E900(s32);

s32 fn_8013C89C(s32 arg0, s16 arg1, s16 arg2) {
    s32 i;
    s32 ptr;

    i = 0;
    ptr = arg0 + 0x5C;
loop_1:
    if ((arg1 == (s32) fn_8013E900(ptr)) && (arg2 == (s32) fn_8013E8E0(ptr)) && (fn_8013E8C0(ptr) != 0)) {
        return ptr;
    }
    i += 1;
    ptr += 0x124;
    if (i >= 4) {
        return 0;
    }
    goto loop_1;
}

}
