#include "types.h"
#include "pso/enemy/TObjEneBalClawBody.h"
#include "pso/enemy/TObjEnemyCustom.h"

typedef struct Plr_800C6E34 {
    u8 pad0[0x2A8];
    u8 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    f32 pos[3];
    u8 pad308[0x338 - 0x308];
    u16 targetIdx;
} Plr_800C6E34;

typedef struct Vec_800C6EF8 {
    f32 x, y, z;
} Vec_800C6EF8;

typedef struct Obj_800C6EF8 {
    u8 pad0[0x1C];
    u16 id;
    u8 pad1E[0x30 - 0x1E];
    u32 flags;
} Obj_800C6EF8;

typedef struct Obj_800C6FFC {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0x2A8 - 0x44];
    void *target;
    u8 pad2AC[0x338 - 0x2AC];
    u16 targetIdx;
} Obj_800C6FFC;

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_800C7168 { f32 x, y, z; };

struct Hit_800C7168 { u8 pad0[4]; u8 *obj; };

struct Pl_800C7168 {
    u8 pad0[0x38];
    Vec_800C7168 pos;
    Vec_800C7168 prev;
    u8 pad50[0x2FC - 0x50];
    Vec_800C7168 base;
    Vec_800C7168 vel;
};

extern "C" {
u8 *get_player_data__10TObjPlayerFi(int);
s32 obj_testFlags30(void *, int);
u8 *find_active_entity_by_id(int);
f32 xz_distance_squared(void *, void *);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void target_nearest_player__10TObjPlayerFPvf(Plr_800C6E34 *arg0, f32 radius);
f32 calc_xz_distance_sq__10TObjPlayerFiUiPv(void *, void *, Vec_800C6EF8 *);
void VecCopy__FP3VecPC3Vec(Vec_800C6EF8 *, Vec_800C6EF8 *);
u8 *get_player_data__10TObjPlayerFi(int);
u16 obj_getField1c(void *);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
u16 find_nearest_enemy__10TObjPlayerFPvPvf(Obj_800C6EF8 *arg0, Vec_800C6EF8 *out, f32 radius);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u8 *get_player_data__10TObjPlayerFi(int);
s32 obj_testFlags30(void *, int);
f32 xz_distance_squared(void *, void *);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
u16 pick_random_nearby_player__10TObjPlayerFPvf(u8 *arg0, f32 radius);
s32 find_nearest_visible_player(void *, void *, f32);
u16 find_nearest_enemy__10TObjPlayerFPvPvf(Obj_800C6EF8 *arg0, Vec_800C6EF8 *out, f32 radius);
u8 *find_active_entity_by_id(int);
f32 xz_distance_squared(void *, void *);
Obj_800C6FFC *find_entity_by_id(int);
BOOL select_nearest_target__10TObjPlayerFPvf(Obj_800C6FFC *arg0, f32 radius);
void calc_velocity_toward_destination(void *, Vec_800C7168, Vec_800C7168);
void VecCopy__FP3VecPC3Vec(Vec_800C6EF8 *, Vec_800C6EF8 *);
Hit_800C7168 *csnVector(void *, void *, s32);
s32 project_actor_to_ground(void *, void *, int);
s32 rand(void);
void vec3_add_to(void *, void *);
f32 vec3_dot(void *, void *);
void vec3_cross(void *, void *, void *);
void rotate_vector_by_matrix(int, void *, void *);
void rotate_matrix_y(int, s32);
void subtract_vector(void *, void *);
void push_matrix_from(void *);
void pop_matrices(int);
extern const f64 lbl_8043BCC8;
extern s32 identity_matrix[];
extern const f32 lbl_805DA070;
extern const f32 lbl_805DA074;
extern const f32 lbl_805DA078;
extern const f32 lbl_805DA07C;
void move_along_ground_avoiding_walls__10TObjPlayerFPviff(Pl_800C7168 *self, Vec_800C7168 arg1, f32 farg0, f32 farg1);
}

