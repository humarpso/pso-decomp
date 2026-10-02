#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800D4668_lbl_80494400 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800D4668_lbl_8049442C {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_800D4668_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_800D4BD0_lbl_80494468 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_800D4BD0_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

typedef struct Parm_800D47B4 {
    s32 a;
    f32 b;
} Parm_800D47B4;

struct Base_800D47B4 {
    char pad[0x18];
};

struct Obj_800D47B4 : Base_800D47B4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(void *, Parm_800D47B4, s32, s32, s32);
};

typedef struct Col_800D47B4 {
    u8 pad0[0xC];
    f32 fC;
    u8 pad10[0x18 - 0x10];
    u32 flags;
} Col_800D47B4;

typedef struct Missile_800D47B4 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xA4 - 0x44];
    Col_800D47B4 *col;
    u8 padA8[0xD8 - 0xA8];
    u16 ownerIdx;
} Missile_800D47B4;

struct Missile_800D47B4;
struct Vec_800D4990 { f32 x, y, z; };

struct Target_800D4990 {
    u8 pad[0x2FC];
    Vec_800D4990 pos;
};

struct Col_800D4990 { u8 pad[0x18]; u32 flags; };

struct Gyr_800D4990 {
    u8 pad0[0x38];
    Vec_800D4990 pos;
    Vec_800D4990 prev;
    u8 pad50[0x5C - 0x50];
    u8 x5C[4];
    u8 x60[0xA4 - 0x60];
    Col_800D4990 *col;
    u8 padA8[0xAC - 0xA8];
    Vec_800D4990 vel;
    u8 padB8[0xC4 - 0xB8];
    u16 target;
    u16 padC6;
    s32 timer;
    s32 xCC;
    s32 xD0;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, int);
