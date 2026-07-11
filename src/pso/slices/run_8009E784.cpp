#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3FC) == 5) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
    }
}

void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3FC) == 4) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 5;
    }
}

}
