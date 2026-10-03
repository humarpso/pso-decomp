#include "types.h"
#include "dolphin/mtx.h"
#include <stddef.h>
#include "pso/TObjDFJisin.h"
#include "pso/TObjDFBeamCursor.h"
#include "pso/TObjDFRecBall.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct S_80050A68 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x358 - 0x1c];
    void *ptr[2];
};

typedef struct Vec_80050D74 {
    f32 x, y, z;
} Vec_80050D74;

typedef struct Hit_80050D74 {
    s32 type;
    f32 value;
} Hit_80050D74;

struct VBase_80050D74 { u8 pad[0x18]; };

struct VObj_80050D74 : VBase_80050D74 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21(s32, Hit_80050D74 *, s32, s32, s32);
};

struct Player_80050D74 : VObj_80050D74 {
    u8 pad1c[0x38 - 0x1c];
    Vec_80050D74 pos;
    u8 pad44[0x890 - 0x44];
    u32 flags890;
};

typedef struct Vec_80050EB4 {
    f32 x, y, z;
} Vec_80050EB4;

typedef struct Obj_80050EB4 {
    u8 pad0[0x1C];
    f32 cx;
    f32 f20;
    f32 cz;
    f32 radius;
} Obj_80050EB4;

struct RecoveredGlobal_8005101C___vt__11TObjDFJisin {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef char RecoveredGlobal_8005101C___vt__11TObjDFJisin_size[sizeof(RecoveredGlobal_8005101C___vt__11TObjDFJisin) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80051430___vt__13TObjDFRecBall { M2C_UNK value; u8 remaining[0x14]; };

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

struct Obj_80050AF8 { u8 pad[0x358]; u32 objs[2]; };

void destroy_motion_object__10TObjPlayerFPvs(void *, s32);
M2C_UNK TObjPlayer__sub_80019038(void *, M2C_UNK);
void VecCopy__FP3VecPC3Vec(void *, void *);
Player_80050D74 * get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
void queue_destruction__7TObjectFv(void *);
u8 * dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_state_ready__14TBoss4DarkFalzFv();
s32 TBoss4DarkFalz__sub_8004C1B4();
int queue_destruction__13TObjDFHormingFPv(void* p);
S_80050A68 * __dt__13TObjDFHormingFv(S_80050A68 *o, s16 flag);
u8 * TObjDFHorming__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, u16 arg3);
void * create_horming__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2);
void fn_80050D74(M2C_UNK arg0, Vec_80050D74 *arg1);
void fn_80050E64(M2C_UNK arg0, s32 arg1);
u8 * TObjDFJisin__ct(u8 *arg0, u8 *arg1, s32 arg2);
void * create_jisin__11TBoss4Type2FPvPv(void *arg0, void *arg1);
void * TObjDFBeamCursor__ct(void *arg0, void *arg1, void *arg2);
void * create__16TObjDFBeamCursorFPvPv(void *arg0, void *arg1);
u8 * TObjDFRecBall__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
void * create__13TObjDFRecBallFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 TBoss4Type3__sub_8005254C(s16);
void request_destroy__11TBoss4Type2FUi(void *);
u32 spawn_particle_effect(void *, int);
s32 create_particle_emitter(s32, s32);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
u8 * get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(void *, void *);
f32 vector_length(Vec_80050EB4 *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
f32 xyz_distance(Vec_80050D74 *, Vec_80050D74 *);

extern RecoveredGlobal_8005101C___vt__11TObjDFJisin __vt__11TObjDFJisin;
extern u8 __vt__13TObjDFHorming[];
extern RecoveredGlobal_80051430___vt__13TObjDFRecBall __vt__13TObjDFRecBall;
extern M2C_UNK __vt__16TObjDFBeamCursor[];
extern const f64 lbl_804374F0;
extern s32 lbl_804858C0[];
extern s32 lbl_805D27BC;
extern void *lbl_805D27C0;
extern s32 lbl_805D27C4;
extern s32 lbl_805D27C8;
extern s32 lbl_805D5550;
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
extern const f32 lbl_805D8A48;
extern const f32 lbl_805D8A64;
extern const f32 lbl_805D8A68;
extern const f32 lbl_805D8A6C;
extern const f32 lbl_805D8A70;
extern const f32 lbl_805D8A74;
extern const f32 lbl_805D8A78;
extern const f32 lbl_805D8A7C;
extern const f32 lbl_805D8A80;
extern const f32 lbl_805D8A84;
extern const f32 lbl_805D8A88;
extern const f32 lbl_805D8A8C;
extern const f32 lbl_805D8A90;
extern const f32 lbl_805D8A94;
extern const f32 lbl_805D8A98;
extern const f32 lbl_805D8A9C;
extern const f32 lbl_805D8AA0;
extern const f32 lbl_805D8AA4;
extern const f32 lbl_805D8AA8;
extern const f32 lbl_805D8AAC;
extern const f32 lbl_805D8AB4;
extern const f32 lbl_805D8AB8;
extern const f32 lbl_805D8ABC;

int queue_destruction__13TObjDFHormingFPv(void* p) { return ((int (*)(void*))queue_destruction__7TObjectFv)(p); }

S_80050A68 *__dt__13TObjDFHormingFv(S_80050A68 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = __vt__13TObjDFHorming;
        for (i = 0; i < 2; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->ptr[i]);
                o->ptr[i] = 0;
            }
        }
        destroy_motion_object__10TObjPlayerFPvs(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

#pragma push
#pragma fp_contract on
u8 *TObjDFHorming__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, u16 arg3) {
    f32 scale;
    s32 ang;
    u8 *p;
    s32 i;

    TObjPlayer__sub_80019038(arg0, arg1);
    M2C_FIELD(arg0, u8 **, 0x18) = __vt__13TObjDFHorming;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D27C8;
    M2C_FIELD(arg0, u16 *, 0x334) = arg3;
    M2C_FIELD(arg0, s32 *, 0x338) = 0x96;
    if (lbl_805D5550 == 3) {
        M2C_FIELD(arg0, s32 *, 0x338) = 0x12C;
    }
    ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x44, ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x33C, (void *)arg2)));
    scale = newton_sqrtf(lbl_805D8A64);
    ang = (s32)(lbl_805D8A68 * (lbl_805D8A6C * (f32)rand() - lbl_805D8A70));
    p = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x334));
    if (p != NULL) {
        ang = 0;
    } else {
        ang += (s32)(lbl_804374F0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(p, f32 *, 0x38) - lbl_805D8A74, M2C_FIELD(p, f32 *, 0x40)));
    }
    M2C_FIELD(arg0, f32 *, 0x348) = lbl_805D8A78 * sin_table_lookup(ang) / scale;
    M2C_FIELD(arg0, f32 *, 0x350) = lbl_805D8A78 * cos_table_lookup(ang) / scale;
    M2C_FIELD(arg0, f32 *, 0x34C) = lbl_805D8A7C / scale;
    M2C_FIELD(arg0, f32 *, 0x354) = lbl_805D8A80;
    M2C_FIELD(arg0, s32 *, 0x360) = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x38), s32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x364) = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x38), f32 *, 0);
    if (M2C_FIELD(arg0, f32 *, 0x364) < lbl_805D8A30 || M2C_FIELD(arg0, f32 *, 0x364) > lbl_805D8A34) {
        M2C_FIELD(arg0, f32 *, 0x364) = lbl_805D8A70;
    }
    M2C_FIELD(arg0, f32 *, 0x378) = lbl_805D8A88 * M2C_FIELD(arg0, f32 *, 0x364) + lbl_805D8A84;
    for (i = 0; i < 2; i++) {
        if ((((Obj_80050AF8 *)arg0)->objs[i] = ((u32 (*)(void *, s32))create_particle_emitter)(arg0 + 0x2FC, lbl_804858C0[i])) != 0) {
            ((M2C_UNK (*)(u32, u32))set_flags__11TBoss4Type2FPvUi)(((Obj_80050AF8 *)arg0)->objs[i], 0x40);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    return arg0;
}
extern int fold_flush_0;
#pragma pop

void * create_horming__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x380);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *, void *))TObjDFHorming__ct)(o, arg0, arg1, arg2);
    }
    return o;
}

