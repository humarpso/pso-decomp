#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneBalClawClaw__sub_800909E8(void *arg0);

s32 TObjEneBalClawClaw__sub_800909E8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    return (u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000000) >> 5;
}

}
