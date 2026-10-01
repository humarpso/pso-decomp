#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_802231F0 { u8 b[0x18]; };

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80223350(void *arg0, void *arg1);
u32 TAdSinglePlyChrSelectGC__sub_8022338C(u8 *arg0, u8 *arg1);
s32 TLobby__sub_802232F8(void *arg0, void *arg1);
void swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
void TLobby__sub_802231F0(Rec_802231F0 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80223350(void *arg0, void *arg1);
u32 TAdSinglePlyChrSelectGC__sub_8022338C(u8 *arg0, u8 *arg1);
u32 TLobby__sub_8022318C(u8 *arg0, u8 *arg1);
s32 TLobby__sub_802232F8(void *arg0, void *arg1);
s32 compare_greater__6TLobbyFPvPv(void *arg0, void *arg1);
s32 compare_version__6TLobbyFPvPv(void *arg0, void *arg1);
void swap_item_data__6TLobbyFPvPv(M2C_UNK *arg0, M2C_UNK *arg1);
M2C_UNK copy_item_data__6TLobbyFPvPv(M2C_UNK *, M2C_UNK *);

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

void swap_item_data__6TLobbyFPvPv(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK sp8[8];

    copy_item_data__6TLobbyFPvPv(sp8, arg0);
    copy_item_data__6TLobbyFPvPv(arg0, arg1);
    copy_item_data__6TLobbyFPvPv(arg1, sp8);
}

void TLobby__sub_802231F0(Rec_802231F0 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 j;
    for (i = 0; i < arg1 - 1; i++) {
        for (j = i + 1; j < arg1; j++) {
            switch (arg2) {
            case 0:
                if (((s32 (*)(u8 *, u8 *))TAdSinglePlyChrSelectGC__sub_8022338C)(arg0[i].b, arg0[j].b) != 0) {
                    swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(&arg0[i], &arg0[j]);
                }
                break;
            case 1:
                if (TAdSinglePlyChrSelectGC__sub_80223350(&arg0[i], &arg0[j]) != 0) {
                    swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(&arg0[i], &arg0[j]);
                }
                break;
            case 2:
                if (TLobby__sub_802232F8(&arg0[i], &arg0[j]) != 0) {
                    swap_item_data__23TAdSinglePlyChrSelectGCFPvPv(&arg0[i], &arg0[j]);
                }
                break;
            }
        }
    }
}

s32 TLobby__sub_802232F8(void *arg0, void *arg1) {
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

s32 TAdSinglePlyChrSelectGC__sub_80223350(void *arg0, void *arg1) {
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

u32 TAdSinglePlyChrSelectGC__sub_8022338C(u8 *arg0, u8 *arg1) {
    return (u32) (*arg1 - *arg0) >> 0x1FU;
}

}
