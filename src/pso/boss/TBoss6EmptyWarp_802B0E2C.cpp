#include "types.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 play_area_music(void *);
s32 is_flag_set__14TBoss6PlotFalzFv();
s32 init_warp__15TBoss6EmptyWarpFv();
s32 create__12TBoss6ThanksFv();
s32 is_ship_door_ready__12TBoss6ThanksFPv();
extern s32 lbl_804709E0[];
extern s32 lbl_804709E8[];
void run_task__15TBoss6EmptyWarpFv(u8 *arg0);
}

extern "C" {

void *__dt__15TBoss6EmptyWarpFv(void *arg0, s16 arg1);
int render__15TBoss6EmptyWarpFv(void* p);
void end_cutscene_camera__14TBoss6PlotFalzFPv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int draw_empty_warp_overlay(void*);

int render__15TBoss6EmptyWarpFv(void* p) { return draw_empty_warp_overlay(p); }

extern s32 __vt__15TBoss6EmptyWarp[];

void run_task__15TBoss6EmptyWarpFv(u8 *arg0) {
    if (is_flag_set__14TBoss6PlotFalzFv() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 3) {
        init_warp__15TBoss6EmptyWarpFv();
        if (is_ship_door_ready__12TBoss6ThanksFPv() != 0) {
            create__12TBoss6ThanksFv();
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
void freeze_all_players__14TBoss6PlotFalzFv(void);

extern s32 __vt__15TBoss6EmptyWarp[];
extern void *lbl_805D3E90;

void *TBoss6EmptyWarp__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TBoss6EmptyWarp;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3E90;
    freeze_all_players__14TBoss6PlotFalzFv();
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}

extern "C" {

void *create__15TBoss6EmptyWarpFv(void);
void activate_warp__15TBoss6EmptyWarpFPv(void *arg0);
void TBoss6EmptyWarp__sub_802B1004(void* p);
int TBoss6EmptyWarp__sub_802B1018(void);
s32 play_sound_effect(s32, s32, s32, s32);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__15TBoss6EmptyWarpFv(void) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = ((void *(*)(void *, void *))TBoss6EmptyWarp__ct)(o, tl_02);
    }
    return o;
}

void activate_warp__15TBoss6EmptyWarpFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x1C) = 1;
    play_sound_effect(0x4003351F, 0, 0, 0);
}
void TBoss6EmptyWarp__sub_802B1004(void* p) { *(s32*)((char*)p + 0x20) = 0; *(s32*)((char*)p + 0x1c) = 2; }
int TBoss6EmptyWarp__sub_802B1018(void) { return 0; }

}
