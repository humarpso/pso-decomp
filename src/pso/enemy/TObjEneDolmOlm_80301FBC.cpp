#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_scale_trigger__14TObjEneDolmOlmFPv(void *arg0);
f32 calc_boss4_scale__10TObjPlayerFi();

void check_scale_trigger__14TObjEneDolmOlmFPv(void *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < M2C_FIELD(arg0, f32 *, 0x3CC)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
    }
}

}