void fn_80050D74(M2C_UNK arg0, Vec_80050D74 *arg1) {
    Vec_80050D74 pos = *arg1;
    Hit_80050D74 hit;
    s32 i;
    Player_80050D74 *p;
    if (is_state_ready__14TBoss4DarkFalzFv() == 0) {
        return;
    }
    hit.type = 0x11;
    hit.value = lbl_805D8A30;
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && TBoss4Type3__sub_8005254C(obj_getField1c(p)) != 0 &&
            !(p->flags890 & 0x10) &&
            !(xyz_distance(&pos, &p->pos) > lbl_805D8A8C)) {
            Hit_80050D74 h = hit;
            p->m21(TBoss4DarkFalz__sub_8004C1B4(), &h, 0, -1, -1);
        }
    }
}

void fn_80050E64(M2C_UNK arg0, s32 arg1) {
    Vec position;
    u32 temp_r3;
    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&position.x), (void *) (arg1));
    position.y += lbl_805D8A90;
    temp_r3 = spawn_particle_effect((void *) (&position.x), (int) (0xF3));
    if (temp_r3 != 0U) {
        set_flags__11TBoss4Type2FPvUi((int) (temp_r3), (int) (0x40));
    }
}

}
#pragma push
#pragma fp_contract on
void TObjDFJisin::run_task() {
    Vec_80050EB4 v;
    s32 ang;
    s32 step;
    s32 count;
    f32 max;

    step = (s32)(lbl_805D8A94 / (lbl_805D8A98 * ((Obj_80050EB4 *)this)->radius));
    count = 0;
    v.y = lbl_805D8A30;
    max = lbl_805D8A9C;
    for (ang = 0; ang < 0x10000; ang += step) {
        v.x = ((Obj_80050EB4 *)this)->radius * sin_table_lookup(ang) + ((Obj_80050EB4 *)this)->cx;
        v.z = ((Obj_80050EB4 *)this)->radius * cos_table_lookup(ang) + ((Obj_80050EB4 *)this)->cz;
        if (!(vector_length(&v) > max)) {
            ((void (*)(void *, Vec_80050EB4 *))fn_80050E64)(((Obj_80050EB4 *)this), &v);
            ((void (*)(void *, Vec_80050EB4 *))fn_80050D74)(((Obj_80050EB4 *)this), &v);
            count++;
        }
    }
    if (((Obj_80050EB4 *)this)->radius > lbl_805D8AA0 && count == 0) {
        queue_destruction__7TObjectFv(((Obj_80050EB4 *)this));
        return;
    }
    ((Obj_80050EB4 *)this)->radius += lbl_805D8AA4;
}
extern int fold_flush_1;
#pragma pop

