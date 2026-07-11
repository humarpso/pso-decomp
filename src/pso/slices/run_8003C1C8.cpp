#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern u32 TObjBoss2Tunnel__data_805D4C00;

s32 TObjBoss2Tunnel__sub_8003C1C8(void) {
    return ((u32) TObjBoss2Tunnel__data_805D4C00 >> 0xDU) & 1;
}

extern u32 TObjBoss2Tunnel__data_805D4C00;

s32 TObjBoss2Tunnel__sub_8003C1D4(void) {
    return ((u32) TObjBoss2Tunnel__data_805D4C00 >> 0xCU) & 1;
}

}
