#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCharaMaking__sub_8028E3F4();

s32 TCharaMaking__sub_8028E434(void *arg0) {
    s8 temp;

    if (!(M2C_FIELD(arg0, s8 *, 0x32) & 0xA)) {
        return M2C_FIELD(arg0, s8 *, 0x31);
    }
    if ((M2C_FIELD(arg0, s8 *, 0x33) <= 0) ||
        ((temp = M2C_FIELD(arg0, s8 *, 0x1C)) < 0) ||
        (temp >= 7)) {
        return M2C_FIELD(arg0, s8 *, 0x31);
    }
    if (TCharaMaking__sub_8028E3F4() != 0) {
        return 0x12 - M2C_FIELD(arg0, s8 *, 0x1C);
    }
    return M2C_FIELD(arg0, s8 *, 0x31);
}

}
