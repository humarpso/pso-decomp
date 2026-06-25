#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248();
s32 fn_800495BC(s32);
s32 fn_80113F10(s32);
M2C_UNK fn_801B21AC(s32);
M2C_UNK fn_801B47F4(s32);
M2C_UNK fn_801B4BD8(s32);
M2C_UNK fn_801B5200(s32);
M2C_UNK fn_801B6DF0(s32);
s32 fn_801BF560(s32);
s16 fn_801BF57C(s32);
M2C_UNK fn_801C5C60(s32, s32);
M2C_UNK fn_801C68EC(s32);

void fn_801B4910(s32 arg0) {
    if (fn_80019248() != 0) {
        fn_801B6DF0(arg0);
        fn_801B21AC(arg0);
        fn_801B4BD8(arg0);
        fn_801B47F4(arg0);
        if ((fn_800495BC(arg0) != 0) && (fn_801BF57C(arg0 + 0x730) >= 0) && (fn_801BF560(arg0 + 0x730) == 0)) {
            fn_801B5200(arg0);
        }
        fn_801C5C60(arg0 + 0x63C, arg0);
        if (fn_80113F10(arg0 + 0x5B0) != 0) {
            fn_801C68EC(arg0 + 0x5B0);
        }
    }
}

}