TObjDFJisin::~TObjDFJisin() {}

extern "C" {
u8 *TObjDFJisin__ct(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__11TObjDFJisin.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27C4;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (lbl_805D8AA0 * sin_table_lookup(arg2));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805D8A30;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (lbl_805D8AA8 * cos_table_lookup(arg2));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D8AA4;
    return arg0;
}

void * create_jisin__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjDFJisin__ct)(o, arg0, arg1);
    }
    return o;
}

}
TObjDFBeamCursor::~TObjDFBeamCursor() {}

extern "C" {
void run_task__16TObjDFBeamCursorFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        ((M2C_UNK (*)(void *, int))spawn_particle_effect)((void *) (arg0 + 0x20), (int) (0x38));
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *) (arg0));
    }
}

void *TObjDFBeamCursor__ct(void *arg0, void *arg1, void *arg2) {
    ((void (*)(void *))__ct__7TObjectFP7TObject)(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjDFBeamCursor;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D27C0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 32;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32), arg2);
    return arg0;
}

void * create__16TObjDFBeamCursorFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TObjDFBeamCursor__ct((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

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
    subtract_vector(&d, &o->pos);
    if (((f32 (*)(void *))vector_length)(&d) > lbl_805D8A48) {
        normalize_vector(&d);
    } else {
        d.x = lbl_805D8A34;
        d.z = d.y = lbl_805D8A30;
    }
    if (((f32 (*)(void *))vector_length)(&o->vel) > lbl_805D8A48) {
        normalize_vector(&o->vel);
    } else {
        o->vel.x = lbl_805D8A34;
        o->vel.y = lbl_805D8A30;
        o->vel.z = lbl_805D8A30;
    }
    o->vel.x = o->speed * (lbl_805D8AB4 * o->vel.x + lbl_805D8AB8 * d.x);
    o->vel.y = o->speed * (lbl_805D8AB4 * o->vel.y + lbl_805D8AB8 * d.y);
    o->vel.z = o->speed * (lbl_805D8AB4 * o->vel.z + lbl_805D8AB8 * d.z);
    vec3_add_to(&o->pos, &o->vel);
    copy_pos__11TNowLoadingFPvPv(o->model, &o->pos);
    if (((f32 (*)(void *, void *))xyz_distance)(&o->pos, &o->target) <= o->speed) {
        queue_destruction__7TObjectFv(o);
    }
}
extern int fold_flush_2;
#pragma pop

}
TObjDFRecBall::~TObjDFRecBall() {
    if (m_44 != nullptr) request_destroy__11TBoss4Type2FUi(m_44);
}

extern "C" {
u8 *TObjDFRecBall__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 temp_r31;
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TObjDFRecBall.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27BC;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    temp_r31 = (s32) (lbl_805D8ABC * (lbl_805D8A6C * (f32) rand()));
    M2C_FIELD(arg0, f32 *, 0x34) = sin_table_lookup(temp_r31);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D8A30;
    M2C_FIELD(arg0, f32 *, 0x3C) = cos_table_lookup(temp_r31);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8A34;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x96;
    temp_r3 = (u8 *)(create_particle_emitter((s32) (arg0 + 0x1C), 0xAF));
    M2C_FIELD(arg0, u8 **, 0x44) = temp_r3;
    if (temp_r3 != NULL) {
        ((void (*)(void *, s32))set_flags__11TBoss4Type2FPvUi)(M2C_FIELD(arg0, u8 **, 0x44), 0x40);
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
