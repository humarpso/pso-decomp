#include "types.h"

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
s32 set_state__14TBoss6PlotFalzFPvi(void *, s32);
s32 TBoss6PlotFalz__sub_802ABADC();
int spawn_type1__14TBoss6PlotFalzFPv(void*);
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
s32 freeze_all_players__14TBoss6PlotFalzFv();
int send_6xA3_action__14TBoss6PlotFalzFPvc(void*, void*);
s32 play_area_music(s32 *);
s32 TBoss6Demo10_TYPE1_APPEAR__create(void *);
s32 dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
int is_ready__14TBoss6PlotFalzFv(void*);
void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);

void TBoss6PlotFalz__sub_802B0808(void) {  }
void update_phase__14TBoss6PlotFalzFi(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)(arg0)) != 0)) {
        send_6xA3_action__14TBoss6PlotFalzFPvc((void*)(arg0), (void*)(3));
    }
}
void enter_active_state__14TBoss6PlotFalzFPv(void* p) { end_cutscene_camera__14TBoss6PlotFalzFPv(p); refresh_players_equipment__14TBoss6PlotFalzFPv(); *(int*)((char*)p + 0x3d0) = 1; *(int*)((char*)p + 0x3cc) = 0; spawn_type1__14TBoss6PlotFalzFPv(p); }

void tick_timeout__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    refresh_players_equipment__14TBoss6PlotFalzFPv();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x3CC) + 1;
    *(s32 *)((s8 *)arg0 + 0x3CC) = temp_r0;
    if (temp_r0 > 0x1F4) {
        set_state__14TBoss6PlotFalzFPvi(arg0, 2);
    }
}
void TBoss6PlotFalz__sub_802B08F0(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { send_6xA3_action__14TBoss6PlotFalzFPvc(p, (void*)2); } }

extern s32 lbl_804709B4[];

void init_proto1_adx(void *arg0) {
    play_area_music(lbl_804709B4);
    freeze_all_players__14TBoss6PlotFalzFv();
    *(s32 *)((s8 *)arg0 + 0x3D0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x56);
    TBoss6Demo10_TYPE1_APPEAR__create(arg0);
}

void advance_intro_timer__14TBoss6PlotFalzFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3CC) == 0x69) {
        play_sound_effect(0x40030F00, 0, 0, 0);
    }
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3CC) > 0x12C) {
        set_state__14TBoss6PlotFalzFPvi(arg0, 1);
    }
}
void advance_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { send_6xA3_action__14TBoss6PlotFalzFPvc(p, (void*)2); } }
void TBoss6PlotFalz__sub_802B0A34(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3cc) = 0; }

}
