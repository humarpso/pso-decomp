#include "pso/TBoss6EffFlowSoul.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

#include "types.h"

extern "C" {

struct Vec_8036A6B0 { f32 x, y, z; };

struct Soul_8036A6B0 {
    u8 pad0[0x1c];
    s32 f1c;
    void *f20;
    u16 player;
    u8 pad26[0x28 - 0x26];
    Vec_8036A6B0 pos;
    s32 duration;
    s32 age;
};

void VecCopy__FP3VecPC3Vec(Vec_8036A6B0 *, Vec_8036A6B0 *);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, Vec_8036A6B0 *);
s32 query_teammate_state__9TObjEneDDFPv(void *);
void copy_pos_620__11TBoss6Type2Fii(s32, Vec_8036A6B0 *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_state_1f__14TBoss6PlotFalzFUi(void *);
void TBoss6Type1__sub_803D9370(Vec_8036A6B0 *, Vec_8036A6B0 *);
void TBoss4Zako__sub_803D8910(Vec_8036A6B0 *, Vec_8036A6B0 *);
extern const f32 lbl_805E0370;
extern const f32 lbl_805E0374;
extern const f32 lbl_805E0378;

void TBoss6EffFlowSoul::run_task() {
    Soul_8036A6B0 *self = (Soul_8036A6B0 *)this;
    Vec_8036A6B0 target;
    Vec_8036A6B0 d;
    u8 *p;
    f32 remain;
    f32 k;

    if (query_teammate_state__9TObjEneDDFPv(self) != 0) {
        return;
    }
    if (self->player == 0xFFFF) {
        copy_pos_620__11TBoss6Type2Fii(self->f1c, &target);
    } else {
        p = TPlayerBattleCtrl4P__sub_801BA74C(self->player);
        if (p != NULL && is_state_1f__14TBoss6PlotFalzFUi(p) != 0) {
            VecCopy__FP3VecPC3Vec(&target, (Vec_8036A6B0 *)(p + 0x38));
            target.y += lbl_805E0370;
        } else {
            queue_destruction__7TObjectFv(self);
            return;
        }
    }
    remain = (f32)(self->duration - self->age);
    if (remain <= lbl_805E0374) {
        VecCopy__FP3VecPC3Vec(&self->pos, &target);
    } else {
        VecCopy__FP3VecPC3Vec(&d, &target);
        TBoss6Type1__sub_803D9370(&d, &self->pos);
        k = lbl_805E0378 / remain;
        d.x *= k;
        d.y *= k;
        d.z *= k;
        TBoss4Zako__sub_803D8910(&self->pos, &d);
    }
    if (self->f20 != NULL) {
        copy_pos__11TNowLoadingFPvPv(self->f20, &self->pos);
    }
    self->age++;
    if (self->age > self->duration) {
        queue_destruction__7TObjectFv(self);
    }
}

}

TBoss6EffFlowSoul::~TBoss6EffFlowSoul() {
    if (m_20 != nullptr) request_destroy__11TBoss4Type2FUi(m_20);
}
