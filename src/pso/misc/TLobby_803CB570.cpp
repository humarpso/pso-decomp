#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2);

void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2) {
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) *arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

}
