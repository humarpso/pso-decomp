#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B3564(void *arg0);
void init_attack_timer__11TBoss6Type1FPv(u8 *arg0);
void update_timer_state__11TBoss6Type1FPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5598(void *, void *);
M2C_UNK TBoss6Type1__sub_802B7530();
M2C_UNK TBoss6Type1__sub_802B865C(void *, s32);

void TBoss6Type1__sub_802B3564(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B7530();
    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 == 8) {
            TBoss6Type1__sub_802B865C(arg0, 1);
            return;
        }
        TBoss6Type1__sub_802B865C(arg0, temp_r4 - 1);
    }
}

void init_attack_timer__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    TBoss6Type1__sub_802B5598(arg0, arg0 + 0x420);
    play_sound_effect(0x4003BF07, arg0 + 0x5E4, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 1);
}

void update_timer_state__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B7530();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 == 5) {
            TBoss6Type1__sub_802B865C(arg0, 1);
            return;
        }
        TBoss6Type1__sub_802B865C(arg0, temp_r4 - 1);
    }
}

}
