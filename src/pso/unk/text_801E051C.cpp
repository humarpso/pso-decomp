#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_10 { u8 bytes[0x10]; };

extern "C" {
M2C_UNK __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
u8 *fn_801E051C(u8 *arg0, u8 *arg1);
}

extern "C" {

u8 *fn_801E051C(u8 *arg0, u8 *arg1) {
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    *(M2CCopy_10 *)((s32) arg0 + 0x10) = *(const M2CCopy_10 *)((s32) arg1 + 0x10);
    return arg0;
}

}
