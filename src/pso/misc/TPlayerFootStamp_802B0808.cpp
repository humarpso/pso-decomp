#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__sub_802B0808(void);
void TBoss6PlotFalz__sub_802B08F0(void* p);
void TBoss6PlotFalz__sub_802B0A34(void* p);
void advance_if_ready__14TBoss6PlotFalzFPv(void* p);
void advance_intro_timer__14TBoss6PlotFalzFPv(void *arg0);
void enter_active_state__14TBoss6PlotFalzFPv(void* p);
void init_proto1_adx(void *arg0);
void tick_timeout__14TBoss6PlotFalzFPv(void *arg0);
void update_phase__14TBoss6PlotFalzFi(s32 arg0);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
s32 TBoss6PlotFalz__sub_802ABADC();
int TBoss6PlotFalz__sub_802ABCDC(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
M2C_UNK TBoss6PlotFalz__sub_802AC6D0();
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK create_instance__8TObjFishFPv(void *);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
int is_ready__14TBoss6PlotFalzFv(void*);
void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);

void TBoss6PlotFalz__sub_802B0808(void) {  }
void update_phase__14TBoss6PlotFalzFi(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)(arg0)) != 0)) {
        TBoss6PlotFalz__sub_802AC86C((void*)(arg0), (void*)(3));
    }
}
void enter_active_state__14TBoss6PlotFalzFPv(void* p) { TBoss6PlotFalz__sub_802AC678(p); TBoss6PlotFalz__sub_802AC4D8(); *(int*)((char*)p + 0x3d0) = 1; *(int*)((char*)p + 0x3cc) = 0; TBoss6PlotFalz__sub_802ABCDC(p); }

void tick_timeout__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    TBoss6PlotFalz__sub_802AC4D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x1F4) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 2);
    }
}
void TBoss6PlotFalz__sub_802B08F0(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)2); } }

extern M2C_UNK lbl_804709B4[];

void init_proto1_adx(void *arg0) {
    TObjBgmColCtrl__sub_802274B8(lbl_804709B4);
    TBoss6PlotFalz__sub_802AC6D0();
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x56);
    create_instance__8TObjFishFPv(arg0);
}

void advance_intro_timer__14TBoss6PlotFalzFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) == 0x69) {
        play_sound_effect(0x40030F00, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) > 0x12C) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 1);
    }
}
void advance_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)2); } }
void TBoss6PlotFalz__sub_802B0A34(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3cc) = 0; }

}
