#include "pso/TBoss6EffHyoui.h"

#include "types.h"

extern "C" {
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *create_particle_emitter(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
s32 get_player_by_client_id(int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 is_active__14TBoss6PlotFalzFPv();
extern s32 lbl_8047AC70[];
extern s32 __vt__14TBoss6EffHyoui[];
extern s32 lbl_805D44D8;
extern f32 lbl_805D6FF8;
extern s8 lbl_805D6FFC;
extern const f32 lbl_805E0380;
void *TBoss6EffHyoui__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
}

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
}

#include "types.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 get_player_by_client_id(int);
s32 is_active__14TBoss6PlotFalzFPv();
}

extern "C" {

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void run_task__14TBoss6EffHyouiFv(u8 *arg0) {
    s32 temp_r3;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) != 0U) {
        temp_r3 = get_player_by_client_id((int) (*(u16 *)((s8 *)arg0 + 0x20)));
        if ((temp_r3 != 0) && (is_active__14TBoss6PlotFalzFPv() != 0)) {
            copy_pos__11TNowLoadingFPvPv((int) (*(u32 *)((s8 *)arg0 + 0x1C)), (void *) (temp_r3 + 0x38));
        }
    }
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) (*(s32 *)((s8 *)arg0 + 0x28) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x28) > (s32) *(s32 *)((s8 *)arg0 + 0x24)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

TBoss6EffHyoui::~TBoss6EffHyoui() {
    if (m_1c != nullptr) request_destroy__11TBoss4Type2FUi(m_1c);
}
void *TBoss6EffHyoui__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    u8 *self = (u8 *)arg0;
    u8 *p;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)self + 0x18) = __vt__14TBoss6EffHyoui;
    *(s32 *)((s8 *)self + 0) = lbl_805D44D8;
    *(u16 *)((s8 *)self + 0x20) = (u16)(u32)arg2;
    *(void **)((s8 *)self + 0x24) = arg4;
    *(void **)((s8 *)self + 0x1C) = NULL;
    p = (u8 *)get_player_by_client_id(*(u16 *)((s8 *)self + 0x20));
    if (p != NULL && is_active__14TBoss6PlotFalzFPv() != 0) {
        if (lbl_805D6FFC == 0) {
            lbl_805D6FFC = 1;
            lbl_805D6FF8 = lbl_805E0380;
        }
        if ((*(void **)((s8 *)self + 0x1C) = create_particle_emitter(p + 0x38, lbl_8047AC70[(s32)arg3])) != NULL) {
            set_flags__11TBoss4Type2FPvUi(*(void **)((s8 *)self + 0x1C), 0x40);
            set_position_xy__10TObjPlayerFPvff(*(void **)((s8 *)self + 0x1C), lbl_805D6FF8, lbl_805D6FF8);
        }
    }
    *(s32 *)((s8 *)self + 0x28) = 0;
    return arg0;
}

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6EffHyoui__ct((void *)(o), (void *)(tl_02), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
    return o;
}

}
