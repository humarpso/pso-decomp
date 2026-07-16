#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803BAC70(u8 *arg0, u8 *arg1, u8 *arg2);

void TLobby__sub_803BAC70(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + ((M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + ((M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(arg1, f32 *, 4)))));
}

}
