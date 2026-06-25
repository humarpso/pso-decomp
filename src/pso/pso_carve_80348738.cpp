#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_803487DC();
M2C_UNK fn_80348818(M2C_UNK, s32, s32);

void fn_80348738(s32 arg0, s32 arg1) {
    if (fn_803487DC() > 0xF) {
        fn_80348818(0xA, arg0, arg1);
        return;
    }
    fn_80348818(0x20, arg0, arg1);
}

}
