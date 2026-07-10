#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dd_flag__17TObjEneMe1CanadinFPv(void *arg0);
u32 TObjEneDD__vt98();

void update_dd_flag__17TObjEneMe1CanadinFPv(void *arg0) {
    if (TObjEneDD__vt98() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFEFFFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x01000000);
}

}
