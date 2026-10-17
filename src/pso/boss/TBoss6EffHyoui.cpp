#include "pso/TBoss6EffHyoui.h"

#include "types.h"

extern "C" {
void *create_particle_emitter(void *, s32);
s32 get_player_by_client_id(int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 is_active__14TBoss6PlotFalzFv();
extern s32 lbl_8047AC70[];
extern s32 __vt__14TBoss6EffHyoui[];
extern s32 lbl_805D44D8;
extern f32 lbl_805D6FF8;
extern s8 lbl_805D6FFC;
extern const f32 lbl_805E0380;
void *TBoss6EffHyoui__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
}

#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void queue_destruction__7TObjectFv(void *arg0);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void TBoss6EffHyoui::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 player;
    if ((u32) *(u32 *)&this->m_1c != 0U) {
        player = get_player_by_client_id((int) (*(u16 *)((s8 *)arg0 + 0x20)));
        if ((player != 0) && (is_active__14TBoss6PlotFalzFv() != 0)) {
            ((TNowLoading *)(*(u32 *)&this->m_1c))->copy_pos((void *) (player + 0x38));
        }
    }
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) (*(s32 *)((s8 *)arg0 + 0x28) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x28) > (s32) *(s32 *)((s8 *)arg0 + 0x24)) {
        queue_destruction__7TObjectFv((arg0));
    }
}

TBoss6EffHyoui::~TBoss6EffHyoui() {
    if (m_1c != nullptr) TBoss4Type2::request_destroy((u32)m_1c);
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
    if (p != NULL && is_active__14TBoss6PlotFalzFv() != 0) {
        if (lbl_805D6FFC == 0) {
            lbl_805D6FFC = 1;
            lbl_805D6FF8 = lbl_805E0380;
        }
        if ((*(void **)((s8 *)self + 0x1C) = create_particle_emitter(p + 0x38, lbl_8047AC70[(s32)arg3])) != NULL) {
            ((TBoss4Type2 *)(*(void **)((s8 *)self + 0x1C)))->set_flags(0x40);
            ((TObjPlayer *)(*(void **)((s8 *)self + 0x1C)))->set_position_xy(lbl_805D6FF8, lbl_805D6FF8);
        }
    }
    *(s32 *)((s8 *)self + 0x28) = 0;
    return arg0;
}

void *TBoss6EffHyoui::create(void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6EffHyoui__ct((void *)(o), (void *)(tl_02), (void *)(this), (void *)(arg1), (void *)(arg2));
    }
    return o;
}

}
