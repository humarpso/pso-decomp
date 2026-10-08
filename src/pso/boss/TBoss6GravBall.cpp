#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct P_80323348 { u8 pad[0x30]; u32 flags; };

struct Vec_803236F8 { f32 x, y, z; };

struct Obj_803236F8 { u8 pad[0xC8]; Vec_803236F8 pos; };

struct Vec_803237A0 { f32 x, y, z; };

struct Obj_803237A0 { u8 pad[0xC8]; Vec_803237A0 pos; };

typedef s32 M2C_UNK;
struct Vec_803233AC { f32 x, y, z; };

struct PL_803233AC { u8 pad[0x30]; u32 flags; u8 pad34[4]; Vec_803233AC pos; };

struct Vec_80323544 { f32 x, y, z; };

struct PL_80323544 { u8 pad[0x30]; u32 flags; u8 pad34[4]; Vec_80323544 pos; };

extern "C" {
P_80323348 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_state_1f__14TBoss6PlotFalzFUi();
void clear_player_grav_flags__14TBoss6GravBallFv(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
extern u8 lbl_80476684[];
extern const f32 TBoss6GravBall__data_805DF550;
extern const f32 lbl_805DF570;
void TBoss6GravBall__sub_803236F8(Obj_803236F8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 project_actor_to_ground(void *, void *, int);
extern const f32 TBoss6GravBall__data_805DF558;
extern const f32 lbl_805DF574;
s32 clamp_to_ground__14TBoss6GravBallFPv(Obj_803237A0 *arg0);
P_80323348 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
s32 project_actor_to_ground(void *, void *, int);
int destroy_part__14TBoss6GravBallFii(void*, void*);
M2C_UNK create_emitter__14TBoss6GravBallFii(void *, int);
u16 obj_getField1c(void *);
s32 is_active__14TBoss6PlotFalzFPv(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(void *, void *);
void TBoss6PlotFalz__sub_802AC724(void *, void *);
extern const f32 TBoss6GravBall__data_805DF550;
extern const f32 lbl_805DF554;
extern const f32 TBoss6GravBall__data_805DF558;
extern const f32 lbl_805DF55C;
extern const f32 lbl_805DF560;
void TBoss6GravBall__sub_803233AC(u8 *self);
P_80323348 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
s32 project_actor_to_ground(void *, void *, int);
int destroy_part__14TBoss6GravBallFii(void*, void*);
M2C_UNK create_emitter__14TBoss6GravBallFii(void *, int);
u16 obj_getField1c(void *);
s32 is_active__14TBoss6PlotFalzFPv(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(void *, void *);
void TBoss6PlotFalz__sub_802AC724(void *, void *);
extern const f32 TBoss6GravBall__data_805DF550;
extern const f32 TBoss6GravBall__data_805DF558;
extern const f32 lbl_805DF55C;
extern const f32 lbl_805DF564;
extern const f32 lbl_805DF568;
extern const f32 lbl_805DF56C;
void TBoss6GravBall__sub_80323544(u8 *self);
}

extern "C" {

void update_lifetime__14TBoss6GravBallFPv(void *arg0);
int destroy_part__14TBoss6GravBallFii(void*, void*);
void init_parts__14TBoss6GravBallFPv(void* p);
void render__14TBoss6GravBallFv(void);

void clear_player_grav_flags__14TBoss6GravBallFv(void) {
    s32 n = get_game_mode__6TLobbyFv();
    s32 i;
    for (i = 0; i < n; i++) {
        P_80323348 *p = get_player_data__10TObjPlayerFi(i);
        if (is_state_1f__14TBoss6PlotFalzFUi() != 0) {
            p->flags &= 0xFFFDFFFF;
        }
    }
}

#pragma push
#pragma fp_contract on
void TBoss6GravBall__sub_803233AC(u8 *self) {
    Vec_803233AC v;
    s32 n;
    s32 i;
    PL_803233AC *pl;
    s32 id;
    s32 flag;
    f32 d;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        pl = (PL_803233AC *)get_player_data__10TObjPlayerFi(i);
        id = obj_getField1c(pl) + 5;
        if (is_active__14TBoss6PlotFalzFPv(pl) == 0) {
            destroy_part__14TBoss6GravBallFii(self, (void *)id);
            continue;
        }
        flag = 0;
        VecCopy__FP3VecPC3Vec(&v, self + 0xC8);
        subtract_vector(&v, &pl->pos);
        v.y = TBoss6GravBall__data_805DF550;
        d = vector_length(&v);
        if (d > lbl_805DF554) {
            destroy_part__14TBoss6GravBallFii(self, (void *)id);
            continue;
        }
        if (d <= TBoss6GravBall__data_805DF558) {
            s32 a = obj_getField1c(pl) << 14;
            v.x = lbl_805DF55C * sin_table_lookup(a) + v.x;
            v.z = lbl_805DF55C * cos_table_lookup(a) + v.z;
            flag = 1;
        } else {
            f32 s = lbl_805DF560 + d;
            normalize_vector(&v);
            v.x *= s;
            v.z *= s;
        }
        vec3_add_to(&v, &pl->pos);
        project_actor_to_ground(self, &v, 0);
        TBoss6PlotFalz__sub_802AC724(pl, &v);
        if (flag != 0) {
            pl->flags |= 0x20000;
            create_emitter__14TBoss6GravBallFii(self, id);
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void TBoss6GravBall__sub_80323544(u8 *self) {
    Vec_80323544 v;
    s32 n;
    s32 i;
    PL_80323544 *pl;
    s32 id;
    s32 flag;
    f32 d;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        pl = (PL_80323544 *)get_player_data__10TObjPlayerFi(i);
        id = obj_getField1c(pl) + 5;
        if (is_active__14TBoss6PlotFalzFPv(pl) == 0) {
            destroy_part__14TBoss6GravBallFii(self, (void *)id);
            continue;
        }
        flag = 1;
        VecCopy__FP3VecPC3Vec(&v, self + 0xC8);
        {
            s32 a = obj_getField1c(pl) << 14;
            v.x = lbl_805DF55C * sin_table_lookup(a) + v.x;
            v.z = lbl_805DF55C * cos_table_lookup(a) + v.z;
        }
        subtract_vector(&v, &pl->pos);
        v.y = TBoss6GravBall__data_805DF550;
        d = vector_length(&v);
        if (d > TBoss6GravBall__data_805DF558) {
            f32 s;
            if (*(u32 *)(self + 0xC0) & 1) {
                destroy_part__14TBoss6GravBallFii(self, (void *)id);
                continue;
            }
            s = lbl_805DF564 * (*(f32 *)(self + 0xBC) * (lbl_805DF568 - d / lbl_805DF56C));
            if (s < lbl_805DF568) {
                s = lbl_805DF568;
            }
            normalize_vector(&v);
            flag = 0;
            v.x *= s;
            v.z *= s;
        }
        vec3_add_to(&v, &pl->pos);
        project_actor_to_ground(self, &v, 0);
        TBoss6PlotFalz__sub_802AC724(pl, &v);
        if (flag != 0) {
            pl->flags |= 0x20000;
            create_emitter__14TBoss6GravBallFii(self, id);
        }
    }
}
#pragma pop

void TBoss6GravBall__sub_803236F8(Obj_803236F8 *arg0) {
    Vec_803236F8 v = arg0->pos;
    v.y = TBoss6GravBall__data_805DF550;
    if (vector_length(&v) > lbl_805DF570) {
        normalize_vector(&v);
        v.x = v.x * lbl_805DF570;
        v.z = v.z * lbl_805DF570;
        subtract_vector(&arg0->pos, &v);
    } else {
        VecCopy__FP3VecPC3Vec(&arg0->pos, lbl_80476684);
    }
    clamp_to_ground__14TBoss6GravBallFPv((Obj_803237A0 *)(arg0));
}

s32 clamp_to_ground__14TBoss6GravBallFPv(Obj_803237A0 *arg0) {
    Vec_803237A0 v = arg0->pos;
    if (project_actor_to_ground(arg0, &v, 0) == 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return 1;
    }
    v.y = v.y + TBoss6GravBall__data_805DF558;
    arg0->pos.y = arg0->pos.y + lbl_805DF574;
    if (arg0->pos.y < v.y) {
        arg0->pos.y = v.y;
        return 1;
    }
    return 0;
}

void update_lifetime__14TBoss6GravBallFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4) + 1;
    M2C_FIELD(arg0, s32 *, 0xB4) = temp_r0;
    if (temp_r0 > 0x1E) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

}
