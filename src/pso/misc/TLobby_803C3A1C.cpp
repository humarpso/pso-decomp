#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);

void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s16 *, 0xA8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = arg1;
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s8) M2C_FIELD(arg0, u8 *, 0xF));
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s32) (((s8) M2C_FIELD(arg0, u8 *, 0xD) / 8) * (s8) M2C_FIELD(arg0, u8 *, 0xE)));
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
}

}
