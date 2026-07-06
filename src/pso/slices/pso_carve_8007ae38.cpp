#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007A8F8(M2C_UNK);
M2C_UNK fn_8007ADB4(s32, s32, M2C_UNK);
s32 fn_8007B070();
M2C_UNK fn_801FE8A8();

void fn_8007AE38(s32 arg0) {
    u32 temp;
    if (fn_8007B070() == 0) {
        temp = (u32) fn_8007A8F8(0);
        fn_8007ADB4(arg0, (s32) temp, 0xD2);
        fn_801FE8A8();
    }
}

}
