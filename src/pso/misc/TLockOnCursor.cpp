#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLockOnCursor__sub_8013EC94(s32 arg0, s16 arg1);
s32 __dt__13TLockOnCursorFis(s32 arg0, s16 arg1);

M2C_UNK __dl__FPv();

s32 TLockOnCursor__sub_8013EC94(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

M2C_UNK __dl__FPv();

s32 __dt__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