extern "C" {

s32 vfunc_79__9TObjEnemyFv();

void TObjEnemyCustom::vfunc_79() {
    s16 temp_r31;

    temp_r31 = this->mode;
    vfunc_79__9TObjEnemyFv();
    this->mode = temp_r31;
}

u16 pick_random_nearby_player__10TObjPlayerFPvf(u8 *arg0, f32 radius) {
    u16 list[32];
    s32 count;
    s32 n;
    s32 i;
    f32 r2;
    u8 *p;
    r2 = radius * radius;
    count = 0;
    if (obj_testFlags30(arg0, 0x10) != 0) {
        n = lbl_805D586C + lbl_805D5870;
    } else {
        n = lbl_805D586C;
    }
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p == arg0) {
            continue;
        }
        if (p == NULL) {
            break;
        }
        if (xz_distance_squared(p + 0x2FC, arg0 + 0x2FC) < r2) {
            list[count++] = i;
            if (count >= 0x20) {
                break;
            }
        }
    }
    if (count == 0) {
        return 0xFFFF;
    }
    return list[(s32)((f32)count * calc_boss4_scale__10TObjPlayerFi(arg0))];
}

void target_nearest_player__10TObjPlayerFPvf(Plr_800C6E34 *arg0, f32 radius) {
    s32 n;
    u16 best;
    s32 i;
    f32 bestDist;
    f32 d;
    Plr_800C6E34 *p;
    bestDist = radius * radius;
    best = 0xFFFF;
    if (obj_testFlags30(arg0, 0x10) != 0) {
        n = lbl_805D586C + lbl_805D5870;
    } else {
        n = lbl_805D586C;
    }
    for (i = 0; i < n; i++) {
        p = (Plr_800C6E34 *)get_player_data__10TObjPlayerFi(i);
        if (p != arg0 && p != NULL && arg0->target != (u8 *)p) {
            d = xz_distance_squared(p->pos, arg0->pos);
            if (d < bestDist) {
                bestDist = d;
                best = i;
            }
        }
    }
    arg0->targetIdx = best;
    arg0->target = find_active_entity_by_id(arg0->targetIdx);
}
u16 find_nearest_enemy__10TObjPlayerFPvPvf(Obj_800C6EF8 *arg0, Vec_800C6EF8 *out, f32 radius) {
    Vec_800C6EF8 v;
    u16 best;
    s32 i;
    Obj_800C6EF8 *p;
    f32 bestDist;
    f32 d;
    u16 id;
    bestDist = radius * radius;
    best = 0xFFFF;
    for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
        p = ((Obj_800C6EF8 *)get_player_data__10TObjPlayerFi((int)(i)));
        if (p == NULL) {
            break;
        }
        id = obj_getField1c(p);
        if (id == arg0->id) {
            continue;
        }
        if (id < 0x1000 || id >= 0x4000) {
            continue;
        }
        if (p->flags & 0x2000800) {
            continue;
        }
        d = calc_xz_distance_sq__10TObjPlayerFiUiPv(arg0, p, &v);
        if (d < bestDist) {
            best = obj_getField1c(p);
            bestDist = d;
            if (out != NULL) {
                VecCopy__FP3VecPC3Vec(out, &v);
            }
        }
    }
    return best;
}
struct Obj_800C6EF8;
struct Vec_800C6EF8;
BOOL select_nearest_target__10TObjPlayerFPvf(Obj_800C6FFC *arg0, f32 radius) {
    s32 a;
    s32 b;
    f32 da;
    a = find_nearest_visible_player(arg0, NULL, radius);
    b = ((s32 (*)(void *, void *, f32))find_nearest_enemy__10TObjPlayerFPvPvf)(arg0, NULL, radius);
    if ((u16)a == 0xFFFF) {
        arg0->targetIdx = 0xFFFF;
    } else if ((u16)b == 0xFFFF) {
        arg0->targetIdx = a;
    } else {
        da = xz_distance_squared(arg0->pos, find_entity_by_id(a)->pos);
        arg0->targetIdx = da < xz_distance_squared(arg0->pos, find_entity_by_id(b)->pos) ? a : b;
    }
    arg0->target = find_active_entity_by_id(arg0->targetIdx);
    if (arg0->target != NULL) {
        return 1;
    }
    return 0;
}

}

