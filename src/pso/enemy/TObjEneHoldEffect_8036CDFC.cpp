#include "types.h"
struct Vec_8036CF30 { f32 x, y, z; };

struct Hold_8036CF30 {
    u8 pad0[0x38];
    Vec_8036CF30 pos;
    u8 pad44[0x4C];
    void *x90;
    u16 x94;
};

struct Hold_8036CE20 {
    u8 pad0[0x38];
    Vec_8036CF30 pos;
    u8 pad44[0x4C];
    void *x90;
    u16 x94;
    u8 pad96[2];
    s32 x98;
    s32 x9c;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, int);
void copy_pos__11TNowLoadingFPvPv(void *, Vec_8036CF30 *);
void *TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void TBoss6Type1__sub_803D9370(Vec_8036CF30 *, void *);
void TNpcPlayer__sub_803D97B4(Vec_8036CF30 *);
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805E03B0;
void render__17TObjEneHoldEffectFv(Hold_8036CF30 *o);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, int);
void copy_pos__11TNowLoadingFPvPv(void *, Vec_8036CF30 *);
void *TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void TBoss6Type1__sub_803D9370(Vec_8036CF30 *, void *);
void TNpcPlayer__sub_803D97B4(Vec_8036CF30 *);
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805E03B0;
s32 is_split_screen(void);
void queue_destruction__7TObjectFv(void *);
void run_task__17TObjEneHoldEffectFv(Hold_8036CE20 *o);
}

extern "C" {

#pragma push
#pragma fp_contract on
void run_task__17TObjEneHoldEffectFv(Hold_8036CE20 *o) {
    void *p = TPlayerBattleCtrl4P__sub_801BA74C(o->x94);
    if (p != NULL && all_parents_unqueued_for_destruction__7TObjectFv(p) != 0 &&
        obj_testFlags30(p, 0x800) == 0 && o->x90 != NULL &&
        all_parents_unqueued_for_destruction__7TObjectFv(o->x90) != 0) {
        if (o->x98 == 0x20F && is_split_screen() == 0) {
            Vec_8036CF30 d;
            Vec_8036CF30 out;
            VecCopy__FP3VecPC3Vec(&d, &o->pos);
            TBoss6Type1__sub_803D9370(&d, lbl_805D4DF0 + 0x178);
            TNpcPlayer__sub_803D97B4(&d);
            out.x = o->pos.x - lbl_805E03B0 * d.x;
            out.y = o->pos.y;
            out.z = o->pos.z - lbl_805E03B0 * d.z;
            copy_pos__11TNowLoadingFPvPv(o->x90, &out);
        } else {
            copy_pos__11TNowLoadingFPvPv(o->x90, &o->pos);
        }
    }
    if (o->x9c-- < 0) {
        queue_destruction__7TObjectFv(o);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void render__17TObjEneHoldEffectFv(Hold_8036CF30 *o) {
    void *p = TPlayerBattleCtrl4P__sub_801BA74C(o->x94);
    if (p != NULL && all_parents_unqueued_for_destruction__7TObjectFv(p) != 0 &&
        obj_testFlags30(p, 0x800) == 0 && o->x90 != NULL &&
        all_parents_unqueued_for_destruction__7TObjectFv(o->x90) != 0) {
        Vec_8036CF30 d;
        Vec_8036CF30 out;
        VecCopy__FP3VecPC3Vec(&d, &o->pos);
        TBoss6Type1__sub_803D9370(&d, lbl_805D4DF0 + 0x178);
        TNpcPlayer__sub_803D97B4(&d);
        out.x = o->pos.x - lbl_805E03B0 * d.x;
        out.y = o->pos.y;
        out.z = o->pos.z - lbl_805E03B0 * d.z;
        copy_pos__11TNowLoadingFPvPv(o->x90, &out);
    }
}
#pragma pop

}
