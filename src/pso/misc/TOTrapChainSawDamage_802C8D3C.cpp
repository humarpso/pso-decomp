#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapChainSawDamage__vt13(void *arg0);

M2C_UNK decode_params__14TOTrapChainSawFPv();

void TOTrapChainSawDamage__vt13(void *arg0) {
    decode_params__14TOTrapChainSawFPv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
}

}
