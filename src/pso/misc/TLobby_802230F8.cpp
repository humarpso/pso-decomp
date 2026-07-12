#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 compare_version__6TLobbyFPvPv(void *arg0, void *arg1);
s32 compare_greater__6TLobbyFPvPv(void *arg0, void *arg1);
u32 TLobby__sub_8022318C(u8 *arg0, u8 *arg1);

s32 compare_version__6TLobbyFPvPv(void *arg0, void *arg1) {
    u32 b, a;

    a = M2C_FIELD(arg0, u8 *, 0);
    b = M2C_FIELD(arg1, u8 *, 0);
    if (a > b) {
        return 1;
    }
    if (a == b) {
        {
            u32 b2, a2;
            a2 = M2C_FIELD(arg0, u8 *, 1);
            b2 = M2C_FIELD(arg1, u8 *, 1);
            if (a2 > b2) {
                return 1;
            }
            if (a2 == b2) {
                if ((u8) M2C_FIELD(arg0, u8 *, 2) > (u8) M2C_FIELD(arg1, u8 *, 2)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

s32 compare_greater__6TLobbyFPvPv(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0);
    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (temp_r5 > temp_r0) {
        return 1;
    }
    if ((temp_r5 == temp_r0) && ((u8) M2C_FIELD(arg0, u8 *, 1) > (u8) M2C_FIELD(arg1, u8 *, 1))) {
        return 1;
    }
    return 0;
}

u32 TLobby__sub_8022318C(u8 *arg0, u8 *arg1) {
    return (u32) (*arg1 - *arg0) >> 0x1FU;
}

}
