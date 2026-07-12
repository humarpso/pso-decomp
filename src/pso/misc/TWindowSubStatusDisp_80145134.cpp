#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void pack_status_flags__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1);

void pack_status_flags__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((arg1 >> 4U) & 3);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) | ((arg1 >> 2U) & 0x30));
    M2C_FIELD(arg0, u8 *, 1) = (u8) (arg1 & 3);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | ((arg1 * 4) & 0x30));
}

}
