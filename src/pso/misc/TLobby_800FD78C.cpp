#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_range__6TLobbyFPvi(void *arg0, s32 arg1);

void init_range__6TLobbyFPvi(void *arg0, s32 arg1) {
    s32 temp_r5;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    temp_r5 = arg1 + 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_r5;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_r5;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

}