#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/enemy/TObjEneMe1GiGue.h"
#include "pso/object/TObjGyaranzoMissile.h"

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual s32 m56();
};
extern "C" {
f32 xz_distance_squared(void *, void *);
extern const f32 lbl_805DA080;
}

extern "C" {

s32 get_player_by_client_id(u16);

u8 TObjEnemyCustom::find_target_in_range(f32 farg0) {
    if (obj_testFlags30(this, 0x10) != 0) {
        return ((u8 (*)(void *, f32))select_nearest_target__10TObjPlayerFPvf)(this, farg0);
    }
    *(u16 *)((s8 *)this + 0x338) = ((u16 (*)(void *, s32, f32))find_nearest_visible_player)(this, 0, farg0);
    (*(s32 *)((u8 *)this + 0x2A8)) = get_player_by_client_id(*(u16 *)((s8 *)this + 0x338));
    return (u8) ((*(s32 *)((u8 *)this + 0x2A8)) != 0);
}

void move_along_ground_avoiding_walls__10TObjPlayerFPviff(Pl_800C7168 *self, Vec_800C7168 arg1, f32 farg0, f32 farg1) {
    Vec_800C7168 a;
    Hit_800C7168 *hit;
    s32 ang;
    s32 i;
    calc_velocity_toward_destination(self, self->pos, arg1);
    VecCopy__FP3VecPC3Vec((Vec_800C6EF8 *)&self->prev, (Vec_800C6EF8 *)&self->pos);
    VecCopy__FP3VecPC3Vec((Vec_800C6EF8 *)&a, (Vec_800C6EF8 *)&self->base);
    Vec_800C7168 v = self->vel;
    Vec_800C7168 up;
    Vec_800C7168 out;
    Vec_800C7168 dir;
    Vec_800C7168 tmp;
    ((TObjGyaranzoMissile *)(&v))->scale_velocity(farg0 + farg1);
    vec3_add_to(&a, &v);
    hit = csnVector(&self->base, &a, -1);
    if (hit != NULL) {
        vec3_dot(&self->vel, hit->obj + 0xC);
        ang = (s32)(lbl_8043BCC8 * TObjPlayer::get_scale_factor());
        up.x = up.z = lbl_805DA070;
        up.y = lbl_805DA074;
        vec3_cross(&self->vel, hit->obj + 0xC, &out);
        if (lbl_805DA070 > vec3_dot(&up, &out)) {
            ang = 0x10000 - ang;
        }
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, ang);
        rotate_vector_by_matrix(0, &self->vel, &self->vel);
        pop_matrices(1);
    }
    if (lbl_805DA078 * (f32)rand() < lbl_805DA07C) {
        ang = -1;
    } else {
        ang = 1;
    }
    for (i = 0; i < 0xF; i++) {
        if (i == 0) {
            VecCopy__FP3VecPC3Vec((Vec_800C6EF8 *)&dir, (Vec_800C6EF8 *)&self->vel);
        } else {
            push_matrix_from(identity_matrix);
            rotate_matrix_y(0, ang * (i * 0x1000));
            rotate_vector_by_matrix(0, &self->vel, &dir);
            pop_matrices(1);
        }
        VecCopy__FP3VecPC3Vec((Vec_800C6EF8 *)&tmp, (Vec_800C6EF8 *)&self->pos);
        vec3_add_to(&tmp, &dir);
        if (project_actor_to_ground(self, &tmp, 0) == 1) {
            VecCopy__FP3VecPC3Vec((Vec_800C6EF8 *)&self->pos, (Vec_800C6EF8 *)&tmp);
            VecCopy__FP3VecPC3Vec((Vec_800C6EF8 *)&self->vel, (Vec_800C6EF8 *)&self->pos);
            subtract_vector(&self->vel, &self->prev);
            return;
        }
    }
}

void TObjEneBalClawBody::sub_800C73F4() {
    if (xz_distance_squared((void *) (((u8 *)this) + 0x38), (void *) (((u8 *)this) + 0x50)) > lbl_805DA080) {
        ((TObjEneMe1GiGue *)((u8 *)this))->update_if_active((int) (8));
        return;
    }
    ((VObj_18 *)(((u8 *)this)))->m56();
}

}
