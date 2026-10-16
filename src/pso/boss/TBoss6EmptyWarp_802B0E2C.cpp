#include "types.h"
#include "pso/boss/TBoss6EmptyWarp.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/boss/TBoss6Thanks.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 play_area_music(void *);
s32 is_flag_set__14TBoss6PlotFalzFv();
s32 is_ship_door_ready__12TBoss6ThanksFv();
extern s32 lbl_804709E0[];
extern s32 lbl_804709E8[];
}

extern "C" {

void *__dt__15TBoss6EmptyWarpFv(void *arg0, s16 arg1);
void end_cutscene_camera__14TBoss6PlotFalzFPv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int draw_empty_warp_overlay(void*);

int TBoss6EmptyWarp::render() { return draw_empty_warp_overlay(this); }

extern s32 __vt__15TBoss6EmptyWarp[];

void TBoss6EmptyWarp::run_task() {
    u8 *arg0 = (u8 *)this;
    if (is_flag_set__14TBoss6PlotFalzFv() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 3) {
        TBoss6EmptyWarp::init_warp();
        if (is_ship_door_ready__12TBoss6ThanksFv() != 0) {
            TBoss6Thanks::create();
            play_area_music((void *) (lbl_804709E0));
        } else {
            play_area_music((void *) (lbl_804709E8));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *__dt__15TBoss6EmptyWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TBoss6EmptyWarp;
        end_cutscene_camera__14TBoss6PlotFalzFPv();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {

void *TBoss6EmptyWarp__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__15TBoss6EmptyWarp[];
extern void *lbl_805D3E90;

void *TBoss6EmptyWarp__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TBoss6EmptyWarp;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3E90;
    TBoss6PlotFalz::freeze_all_players();
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}

extern "C" {

void TBoss6EmptyWarp__sub_802B1004(void* p);
int TBoss6EmptyWarp__sub_802B1018(void);
s32 play_sound_effect(s32, s32, s32, s32);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *TBoss6EmptyWarp::create() {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = ((void *(*)(void *, void *))TBoss6EmptyWarp__ct)(o, tl_02);
    }
    return o;
}

void TBoss6EmptyWarp::activate_warp() {
    *(s32 *)((s8 *)this + 0x1C) = 1;
    play_sound_effect(0x4003351F, 0, 0, 0);
}
void TBoss6EmptyWarp__sub_802B1004(void* p) { *(s32*)((char*)p + 0x20) = 0; *(s32*)((char*)p + 0x1c) = 2; }
int TBoss6EmptyWarp__sub_802B1018(void) { return 0; }

}