s32 rotate_vector_by_matrix(int, int, int);
M2C_UNK rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
M2C_UNK pop_matrix();
extern RecoveredGlobal_800D4668_lbl_80494400 lbl_80494400;
extern M2C_UNK lbl_8049442C[];
extern RecoveredGlobal_800D4668_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D51FC;
extern s32 tl_04;
extern const f32 lbl_805DA2A4;
extern const f32 lbl_805DA2A8;
extern const f32 lbl_805DA2B4;
extern const f32 lbl_805DA2B8;
u8 *TObjGyaranzoMissile__sub_800D4668(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, int);
s32 rand();
s32 TCameraCtrl__sub_803D8934(int, int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
s32 push_matrix_from(void *);
M2C_UNK pop_matrix();
extern RecoveredGlobal_800D4BD0_lbl_80494468 lbl_80494468;
extern M2C_UNK __vt__19TObjGyaranzoMissile[];
extern RecoveredGlobal_800D4668_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D2A80;
extern f32 TObjGyaranzoMissile__data_805D51F4;
extern s32 tl_04;
extern const f32 lbl_805DA2C4;
extern const f32 lbl_805DA2CC;
extern const f32 lbl_805DA2D0;
extern const f32 lbl_805DA2D4;
extern const f32 lbl_805DA2D8;
extern const f32 lbl_805DA2DC;
extern const f32 lbl_805DA2E0;
u8 *TObjGyaranzoMissile__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3);
void queue_destruction__7TObjectFv(void *);
Obj_800D47B4 *get_battle_param__10TObjPlayerFi(s32);
s32 spawn_particle_effect(void *, int);
s32 TObjGyaranzoMissile__sub_800D40FC(int);
s32 TObjPlayer__sub_800F06B4(int, int);
void *find_entity_by_id(u16);
void init_all_slots__10TObjPlayerFv(void *);
void check_enemy_body_collisions(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
s32 is_valid_and_active__10TObjPlayerFUi(void *);
extern Parm_800D47B4 lbl_8043C464[];
extern const f32 lbl_805DA2C0;
void TObjGyaranzoMissile__sub_800D47B4(Missile_800D47B4 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnVector(void *, void *, int);
void TObjGyaranzoMissile__sub_800D47B4(Missile_800D47B4 *arg0);
Target_800D4990 *find_active_entity_by_id(u16);
int scale_velocity__19TObjGyaranzoMissileFPvf(void *, f32);
int TObjPlayer__sub_801422A8(void *, void *, void *);
void check_enemy_body_collisions(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
s32 project_actor_to_ground(void *, void *, int);
int TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
int TBoss6Type1__sub_803D9370(void *, void *);
extern f32 TObjGyaranzoMissile__data_805D51F4;
extern const f32 lbl_805D51F8;
extern s32 lbl_805D520C;
extern const f32 lbl_805DA2C8;
void run_task__19TObjGyaranzoMissileFv(Gyr_800D4990 *self);
}

extern "C" {

void *__dt__19TObjGyaranzoMissileFv(void *arg0, s16 arg1);
void *destroy__19TObjGyaranzoMissileFPvs(void *arg0, s16 arg1);
void render__19TObjGyaranzoMissileFv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK rotate_matrix_x(int, int);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK get_bml_model(void *, int);
M2C_UNK draw_chunk_object();
void TObjPlayer__sub_80154A00(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
M2C_UNK set_global_param__8TObjFishFi();

extern M2C_UNK lbl_8049442C[];

void *destroy__19TObjGyaranzoMissileFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049442C;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D51FC;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA2C4;

typedef char RecoveredGlobal_800D4668_lbl_80494400_size[sizeof(RecoveredGlobal_800D4668_lbl_80494400) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800D4668_lbl_8049442C_size[sizeof(RecoveredGlobal_800D4668_lbl_8049442C) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_800D4668_lbl_8058D490_size[sizeof(RecoveredGlobal_800D4668_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TObjGyaranzoMissile__sub_800D4668(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0), (int) (tl_04));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800D4668_lbl_8049442C *)&lbl_8049442C).value;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xE0), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) (M2C_FIELD(arg0, f32 *, 0xE4) + lbl_805DA2A8);
    M2C_FIELD(arg0, s32 *, 0xDC) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D51FC), u8 **, 0x42C), s32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D51FC), u8 **, 0x42C), s32 *, 0x5C);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, u16 *, 0xD8) = obj_getField1c((void *) (arg1));
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (arg3 + 0x8000);
    M2C_FIELD(arg0, s32 *, 0xC0) = -0x4000;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    push_matrix_from((void *) (&lbl_8058D490.value));
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805DA2A4;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DA2A4;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DA2B4;
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xBC)));
    temp_r4 = (u8 *)(arg0 + 0xAC);
    rotate_vector_by_matrix((int) (0), (int) (temp_r4), (int) (temp_r4));
    pop_matrix();
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) lbl_805DA2A4;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_80494400.value), (int) (1));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DA2B8;
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xEC) = 0xF;
    return arg0;
}

void TObjGyaranzoMissile__sub_800D47B4(Missile_800D47B4 *arg0) {
    void *owner;
    s32 i;
    Obj_800D47B4 *q;
    owner = find_entity_by_id(arg0->ownerIdx);
    arg0->col->fC = lbl_805DA2C0;
    init_all_slots__10TObjPlayerFv(owner);
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    if (arg0->col->flags & 0x180000) {
        for (i = 0; i < 0x10; i++) {
            q = get_battle_param__10TObjPlayerFi(i);
            if (q == NULL) {
                break;
            }
            if (is_valid_and_active__10TObjPlayerFUi(q) != 0) {
                Parm_800D47B4 parm = lbl_8043C464[0];
                parm.b = TObjGyaranzoMissile__sub_800D40FC(2);
                q->v21(owner, parm, 0, -1, -1);
            }
        }
    }
    spawn_particle_effect(arg0->pos, 0xFB);
    TBoss3Volopt__sub_8022675C((void *)TObjPlayer__sub_800F06B4(0x4003A80C, 0x19), arg0->pos, 0, 0);
    queue_destruction__7TObjectFv(arg0);
}

