#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

extern "C" {
u8 * TFontSmallLobby__sub_801C0228(void *);
u8 *TObjPlayer__sub_801D1AC8(u8 *arg0, u8 *arg1);
}

extern "C" {

u8 *TObjPlayer__sub_801D1AC8(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228(arg0);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    *(M2CCopy_8 *)((s32) arg0 + 8) = *(const M2CCopy_8 *)((s32) arg1 + 8);
    return arg0;
}

}
