#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803D23B0(u8 *arg0, s32 arg1);
void TLobby__sub_803D240C(u8 *arg0);
void TLobby__sub_803D2420(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803D242C(u8 *arg0);

s32 TLobby__sub_803D23B0(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32, M2C_UNK);

    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 == 0) {
        return 0;
    }
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x1C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x20), -3);
    }
    return 0;
}

void TLobby__sub_803D240C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void TLobby__sub_803D2420(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
}

s32 TLobby__sub_803D242C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

}
