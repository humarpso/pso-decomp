#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneBalClaw__vt34(s32 arg0);
s32 TObjEneBalClaw__vt37(s32 arg0);

s32 fn_80016D78();
M2C_UNK fn_8008D5C0(s32);

s32 TObjEneBalClaw__vt37(s32 arg0) {
    if (fn_80016D78() != 0) {
        fn_8008D5C0(arg0);
        return 1;
    }
    return 0;
}

s32 fn_80016FF8();
M2C_UNK fn_8008D5C0(s32);

s32 TObjEneBalClaw__vt34(s32 arg0) {
    if (fn_80016FF8() != 0) {
        fn_8008D5C0(arg0);
        return 1;
    }
    return 0;
}

}
