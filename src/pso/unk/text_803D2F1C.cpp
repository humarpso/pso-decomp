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
void TLobby__sub_803D3130(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

#pragma push
#pragma scheduling off
void TLobby__sub_803D3130(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    *(M2CCopy_8 *)(arg2) = *(const M2CCopy_8 *)(arg0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    if ((s32) M2C_FIELD(arg2, s32 *, 4) > arg1) {
        M2C_FIELD(arg2, s32 *, 4) = arg1;
    }
    M2C_FIELD(arg3, s32 *, 4) = (s32) (M2C_FIELD(arg3, s32 *, 4) - M2C_FIELD(arg2, s32 *, 4));
    if ((s32) M2C_FIELD(arg3, s32 *, 4) == 0) {
        M2C_FIELD(arg3, s32 *, 0) = 0;
        return;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg2, s32 *, 0) + M2C_FIELD(arg2, s32 *, 4));
}
#pragma pop

}
