#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag__18TObjEneBalClawClawFPv(void *arg0);
M2C_UNK TObjEneBalClawClaw__sub_8009082C();

void clear_flag__18TObjEneBalClawClawFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xDFFFFFFF);
    TObjEneBalClawClaw__sub_8009082C();
}

}
