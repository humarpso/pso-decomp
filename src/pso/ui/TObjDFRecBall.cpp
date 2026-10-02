#include "pso/TObjDFRecBall.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80051430___vt__13TObjDFRecBall { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4Type2__sub_800874F4(s32, s32);
void set_flags__11TBoss4Type2FPvUi(void *, s32);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern RecoveredGlobal_80051430___vt__13TObjDFRecBall __vt__13TObjDFRecBall;
extern s32 lbl_805D27BC;
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
extern const f32 lbl_805D8A6C;
extern const f32 lbl_805D8ABC;
u8 *TObjDFRecBall__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
}

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
}

#include "types.h"

extern "C" {

struct Vec_8005123C { f32 x, y, z; };

struct Ball_8005123C {
    u8 pad0[0x1C];
    Vec_8005123C pos;
    Vec_8005123C target;
    Vec_8005123C vel;
    f32 speed;
    void *model;
    s32 timer;
};

void VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
f32 TObjPlayer__sub_803E1A58(void *, void *);
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
extern const f32 lbl_805D8A48;
extern const f32 lbl_805D8AAC;
extern const f32 lbl_805D8AB0;
extern const f32 lbl_805D8AB4;
extern const f32 lbl_805D8AB8;

#pragma push
#pragma fp_contract on
void TObjDFRecBall::run_task() {
    Ball_8005123C *o = (Ball_8005123C *)this;
    Vec_8005123C d;

    if (--o->timer < 0 || o->model == 0) {
        queue_destruction__7TObjectFv(o);
        return;
    }
    f32 sp = o->speed + lbl_805D8AAC;
    o->speed = sp;
    if (sp > 9.0f) {
        o->speed = 9.0f;
    }
    VecCopy__FP3VecPC3Vec(&d, &o->target);
    TBoss6Type1__sub_803D9370(&d, &o->pos);
    if (TBoss6Kakusan__sub_803D8BD8(&d) > lbl_805D8A48) {
        TNpcPlayer__sub_803D97B4(&d);
    } else {
        d.x = lbl_805D8A34;
        d.z = d.y = lbl_805D8A30;
    }
    if (TBoss6Kakusan__sub_803D8BD8(&o->vel) > lbl_805D8A48) {
        TNpcPlayer__sub_803D97B4(&o->vel);
    } else {
        o->vel.x = lbl_805D8A34;
        o->vel.y = lbl_805D8A30;
        o->vel.z = lbl_805D8A30;
    }
    o->vel.x = o->speed * (lbl_805D8AB4 * o->vel.x + lbl_805D8AB8 * d.x);
    o->vel.y = o->speed * (lbl_805D8AB4 * o->vel.y + lbl_805D8AB8 * d.y);
    o->vel.z = o->speed * (lbl_805D8AB4 * o->vel.z + lbl_805D8AB8 * d.z);
    TBoss4Zako__sub_803D8910(&o->pos, &o->vel);
    copy_pos__11TNowLoadingFPvPv(o->model, &o->pos);
    if (TObjPlayer__sub_803E1A58(&o->pos, &o->target) <= o->speed) {
        queue_destruction__7TObjectFv(o);
    }
}
#pragma pop

}

TObjDFRecBall::~TObjDFRecBall() {
    if (m_44 != nullptr) request_destroy__11TBoss4Type2FUi(m_44);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__13TObjDFRecBallFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);

u8 *TObjDFRecBall__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 temp_r31;
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TObjDFRecBall.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27BC;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    temp_r31 = (s32) (lbl_805D8ABC * (lbl_805D8A6C * (f32) rand()));
    M2C_FIELD(arg0, f32 *, 0x34) = TBoss8Dragon__sub_803D64C0(temp_r31);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D8A30;
    M2C_FIELD(arg0, f32 *, 0x3C) = TBoss8Dragon__sub_803D64DC(temp_r31);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8A34;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x96;
    temp_r3 = (u8 *)(TBoss4Type2__sub_800874F4((s32) (arg0 + 0x1C), 0xAF));
    M2C_FIELD(arg0, u8 **, 0x44) = temp_r3;
    if (temp_r3 != NULL) {
        set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, u8 **, 0x44), 0x40);
    }
    return arg0;
}

void * create__13TObjDFRecBallFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TObjDFRecBall__ct((u8 *)(o), (u8 *)(arg0), (u8 *)(arg1), (u8 *)(arg2));
    }
    return o;
}

}
