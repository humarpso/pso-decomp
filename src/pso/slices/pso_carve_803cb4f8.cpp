#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_803CB4F8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        return 1;
    }
    return 0;
}

}
