#include "types.h"
#include "pso/enemy/TObjEneHoldEffect.h"
#include "pso/TObject.h"
#include "pso/misc/TNowLoading.h"
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
void *get_player_by_client_id(int);
void subtract_vector(Vec_8036CF30 *, void *);
void normalize_vector(Vec_8036CF30 *);
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805E03B0;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, int);
void *get_player_by_client_id(int);
void subtract_vector(Vec_8036CF30 *, void *);
void normalize_vector(Vec_8036CF30 *);
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805E03B0;
s32 is_split_screen(void);
void queue_destruction__7TObjectFv(void *);
void run_task__17TObjEneHoldEffectFv(Hold_8036CE20 *o);
u8 validate_attack_target_count(s32 *count);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
u8 validate_attack_target_count(s32 *count) {
    s32 valid = 0;
    if (*count >= 0 && *count <= 10) {
        valid = 1;
    }
    return valid;
}
#pragma pop

#pragma push
#pragma fp_contract on
void run_task__17TObjEneHoldEffectFv(Hold_8036CE20 *o) {
    void *p = get_player_by_client_id(o->x94);
    if (p != NULL && ((TObject *)p)->all_parents_unqueued_for_destruction() != 0 &&
        obj_testFlags30(p, 0x800) == 0 && o->x90 != NULL &&
        ((TObject *)(o->x90))->all_parents_unqueued_for_destruction() != 0) {
        if (o->x98 == 0x20F && is_split_screen() == 0) {
            Vec_8036CF30 d;
            Vec_8036CF30 out;
            VecCopy__FP3VecPC3Vec(&d, &o->pos);
            subtract_vector(&d, camera_ctrl_instance + 0x178);
            normalize_vector(&d);
            out.x = o->pos.x - lbl_805E03B0 * d.x;
            out.y = o->pos.y;
            out.z = o->pos.z - lbl_805E03B0 * d.z;
            ((TNowLoading *)(o->x90))->copy_pos(&out);
        } else {
            ((TNowLoading *)(o->x90))->copy_pos(&o->pos);
        }
    }
    if (o->x9c-- < 0) {
        queue_destruction__7TObjectFv(o);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneHoldEffect::render() {
    Hold_8036CF30 *o = (Hold_8036CF30 *)this;
    void *p = get_player_by_client_id(o->x94);
    if (p != NULL && ((TObject *)p)->all_parents_unqueued_for_destruction() != 0 &&
        obj_testFlags30(p, 0x800) == 0 && o->x90 != NULL &&
        ((TObject *)(o->x90))->all_parents_unqueued_for_destruction() != 0) {
        Vec_8036CF30 d;
        Vec_8036CF30 out;
        VecCopy__FP3VecPC3Vec(&d, &o->pos);
        subtract_vector(&d, camera_ctrl_instance + 0x178);
        normalize_vector(&d);
        out.x = o->pos.x - lbl_805E03B0 * d.x;
        out.y = o->pos.y;
        out.z = o->pos.z - lbl_805E03B0 * d.z;
        ((TNowLoading *)(o->x90))->copy_pos(&out);
    }
}
#pragma pop

}
