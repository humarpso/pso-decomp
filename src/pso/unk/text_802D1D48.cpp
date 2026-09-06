#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TLobby__sub_802D2240(void *, u32);
u8 * TLobby__sub_802D2334(void *, u32);
void TLobby__sub_802D1DE4(u8 *arg0, u32 arg1, s32 arg2);
}

extern "C" {

void TLobby__sub_802D1DE4(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(TLobby__sub_802D2334(arg0, arg1));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (M2C_FIELD(temp_r3, s32 *, 4) - arg2);
        if ((s32) M2C_FIELD(temp_r3, s32 *, 4) <= 0) {
            TLobby__sub_802D2240(arg0, arg1);
        }
        temp_r3_2 = (u8 *)(TLobby__sub_802D2334(arg0 + 0xF8, arg1));
        if (temp_r3_2 != NULL) {
            M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 4) + arg2);
        }
    }
}

}
