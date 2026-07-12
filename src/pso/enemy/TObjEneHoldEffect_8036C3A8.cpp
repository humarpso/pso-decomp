#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_in_room__17TObjEneHoldEffectFPv(void *arg0);
s32 is_ready__17TObjEneHoldEffectFPv(void *arg0);
s32 is_revive_valid__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
u16 TObjRoomId__sub_801A1DB8(u16);

s32 is_in_room__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32) __cntlzw(TObjRoomId__sub_801A1DB8(M2C_FIELD(arg0, u16 *, 4))) >> 5;
}

s32 is_ready__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, s16 *, 4) >> 0x1FU) ^ 1;
}

s32 is_revive_valid__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return (u32) __cntlzw(TObjRoomId__sub_801A1DB8(M2C_FIELD(arg0, u16 *, 4))) >> 5;
}

}