void render__19TObjGyaranzoMissileFv(u8 *arg0) {
    TObjFish__sub_8001EDB0((void *) (lbl_805D51FC), (int) (6));
    set_global_param__8TObjFishFi();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    translate_matrix((int) (0), (f32) (lbl_805DA2C4), (f32) (M2C_FIELD(arg0, f32 *, 0xD4) * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0xCC)))), (f32) (lbl_805DA2C4));
    some_id_805c6f74 &= 0xFFFFFBFF;
    get_bml_model((void *) (lbl_805D51FC), (int) (6));
    draw_chunk_object();
    pop_matrix();
}

extern M2C_UNK __vt__19TObjGyaranzoMissile[];

void run_task__19TObjGyaranzoMissileFv(Gyr_800D4990 *self) {
    Target_800D4990 *t;
    f32 dist;
    t = find_active_entity_by_id(self->target);
    if (t != NULL) {
        Vec_800D4990 d = t->pos;
        TBoss6Type1__sub_803D9370(&d, &self->pos);
        dist = TBoss6Kakusan__sub_803D8BD8(&d);
        if (self->timer >= 15 && dist > lbl_805D51F8) {
            scale_velocity__19TObjGyaranzoMissileFPvf(&d, lbl_805D51F8);
            TBoss4Zako__sub_803D8910(&self->vel, &d);
            scale_velocity__19TObjGyaranzoMissileFPvf(&self->vel, TObjGyaranzoMissile__data_805D51F4);
        }
    }
    VecCopy__FP3VecPC3Vec(&self->prev, &self->pos);
    TBoss4Zako__sub_803D8910(&self->pos, &self->vel);
    TObjPlayer__sub_801422A8(&self->vel, self->x5C, self->x60);
    self->xCC += self->xD0;
    if (self->timer >= 10) {
        if (csnVector(&self->prev, &self->pos, -1) != 0) {
            TObjGyaranzoMissile__sub_800D47B4((Missile_800D47B4 *)self);
            return;
        }
        Vec_800D4990 p = self->pos;
        if (project_actor_to_ground(self, &p, 0) == 1) {
            if (self->pos.y - p.y < lbl_805DA2C8) {
                self->col->flags |= 2;
                self->col->flags &= ~4;
                check_object_collisions__10TObjPlayerFPv(self);
                check_enemy_body_collisions(self);
                if (self->col->flags & 0x180000) {
                    TObjGyaranzoMissile__sub_800D47B4((Missile_800D47B4 *)self);
                    return;
                }
            } else {
                self->col->flags &= ~2;
                self->col->flags |= 4;
            }
        }
    }
    self->timer++;
    if (self->timer > lbl_805D520C) {
        TObjGyaranzoMissile__sub_800D47B4((Missile_800D47B4 *)self);
    }
}

void *__dt__19TObjGyaranzoMissileFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjGyaranzoMissile;
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800D4BD0_lbl_80494468_size[sizeof(RecoveredGlobal_800D4BD0_lbl_80494468) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile_size[sizeof(RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_800D4BD0_lbl_8058D490_size[sizeof(RecoveredGlobal_800D4BD0_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TObjGyaranzoMissile__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3) {
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0), (int) (tl_04));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile *)&__vt__19TObjGyaranzoMissile).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A80;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_80494468.value), (int) (1));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DA2CC;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((int) (M2C_FIELD(arg2, s32 *, 0))));
    M2C_FIELD(arg0, s16 *, 0xC4) = arg3;
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (lbl_805DA2D0 * (lbl_805DA2D4 * (lbl_805DA2D8 * (f32) rand())));
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg2, f32 *, 0xC) * (lbl_805DA2DC * ((lbl_805DA2D8 * (f32) rand()) + lbl_805DA2E0)));
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, u16 *, 0xD8) = obj_getField1c((void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805DA2C4;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DA2C4;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjGyaranzoMissile__data_805D51F4;
    push_matrix_from((void *) (&(*(RecoveredGlobal_800D4BD0_lbl_8058D490 *)&lbl_8058D490).value));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    temp_r4 = (u8 *)(arg0 + 0xAC);
    TCameraCtrl__sub_803D8934((int) (0), (int) (temp_r4), (int) (temp_r4));
    pop_matrix();
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    return arg0;
}
#pragma pop

}
