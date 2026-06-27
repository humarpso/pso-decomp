#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLockOnCursor__sub_8013EE00(s32 arg0, s16 arg1);

M2C_UNK fn_80071F1C(s32, M2C_UNK);
M2C_UNK __dl__FPv(s32);
M2C_UNK fn_8013E624(s32, M2C_UNK);

s32 TLockOnCursor__sub_8013EE00(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_8013E624(arg0 + 0x14, -1);
        fn_8013E624(arg0 + 0xC, -1);
        fn_80071F1C(arg0 + 8, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
