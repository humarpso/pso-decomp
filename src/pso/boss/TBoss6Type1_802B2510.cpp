#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_timer__11TBoss6Type1FPv(void *arg0);
void init_work__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2634(void *arg0);
void init_charge__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, int);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, int);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5100(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B7E7C(void *);
M2C_UNK TBoss6Type1__sub_802B82B8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, M2C_UNK *);

void update_attack_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3b;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    TBoss6Type1__sub_802B5100(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x40C) - 2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r3b = temp_r3 - 0xA;
    if (temp_r0 == temp_r3) {
        TBoss6Type1__sub_802B82B8(arg0, 6);
    } else if (temp_r0 == temp_r3b) {
        M2C_FIELD(arg0, s32 *, 0x438) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x23);
    }
}

extern M2C_UNK lbl_80470CA4[];

void init_work__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, lbl_80470CA4);
    TBoss3Volopt__sub_8022675C((int)(0x39403), (void *)(arg0 + 0x584), (int)(0), (int)(1));
    TBoss3Volopt__sub_8022675C((int)(0x4003A811), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    TBoss6Type1__sub_802B4B64((void *)(arg0), (int)(0));
    TBoss6Type1__sub_802B4BA8((void *)(arg0), (int)(1));
}

void TBoss6Type1__sub_802B2634(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    if (temp_r0 == 0x23) {
        TBoss6Type1__sub_802B82B8(arg0, 6);
    } else if (temp_r0 == 0x19) {
        M2C_FIELD(arg0, s32 *, 0x438) = 1;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B7E7C(arg0);
        M2C_FIELD(arg0, s32 *, 0x414) = 0;
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

void init_charge__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    TBoss3Volopt__sub_8022675C((int)(0x4003A811), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    TBoss6Type1__sub_802B4B64((void *)(arg0), (int)(0));
    TBoss6Type1__sub_802B4BA8((void *)(arg0), (int)(1));
}

}
