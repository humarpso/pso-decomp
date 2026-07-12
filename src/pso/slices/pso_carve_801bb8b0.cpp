#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 TObjPlayer__sub_801BEB3C(s32);
s8 TObjPlayer__sub_801BEB44(s32);
s8 TObjPlayer__sub_801BEB4C(s32);
void TObjPlayer__sub_801BB8A8(void);
void TObjPlayer__sub_801BB8AC(void);

int TObjPlayer__sub_801BB8B0(void) { return 0; }
void fn_801BB900(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x338) = TObjPlayer__sub_801BEB4C(arg1);
    M2C_FIELD(arg0, s8 *, 0x339) = TObjPlayer__sub_801BEB44(arg1);
    M2C_FIELD(arg0, s8 *, 0x33A) = TObjPlayer__sub_801BEB3C(arg1);
}

}
