#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8024219C(s32);
void TLobby__sub_802409E4(void* p);

void TLobby__sub_80240A50(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) (M2C_FIELD(arg0, s32 *, 0x80) + 0x77780000) == 0x8888U) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r4 > 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
        if (temp_r0 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x84) = 0;
            M2C_FIELD(arg0, s32 *, 0x80) = 0;
            M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
        } else {
            M2C_FIELD(arg0, s32 *, 0x78) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x7C) * (temp_r4 - temp_r0)) / temp_r4);
            M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) - TLobby__sub_8024219C(M2C_FIELD(arg0, s32 *, 0)));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + M2C_FIELD(arg0, s32 *, 0x70) + M2C_FIELD(arg0, s32 *, 0x78));
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) + 0x2000);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) > 0x3FFF) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0x3FFF;
    }
}

}
