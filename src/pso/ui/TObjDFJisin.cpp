#include "types.h"
#include "dolphin/mtx.h"
#include <stddef.h>
#include "pso/TObject.h"
#include "pso/TObjDFTenchuFuru.h"
class TObjDFJisin : public TObject {
public:
    virtual void render();
    virtual ~TObjDFJisin();
    virtual void run_task();
};
class TObjDFBeamCursor : public TObject {
public:
    virtual void render();
    virtual ~TObjDFBeamCursor();
    virtual void run_task();
};
class TObjDFRecBall : public TObject {
public:
    u8 _pad1C[0x28];
 void* m_44;
public:
    virtual void render();
    virtual ~TObjDFRecBall();
    virtual void run_task();
};

struct VBase_18_0c879f { char pad[0x18]; };

struct VObj_18_0c879f : VBase_18_0c879f {
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
    virtual s32 m21(s32, void *, s32, s32, s32);
};

struct S_80050808 { s32 a; f32 b; };

struct Ang_80050808 { s32 x, y, z; };

extern "C" {
u16 find_nearest_visible_player(void *, int, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
s32 is_boss_active__13TObjDFHormingFv();
s32 TBoss4DarkFalz__sub_8004C1AC();
s32 check_attack_trigger__11TBoss4Type3Fv(void *);
s32 steer_homing_direction(void *);
s32 fn_8005076C(void *);
int queue_destruction__13TObjDFHormingFPv(void* p);
s32 copy_vec3__11TBoss4Type2FPv(void *, void *);
void copy_pos__11TNowLoadingFPv(void *, void *);
s32 query_teammate_state__9TObjEneDDFv();
s32 direction_to_rotation_xz(void *, void *, void *);
u8 * get_player_by_client_id(u16);
s32 minimap_render_dot(void *, int, int, int);
void vec3_add_to(void *, void *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
extern const f32 lbl_805D8A60;
void run_task__13TObjDFHormingFv(u8 *arg0);
}

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
    s32 value;
    u8 remaining[0x14];
};

typedef char RecoveredGlobal_8005101C___vt__11TObjDFJisin_size[sizeof(RecoveredGlobal_8005101C___vt__11TObjDFJisin) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80051430___vt__13TObjDFRecBall { s32 value; u8 remaining[0x14]; };

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
s32 construct_actor_base__10TObjPlayerFPvPv(void *, s32);
void VecCopy__FP3VecPC3Vec(void *, void *);
Player_80050D74 * get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
f64 atan2_float(f32, f32);
f32 newton_sqrtf(f32);
void queue_destruction__7TObjectFv(void *);
u8 * dispatch_shared_handler_a__6TLobbyFl(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_state_ready__14TBoss4DarkFalzFv();
s32 TBoss4DarkFalz__sub_8004C1B4();
int queue_destruction__13TObjDFHormingFPv(void* p);
S_80050A68 * __dt__13TObjDFHormingFv(S_80050A68 *o, s16 flag);
u8 * TObjDFHorming__ct(u8 *arg0, s32 arg1, s32 arg2, u16 arg3);
void * create_horming__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2);
void damage_players_near_point(s32 arg0, Vec_80050D74 *arg1);
void fn_spawn_particle_f3_with_flags(s32 arg0, s32 arg1);
u8 * TObjDFJisin__ct(u8 *arg0, u8 *arg1, s32 arg2);
void * create_jisin__11TBoss4Type2FPvPv(void *arg0, void *arg1);
void * TObjDFBeamCursor__ct(void *arg0, void *arg1, void *arg2);
void * create__16TObjDFBeamCursorFPvPv(void *arg0, void *arg1);
u8 * TObjDFRecBall__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
void * create__13TObjDFRecBallFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 TBoss4Type3__sub_8005254C(s16);
void request_destroy__11TBoss4Type2FUl(void *);
u32 spawn_particle_effect(void *, int);
s32 create_particle_emitter(s32, s32);
s32 set_flags__11TBoss4Type2FUl(int, int);
void copy_pos__11TNowLoadingFPv(void *, void *);
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

extern void *__vt__11TObjDFJisin[];
extern void *__vt__13TObjDFHorming[];
extern void *__vt__13TObjDFRecBall[];
extern void *__vt__16TObjDFBeamCursor[];
extern const f64 lbl_804374F0;
extern s32 TObjDFJisin__particle_emitter_id_table[];
extern s32 TObjDFRecBall__name;
extern void *TObjDFBeamCursor__name;
extern s32 TObjDFJisin__name;
extern s32 TObjDFHorming__name;
extern s32 game_difficulty_selection;
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

extern "C" {
f32 xyz_distance(Vec_80050D74 *, Vec_80050D74 *);
}

int queue_destruction__13TObjDFHormingFPv(void* p) { return ((int (*)(void*))queue_destruction__7TObjectFv)(p); }

void run_task__13TObjDFHormingFv(u8 *arg0) {
    Ang_80050808 rot;
    Vec_80050D74 d;
    S_80050808 s;
    u8 *p;
    s32 i;
    if (query_teammate_state__9TObjEneDDFv() != 0) {
        return;
    }
    if (*(u16 *)((s8 *)arg0 + 0x334) == 0xFFFF || (p = get_player_by_client_id(*(u16 *)((s8 *)arg0 + 0x334))) == NULL) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x36C, p + 0x2FC);
    *(f32 *)((s8 *)arg0 + 0x37C) = xyz_distance((Vec_80050D74 *)(arg0 + 0x2FC), (Vec_80050D74 *)(arg0 + 0x36C));
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x2FC);
    switch (*(s32 *)((s8 *)arg0 + 0x368)) {
    case 0:
        fn_8005076C(arg0);
        break;
    case 1:
        steer_homing_direction(arg0);
        break;
    case 2:
        check_attack_trigger__11TBoss4Type3Fv(arg0);
        break;
    }
    normalize_vector(arg0 + 0x348);
    *(f32 *)((s8 *)arg0 + 0x348) *= *(f32 *)((s8 *)arg0 + 0x354);
    *(f32 *)((s8 *)arg0 + 0x34C) *= *(f32 *)((s8 *)arg0 + 0x354);
    *(f32 *)((s8 *)arg0 + 0x350) *= *(f32 *)((s8 *)arg0 + 0x354);
    vec3_add_to(arg0 + 0x2FC, arg0 + 0x348);
    {
        s32 id = find_nearest_visible_player(arg0, 0, lbl_805D8A60);
        if (id != 0xFFFF && (p = get_player_by_client_id(id)) != NULL) {
            if (is_boss_active__13TObjDFHormingFv() != 0) {
                s.a = 0;
                s.b = *(s32 *)((s8 *)arg0 + 0x360);
                {
                    S_80050808 t = s;
                    ((VObj_18_0c879f *)p)->m21(TBoss4DarkFalz__sub_8004C1AC(), &t, 0, -1, -1);
                }
            }
            queue_destruction__13TObjDFHormingFPv(arg0);
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        if (*(u32 *)((s8 *)(arg0 + i * 4) + 0x358) != 0) {
            if (i == 1) {
                VecCopy__FP3VecPC3Vec(&d, arg0 + 0x2FC);
                subtract_vector(&d, arg0 + 0x44);
                direction_to_rotation_xz(&d, &rot.x, &rot.z);
                rot.y = 0;
                copy_vec3__11TBoss4Type2FPv((void *)*(u32 *)((s8 *)(arg0 + i * 4) + 0x358), &rot);
            }
            copy_pos__11TNowLoadingFPv((void *)*(u32 *)((s8 *)(arg0 + i * 4) + 0x358), arg0 + 0x2FC);
        }
    }
    minimap_render_dot(arg0 + 0x2FC, -0x5DB4, 1, 0);
    if (--*(s32 *)((s8 *)arg0 + 0x338) < 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}

S_80050A68 *__dt__13TObjDFHormingFv(S_80050A68 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = __vt__13TObjDFHorming;
        for (i = 0; i < 2; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUl(o->ptr[i]);
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
u8 *TObjDFHorming__ct(u8 *arg0, s32 arg1, s32 arg2, u16 arg3) {
    f32 scale;
    s32 ang;
    u8 *p;
    s32 i;

    construct_actor_base__10TObjPlayerFPvPv(arg0, arg1);
    *(u8 **)((s8 *)arg0 + 0x18) = (u8 *)__vt__13TObjDFHorming;
    *(s32 *)((s8 *)arg0 + 0) = TObjDFHorming__name;
    *(u16 *)((s8 *)arg0 + 0x334) = arg3;
    *(s32 *)((s8 *)arg0 + 0x338) = 0x96;
    if (game_difficulty_selection == 3) {
        *(s32 *)((s8 *)arg0 + 0x338) = 0x12C;
    }
    ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x44, ((void * (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x33C, (void *)arg2)));
    scale = newton_sqrtf(lbl_805D8A64);
    ang = (s32)(lbl_805D8A68 * (lbl_805D8A6C * (f32)rand() - lbl_805D8A70));
    p = get_player_by_client_id(*(u16 *)((s8 *)arg0 + 0x334));
    if (p != NULL) {
        ang = 0;
    } else {
        ang += (s32)(lbl_804374F0 * atan2_float(*(f32 *)((s8 *)p + 0x38) - lbl_805D8A74, *(f32 *)((s8 *)p + 0x40)));
    }
    *(f32 *)((s8 *)arg0 + 0x348) = lbl_805D8A78 * sin_table_lookup(ang) / scale;
    *(f32 *)((s8 *)arg0 + 0x350) = lbl_805D8A78 * cos_table_lookup(ang) / scale;
    *(f32 *)((s8 *)arg0 + 0x34C) = lbl_805D8A7C / scale;
    *(f32 *)((s8 *)arg0 + 0x354) = lbl_805D8A80;
    *(s32 *)((s8 *)arg0 + 0x360) = *(s32 *)((s8 *)(dispatch_shared_handler_a__6TLobbyFl(0x38)) + 0x28);
    *(f32 *)((s8 *)arg0 + 0x364) = *(f32 *)((s8 *)(dispatch_shared_handler_a__6TLobbyFl(0x38)) + 0);
    if (*(f32 *)((s8 *)arg0 + 0x364) < lbl_805D8A30 || *(f32 *)((s8 *)arg0 + 0x364) > lbl_805D8A34) {
        *(f32 *)((s8 *)arg0 + 0x364) = lbl_805D8A70;
    }
    *(f32 *)((s8 *)arg0 + 0x378) = lbl_805D8A88 * *(f32 *)((s8 *)arg0 + 0x364) + lbl_805D8A84;
    for (i = 0; i < 2; i++) {
        if ((((Obj_80050AF8 *)arg0)->objs[i] = ((u32 (*)(void *, s32))create_particle_emitter)(arg0 + 0x2FC, TObjDFJisin__particle_emitter_id_table[i])) != 0) {
            ((s32 (*)(u32, u32))set_flags__11TBoss4Type2FUl)(((Obj_80050AF8 *)arg0)->objs[i], 0x40);
        }
    }
    *(s32 *)((s8 *)arg0 + 0x368) = 0;
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

void damage_players_near_point(s32 arg0, Vec_80050D74 *arg1) {
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

void fn_spawn_particle_f3_with_flags(s32 arg0, s32 arg1) {
    Vec position;
    u32 temp_r3;
    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&position.x), (void *) (arg1));
    position.y += lbl_805D8A90;
    temp_r3 = spawn_particle_effect((void *) (&position.x), (int) (0xF3));
    if (temp_r3 != 0U) {
        set_flags__11TBoss4Type2FUl((int) (temp_r3), (int) (0x40));
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
            ((void (*)(void *, Vec_80050EB4 *))fn_spawn_particle_f3_with_flags)(((Obj_80050EB4 *)this), &v);
            ((void (*)(void *, Vec_80050EB4 *))damage_players_near_point)(((Obj_80050EB4 *)this), &v);
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
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__11TObjDFJisin;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjDFJisin__name;
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (lbl_805D8AA0 * sin_table_lookup(arg2));
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) lbl_805D8A30;
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) (lbl_805D8AA8 * cos_table_lookup(arg2));
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) lbl_805D8AA4;
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

extern "C" {
void run_task__16TObjDFBeamCursorFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C) - 1;
    *(s32 *)((s8 *)arg0 + 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        ((s32 (*)(void *, int))spawn_particle_effect)((void *) (arg0 + 0x20), (int) (0x38));
        ((s32 (*)(void *))queue_destruction__7TObjectFv)((void *) (arg0));
    }
}
TObjDFBeamCursor::~TObjDFBeamCursor() {}

void *TObjDFBeamCursor__ct(void *arg0, void *arg1, void *arg2) {
    ((void (*)(void *))__ct__7TObjectFP7TObject)(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__16TObjDFBeamCursor;
    *(void **)((s8 *)arg0 + 0x0) = TObjDFBeamCursor__name;
    *(u32 *)((s8 *)arg0 + 0x1C) = 32;
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
    copy_pos__11TNowLoadingFPv(o->model, &o->pos);
    if (((f32 (*)(void *, void *))xyz_distance)(&o->pos, &o->target) <= o->speed) {
        queue_destruction__7TObjectFv(o);
    }
}
extern int fold_flush_2;
#pragma pop

}
TObjDFRecBall::~TObjDFRecBall() {
    if (m_44 != nullptr) request_destroy__11TBoss4Type2FUl(m_44);
}

extern "C" {
u8 *TObjDFRecBall__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 temp_r31;
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__13TObjDFRecBall;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjDFRecBall__name;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    temp_r31 = (s32) (lbl_805D8ABC * (lbl_805D8A6C * (f32) rand()));
    *(f32 *)((s8 *)arg0 + 0x34) = sin_table_lookup(temp_r31);
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) lbl_805D8A30;
    *(f32 *)((s8 *)arg0 + 0x3C) = cos_table_lookup(temp_r31);
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) lbl_805D8A34;
    *(s32 *)((s8 *)arg0 + 0x48) = 0x96;
    temp_r3 = (u8 *)(create_particle_emitter((s32) (arg0 + 0x1C), 0xAF));
    *(u8 **)((s8 *)arg0 + 0x44) = temp_r3;
    if (temp_r3 != NULL) {
        ((void (*)(void *, s32))set_flags__11TBoss4Type2FUl)(*(u8 **)((s8 *)arg0 + 0x44), 0x40);
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

extern "C" {
void TLobby__sub_801A1FD8();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A78();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80011010();
void consume_timer_field__10TObjPlayerFPvi();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014884();
void TObjPlayer__sub_80014888();
void TObjPlayer__sub_8001488C();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void apply_slow_status__10TObjPlayerFPv();
void update_shock_clock__10TObjPlayerFPv();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void TObjPlayer__sub_80019568();
void TObjRoomId__sub_801A1E2C();
void __dt__11TObjDFJisinFv();
void __dt__13TObjDFRecBallFv();
void __dt__16TObjDFBeamCursorFv();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFlPv();
void apply_knockback_from_attacker();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_shock_status__10TObjPlayerFv();
void apply_switch_attack__10TObjPlayerFi();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void get_actor_body_center();
void get_actor_level_index();
void get_pos__10TObjPlayerFii();
void has_flag_0x800__10TObjPlayerFPv();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void receive_direct_attack__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void render__7TObjectFv();
void render_shadows__7TObjectFv();
void reset_actor_action_state();
void reset_pose__10TObjPlayerFPv();
void roll_physical_accuracy__10TObjPlayerFv();
void run_task__11TObjDFJisinFv();
void run_task__13TObjDFRecBallFv();
void select_melee_contact_body__10TObjPlayerFv();
void test_flag30_512__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void test_flag_256__10TObjPlayerFPv();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__10TObjPlayerFPvii();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility();
void update_poison_status__10TObjPlayerFv();
void *__vt__13TObjDFHorming[] = {
    0,
    0,
    (void *)__dt__13TObjDFHormingFv,
    (void *)run_task__13TObjDFHormingFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
    (void *)TLobby__sub_801A1FD8,
    (void *)apply_object_set_data,
    (void *)reset_actor_action_state,
    (void *)get_actor_body_center,
    (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail,
    (void *)TObjRoomId__sub_801A1E2C,
    (void *)TObjPlayer__sub_80019568,
    (void *)add_actor_exp,
    (void *)consume_timer_field__10TObjPlayerFPvi,
    (void *)get_actor_level_index,
    (void *)update_actor_ground_y,
    (void *)TObjPlayer__sub_80018E6C,
    (void *)is_actor_cadence_frame,
    (void *)select_melee_contact_body__10TObjPlayerFv,
    (void *)calc_distance_accuracy_penalty__10TObjPlayerFv,
    (void *)receive_physical_attack__10TObjPlayerFv,
    (void *)receive_direct_attack__10TObjPlayerFv,
    (void *)receive_weapon_special_attack__10TObjPlayerFv,
    (void *)apply_knockback_from_attacker,
    (void *)try_start_action__10TObjPlayerFPvii,
    (void *)roll_physical_accuracy__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80011010,
    (void *)TObjPlayer__sub_8000FF3C,
    (void *)is_target_in_attack_range__10TObjPlayerFv,
    (void *)test_flag_256__10TObjPlayerFPv,
    (void *)test_flag30_512__10TObjPlayerFPv,
    (void *)has_flag_0x800__10TObjPlayerFPv,
    (void *)test_flag_1000__10TObjPlayerFPv,
    (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv,
    (void *)update_action_timer__10TObjPlayerFPv,
    (void *)update_flag30_timer__10TObjPlayerFPv,
    (void *)update_movement_status__10TObjPlayerFv,
    (void *)update_shock_clock__10TObjPlayerFPv,
    (void *)update_attack_stat_status,
    (void *)update_defense_stat_status,
    (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv,
    (void *)apply_paralysis__10TObjPlayerFv,
    (void *)apply_slow_status__10TObjPlayerFPv,
    (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv,
    (void *)apply_shock_status__10TObjPlayerFv,
    (void *)clear_harmful_statuses__10TObjPlayerFv,
    (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)apply_defense_stat_status__10TObjPlayerFlPv,
    (void *)cure_poison_ailment,
    (void *)cure_paralysis__10TObjPlayerFv,
    (void *)clear_all_status_effects,
    (void *)apply_action_hold_status,
    (void *)apply_anti_technique__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80014898,
    (void *)TObjPlayer__sub_80014894,
    (void *)TObjPlayer__sub_80014890,
    (void *)TObjPlayer__sub_8001488C,
    (void *)TObjPlayer__sub_80014888,
    (void *)TObjPlayer__sub_80014884,
    (void *)reset_pose__10TObjPlayerFPv,
    (void *)TObjPlayer__sub_80014840,
    (void *)TObjPlayer__sub_80014838,
    (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)TObjPlayer__sub_80010A80,
    (void *)TObjPlayer__sub_80010A78,
    (void *)fn_80010EC8,
    (void *)fn_80010EC4,
    (void *)fn_80010EC0,
    (void *)fn_80010EBC,
};
void *__vt__11TObjDFJisin[] = {
    0,
    0,
    (void *)__dt__11TObjDFJisinFv,
    (void *)run_task__11TObjDFJisinFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
void *__vt__16TObjDFBeamCursor[] = {
    0,
    0,
    (void *)__dt__16TObjDFBeamCursorFv,
    (void *)run_task__16TObjDFBeamCursorFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
void *__vt__13TObjDFRecBall[] = {
    0,
    0,
    (void *)__dt__13TObjDFRecBallFv,
    (void *)run_task__13TObjDFRecBallFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
}

#include "pso/boss/TObjDFRecover.h"

extern "C" {
void *__dt__13TObjDFRecoverFv(void *arg0, s16 arg1);
void run_task__13TObjDFRecoverFv();
void __dt__7TObjectFv(void *, s16);
void *__vt__13TObjDFRecover[] = {
    0,
    0,
    (void *)__dt__13TObjDFRecoverFv,
    (void *)run_task__13TObjDFRecoverFv,
    (void *)render__7TObjectFv,
    (void *)render_shadows__7TObjectFv,
};
}

extern "C" {
s32 is_state_ready__14TBoss4DarkFalzFv();
void request_destroy__11TBoss4Type2FUl(void *);
s32 set_flags__11TBoss4Type2FUl(int, int);
s32 play_sound_effect(int, int, int, int);
s32 spawn_effect__11TBoss4Type3Fsss(int, int, int);
}

#pragma push
#pragma fp_contract on
void TObjDFRecover::run_task() {
    f32 position[3];
    s32 current_phase;
    s32 target_address;
    u32 effect_address;
    u16 id;
    if (is_state_ready__14TBoss4DarkFalzFv() == 0) {
        ((s32 (*)(void *))queue_destruction__7TObjectFv)(this);
        return;
    }
    id = target_id;
    if ((id == 0xFFFF) || ((target_address = ((s32 (*)(u16))get_player_by_client_id)(id)) == 0)) {
        ((s32 (*)(void *))queue_destruction__7TObjectFv)(this);
        return;
    }
    ((s32 (*)(void *, const void *))VecCopy__FP3VecPC3Vec)(position, (void *) (target_address + 0x2FC));
    countdown = countdown - 1;
    current_phase = phase;
    switch (current_phase) {
    case 0:
        if (countdown <= 0) {
            effect_address = ((u32 (*)(void *, int))create_particle_emitter)(position, 0xEB);
            effect = (void*)effect_address;
            if (effect_address == 0U) {
                ((s32 (*)(void *))queue_destruction__7TObjectFv)(this);
                return;
            }
            set_flags__11TBoss4Type2FUl((int) (effect), 0x40);
            countdown = 0xA;
            phase = 1;
        }
        break;
    case 1:
        ((s32 (*)(int, void *))copy_pos__11TNowLoadingFPv)((int) (effect), position);
        if (countdown <= 0) {
            request_destroy__11TBoss4Type2FUl(effect);
            effect = NULL;
            spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (int) ((s16) target_id));
            countdown = 0xB;
            phase = 2;
            return;
        }
        break;
    case 2:
        if ((countdown % 5) == 0) {
            play_sound_effect(0x4003AD19, 0, 0, 0);
            ((s32 (*)(int, void *, void *))create__13TObjDFRecBallFPvPvPv)((int)m_up, position, cached_position);
        }
        if (countdown <= 0) {
            ((s32 (*)(void *))queue_destruction__7TObjectFv)(this);
        }
        break;
    }
}
#pragma pop

extern "C" {
void *__dt__13TObjDFRecoverFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = __vt__13TObjDFRecover;
        if (*(void **)((s8 *)arg0 + 0x2C) != 0) request_destroy__11TBoss4Type2FUl(*(void **)((s8 *)arg0 + 0x2C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}

extern "C" {
extern const char *TObjDFRecover__name;
}
TObjDFRecover::TObjDFRecover(TObject *parent, u16 id, const f32 *position) : TObject(parent) {
    m_name = TObjDFRecover__name;
    target_id = id;
    effect = NULL;
    ((s32 (*)(void *, const void *))VecCopy__FP3VecPC3Vec)(cached_position, position);
    phase = 0;
    countdown = 5;
}

#include "pso/boss/TObjDFRecover.h"

TObjDFRecover *TObjDFRecover::create(TObject *parent, u16 id, const f32 *position) {
    return new TObjDFRecover(parent, id, position);
}

#include "types.h"

struct RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80051A18_lbl_804FF240 {
    s32 value;
    u8 remaining[0x5C];
};

#include <stddef.h>
struct RecoveredGlobal_80051AD0_lbl_804858B4 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80051AD0_lbl_804FF228 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80051AD0_lbl_804FF234 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredFields_80051AD0_var_r31 {
    s32 field_0;
    u8 unknown_4[0x28];
    u8 * field_2C;
    u8 * field_30;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 create_particle_emitter(s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru __vt__16TObjDFTenchuFuru;
extern s32 TObjDFTenchuFuru__name;
extern const f32 lbl_805D8AA0;
u8 *TObjDFTenchuFuru__ct(u8 *arg0, u8 *arg1, u8 *arg2);
s32 get_current_matrix(void *);
extern RecoveredGlobal_80051A18_lbl_804FF240 df_captured_matrix_pair;
extern int TObjDFTenchuFuru__matrix_node_index;
s32 matrix_mult_vec(int, void *, void *);
f32 rotate_matrix_by_node_angles(void *, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
f32 post_translate_matrix(void *);
extern RecoveredGlobal_80051AD0_lbl_804858B4 dark_falz_jisin_zero_vec;
extern RecoveredGlobal_80051AD0_lbl_804FF228 lbl_804FF228;
extern RecoveredGlobal_80051AD0_lbl_804FF234 lbl_804FF234;
extern int TObjDFTenchuFuru__matrix_node_index;
}

extern "C" {
}

#include "types.h"

extern "C" {
s32 is_state_ready__14TBoss4DarkFalzFv();
s32 is_active__14TBoss4DarkFalzFv();
extern const f32 lbl_805D8AC0;
}

extern "C" {

int TObjDFTenchuFuru__sub_80051A7C(void);
void *__nw__7TObjectFUl(int);
int set_global_state__16TObjEneRe7BeruraFl(void*);

#pragma push
#pragma fp_contract on
void TObjDFTenchuFuru::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) (*(f32 *)((s8 *)arg0 + 0x20) + lbl_805D8AC0);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
        ((s32 (*)(void *, void *))copy_pos__11TNowLoadingFPv)(*(void **)((s8 *)arg0 + 0x2C), (void *) (arg0 + 0x1C));
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x28) - 1;
    *(s32 *)((s8 *)arg0 + 0x28) = temp_r0;
    if ((temp_r0 < 0) || ((is_active__14TBoss4DarkFalzFv() == 0) && (is_state_ready__14TBoss4DarkFalzFv() == 0))) {
        ((s32 (*)(void *))queue_destruction__7TObjectFv)((void *) (arg0));
    }
}
#pragma pop

typedef char RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru_size[sizeof(RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru) == 0x18 ? 1 : -1];
TObjDFTenchuFuru::~TObjDFTenchuFuru() {
    if (m_2c != nullptr) ((void (*)(void*))request_destroy__11TBoss4Type2FUl)(m_2c);
}
u8 *TObjDFTenchuFuru__ct(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__16TObjDFTenchuFuru.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjDFTenchuFuru__name;
    *(s32 *)((s8 *)arg0 + 0x28) = 5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) (*(f32 *)((s8 *)arg0 + 0x20) + lbl_805D8AA0);
    temp_r3 = (u8 *)(create_particle_emitter((s32) (arg0 + 0x1C), 0x134));
    *(u8 **)((s8 *)arg0 + 0x2C) = temp_r3;
    if (temp_r3 != NULL) {
        ((void (*)(void *, s32))set_flags__11TBoss4Type2FUl)(*(u8 **)((s8 *)arg0 + 0x2C), 0x40);
    }
    return arg0;
}

void *TObjDFTenchuFuru::create(void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TObjDFTenchuFuru__ct((u8 *)(o), (u8 *)(this), (u8 *)(arg1));
    }
    return o;
}

typedef char RecoveredGlobal_80051A18_lbl_804FF240_size[sizeof(RecoveredGlobal_80051A18_lbl_804FF240) == 0x60 ? 1 : -1];
void TObjDFTenchuFuru::capture_matrix_by_frame() {
    switch ((s32) (*(s32 *)&TObjDFTenchuFuru__matrix_node_index)) {
    case 0x3B:
        get_current_matrix((void *) (&df_captured_matrix_pair.value));
        break;
    case 0x3A:
        get_current_matrix((void *) ((u8 *)&df_captured_matrix_pair.value + 0x30));
        break;
    }
    (*(s32 *)&TObjDFTenchuFuru__matrix_node_index) += 1;
}

int TObjDFTenchuFuru__sub_80051A7C(void) { return set_global_state__16TObjEneRe7BeruraFl((void*)(0)); }

    extern int TObjDFTenchuFuru__matrix_node_index;
void TObjDFTenchuFuru::register_callback() { TObjDFTenchuFuru__matrix_node_index = 0; set_global_state__16TObjEneRe7BeruraFl(((unsigned char *)TObjDFTenchuFuru::capture_matrix_by_frame)); }
typedef char RecoveredGlobal_80051AD0_lbl_804858B4_size[sizeof(RecoveredGlobal_80051AD0_lbl_804858B4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80051AD0_lbl_804FF228_size[sizeof(RecoveredGlobal_80051AD0_lbl_804FF228) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80051AD0_lbl_804FF234_size[sizeof(RecoveredGlobal_80051AD0_lbl_804FF234) == 0xC ? 1 : -1];
typedef char RecoveredFields_80051AD0_var_r31_0_offset[offsetof(RecoveredFields_80051AD0_var_r31, field_0) == 0x0 ? 1 : -1];
typedef char RecoveredFields_80051AD0_var_r31_2C_offset[offsetof(RecoveredFields_80051AD0_var_r31, field_2C) == 0x2C ? 1 : -1];
typedef char RecoveredFields_80051AD0_var_r31_30_offset[offsetof(RecoveredFields_80051AD0_var_r31, field_30) == 0x30 ? 1 : -1];
void TObjDFTenchuFuru::transform_node_tree() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    do {
        push_matrix();
        post_translate_matrix((void *) (var_r31 + 8));
        rotate_matrix_by_node_angles((void *) (var_r31 + 0x14), (int) (((RecoveredFields_80051AD0_var_r31 *)var_r31)->field_0 & 0x20));
        scale_current_matrix((void *) (var_r31 + 0x20));
        switch ((s32) (*(s32 *)&TObjDFTenchuFuru__matrix_node_index)) {
        case 0x3B:
            matrix_mult_vec((int) (0), (void *) (&dark_falz_jisin_zero_vec.value), (void *) (&lbl_804FF228.value));
            break;
        case 0x3A:
            matrix_mult_vec((int) (0), (void *) (&dark_falz_jisin_zero_vec.value), (void *) (&lbl_804FF234.value));
            break;
        }
        (*(s32 *)&TObjDFTenchuFuru__matrix_node_index) += 1;
        temp_r3 = (u8 *)(((RecoveredFields_80051AD0_var_r31 *)var_r31)->field_2C);
        if (temp_r3 != NULL) {
            ((TObjDFTenchuFuru *)temp_r3)->transform_node_tree();
        }
        pop_matrix();
        var_r31 = (u8 *)(((RecoveredFields_80051AD0_var_r31 *)var_r31)->field_30);
    } while (var_r31 != NULL);
}

}

extern "C" {
extern char lbl_8043748C[];
extern char lbl_8043749C[];
extern char lbl_804374AC[];
extern char lbl_804374C0[];
extern char lbl_804374CC[];
const char *TObjDFRecover__name = lbl_8043748C;
s32 TObjDFRecBall__name = (s32)lbl_8043749C;
void *TObjDFBeamCursor__name = lbl_804374AC;
s32 TObjDFJisin__name = (s32)lbl_804374C0;
s32 TObjDFHorming__name = (s32)lbl_804374CC;
}
