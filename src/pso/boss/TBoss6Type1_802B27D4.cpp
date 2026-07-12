#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_if_idle__11TBoss6Type1FPv(void* p);
void enter_release_state__11TBoss6Type1FPv(u8 *arg0);
void tick_state_410_timer__11TBoss6Type1FPv(void *arg0);
void init_move_attack__11TBoss6Type1FPv(u8 *arg0);
void update_hit_timer__11TBoss6Type1FPv(u8 *arg0);
void update_attack_state__11TBoss6Type1FPv(void *arg0);
void advance_plot_to_state2__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK activate_warp__14TBoss6PlotFalzFPv(s32);
M2C_UNK TBoss6Type1__sub_802B49A4(void *);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);
s32 TBoss6Type1__sub_802B5E48();
M2C_UNK TBoss6Type1__sub_802B6B34();
M2C_UNK TBoss6Type1__sub_802B7E7C(void *);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
int TBoss6Type1__sub_802B8E1C(void*);
M2C_UNK TBoss6Type1__sub_802B9204(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK free_child__14TBoss6PlotFalzFPv(s32);
M2C_UNK release_object__11TBoss6Type1FPv();
M2C_UNK reset_state__14TBoss6PlotFalzFPv(s32);
M2C_UNK set_state_2__14TBoss6PlotFalzFPv(s32);

void update_if_idle__11TBoss6Type1FPv(void* p) { if (*(int*)((char*)p + 0x410) == 0) { TBoss6Type1__sub_802B8E1C(p); } }

void enter_release_state__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    release_object__11TBoss6Type1FPv();
    TBoss3Volopt__sub_8022675C(0x4003B515, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
    activate_warp__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    reset_state__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    if (TBoss6Type1__sub_802B529C(arg0, 0x1F, 4) == 0) {
        TBoss3Volopt__sub_8022675C(0x68A24, arg0 + 0x38, 0, 1);
    }
}

void tick_state_410_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x20);
    }
}

void init_move_attack__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    TBoss6Type1__sub_802B6B34();
    TBoss3Volopt__sub_8022675C(0x40039C19, arg0 + 0x38, 0, 0);
}

void update_hit_timer__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r3;

    TOTrapAncient01__sub_80226578(0x40032614, arg0, 0, 0, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0x3C) {
        TBoss3Volopt__sub_8022675C(0x39403, arg0 + 0x38, 0, 1);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x410);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x410) = (s32) (temp_r3 - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x410) = 0;
}

void update_attack_state__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if (TBoss6Type1__sub_802B5E48() != 0) {
            TBoss6Type1__sub_802B9204(arg0, 0x20);
            return;
        }
        TBoss6Type1__sub_802B9204(arg0, 0x1F);
    }
}

void advance_plot_to_state2__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x12C;
    free_child__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    set_state_2__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    TBoss6Type1__sub_802B49A4(arg0);
    TBoss3Volopt__sub_8022675C(0x40039C13, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
    TBoss6Type1__sub_802B7E7C(arg0);
}

}
