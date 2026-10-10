#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <dolphin/mtx.h>
#include <stddef.h>

struct D_800D40FC { u8 pad[0x18]; s32 arr[1]; };

struct Hit_800D4200 { s32 a; f32 b; };

struct VBase_18_e08757 { char pad[0x18]; };

struct VObj_18_e08757 : VBase_18_e08757 {
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
    virtual M2C_UNK m21(void *, Hit_800D4200 *, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Info_800D4200 { u8 pad[0xc]; f32 xc; u8 pad10[8]; s32 flags; };

typedef s32 M2C_UNK;
struct Info_800D43B4 { u8 pad[0x18]; u32 flags; };

struct Missile_800D43B4 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x38 - 0x34];
    Vec pos;
    u8 pad44[0xA4 - 0x44];
    Info_800D43B4 *info;
    u8 padA8[0xAC - 0xA8];
    Vec vel;
    u8 padB8[0xBC - 0xB8];
    s32 angle;
    s32 fC0;
    u8 padC4[0xCC - 0xC4];
    s32 state;
    s32 timer;
    f32 fD4;
    u8 padD8[0xDC - 0xD8];
    s32 spin;
    Vec fE0;
    s32 fEC;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 project_actor_to_ground(void *, void *, int);
extern const f32 lbl_805DA2A0;
extern const f32 lbl_805DA2A4;
void update_ground_fall__19TObjGyaranzoMissileFPvPvf(u8 *arg0, M2C_UNK *arg1, f32 farg0);
extern s32 gyaranzo_missile_param_table;
f32 TObjGyaranzoMissile__sub_800D40EC(s32 arg0);
extern s32 gyaranzo_missile_param_table;
s32 TObjGyaranzoMissile__sub_800D40FC(s32 i);
s32 obj_is_hit_receivable();
M2C_UNK queue_destruction__7TObjectFv(void *);
u8 *get_battle_param__10TObjPlayerFi(s32);
M2C_UNK spawn_particle_effect(void *, int);
s32 TObjGyaranzoMissile__sub_800D40FC(s32 i);
M2C_UNK remap_area_sound_id(int, int);
u8 *find_entity_by_id(u16);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(void *, void *, int, int);
extern Hit_800D4200 lbl_8043C440[];
extern const f32 lbl_805DA2A8;
void TObjGyaranzoMissile__sub_800D4200(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void update_ground_fall__19TObjGyaranzoMissileFPvPvf(u8 *arg0, M2C_UNK *arg1, f32 farg0);
void TObjGyaranzoMissile__sub_800D4200(u8 *arg0);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK pop_matrix();
void push_matrix_from(void *);
void rotate_vector_by_matrix(int, void *, void *);
u32 csnVector(void *, void *, int);
void update_collisions__10TObjPlayerFPv(void *);
extern u8 identity_matrix[];
extern const f32 lbl_805DA2A4;
extern const f32 lbl_805DA2A8;
extern const f32 lbl_805DA2AC;
extern const f32 lbl_805DA2B0;
void update_flight__19TObjGyaranzoMissileFPv(Missile_800D43B4 *self);
}

extern "C" {

void TObjGyaranzoMissile__sub_800D40D8(void);
void TObjGyaranzoMissile__sub_800D40DC(void);
int TObjGyaranzoMissile__sub_800D40E0(void);
void TObjGyaranzoMissile__sub_800D40E8(void);
void draw__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);

void TObjGyaranzoMissile__sub_800D40D8(void) {  }
void TObjGyaranzoMissile__sub_800D40DC(void) {  }
int TObjGyaranzoMissile__sub_800D40E0(void) { return 0; }
void TObjGyaranzoMissile__sub_800D40E8(void) {  }

extern s32 some_id_805c6f74;

f32 TObjGyaranzoMissile__sub_800D40EC(s32 arg0) {
    return M2C_FIELD((gyaranzo_missile_param_table + (arg0 * 4)), f32 *, 0);
}

s32 TObjGyaranzoMissile__sub_800D40FC(s32 i) {
    return (*(D_800D40FC * *)&gyaranzo_missile_param_table)->arr[i];
}

void update_ground_fall__19TObjGyaranzoMissileFPvPvf(u8 *arg0, M2C_UNK *arg1, f32 farg0) {
    Vec position;
    f32 temp_f1;
    s32 temp_r31;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    temp_r31 = project_actor_to_ground((void *) (arg0), (void *) (&position.x), (int) (0));
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&position.x));
    }
    if (temp_r31 == 1) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + lbl_805DA2A0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0xB0));
        temp_f1 = position.y + farg0;
        position.y = temp_f1;
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x3C) = temp_f1;
            M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DA2A4;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
}

void TObjGyaranzoMissile__sub_800D4200(u8 *arg0) {
    u8 *self;
    s32 i;
    u8 *t;
    self = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xD8));
    M2C_FIELD(arg0, Info_800D4200 **, 0xA4)->xc = lbl_805DA2A8;
    init_all_slots__10TObjPlayerFv();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    if (M2C_FIELD(arg0, Info_800D4200 **, 0xA4)->flags & 0x180000) {
        for (i = 0; i < 0x10; i++) {
            t = get_battle_param__10TObjPlayerFi(i);
            if (t == NULL) {
                break;
            }
            if (obj_is_hit_receivable() != 0 && t != self) {
                Hit_800D4200 tmp = lbl_8043C440[0];
                tmp.b = TObjGyaranzoMissile__sub_800D40FC(3);
                {
                    Hit_800D4200 h = tmp;
                    ((VObj_18_e08757 *)(t))->m21(self, &h, 0, -1, -1);
                }
            }
        }
    }
    spawn_particle_effect(arg0 + 0x38, 0xFB);
    play_sound_effect((void *)remap_area_sound_id(0x4003A80C, 0x19), arg0 + 0x38, 0, 0);
    queue_destruction__7TObjectFv(arg0);
}

void draw__19TObjGyaranzoMissileFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
    push_matrix();
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xBC));
    rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0xC0));
    some_id_805c6f74 &= 0xFFFFFBFF;
    draw_chunk_object(M2C_FIELD(arg0, s32 *, 0xC4));
    pop_matrix();
}
void update_flight__19TObjGyaranzoMissileFPv(Missile_800D43B4 *self) {
    self->timer++;
    switch (self->state) {
    case 0:
        self->fC0 += 0x200;
        if (self->fC0 >= 0) {
            self->fC0 = 0;
        }
        self->pos.x += self->vel.x;
        self->pos.z += self->vel.z;
        update_ground_fall__19TObjGyaranzoMissileFPvPvf((u8 *)self, NULL, lbl_805DA2A4);
        if (self->flags & 0x800000) {
            push_matrix_from(identity_matrix);
            self->vel.x = lbl_805DA2A4;
            self->vel.y = lbl_805DA2A4;
            self->vel.z = lbl_805DA2AC;
            self->angle += self->spin;
            rotate_matrix_y(0, self->angle);
            rotate_vector_by_matrix(0, &self->vel, &self->vel);
            pop_matrix();
            self->fC0 = 0;
            spawn_particle_effect(&self->pos, 0xF3);
            self->state = 1;
        }
        break;
    case 1: {
        Vec v = self->fE0;
        v.x += self->vel.x;
        v.z += self->vel.z;
        if (csnVector(&self->fE0, &v, -1) == 0) {
            self->pos.x = v.x;
            self->pos.z = v.z;
        } else {
            self->state = 2;
        }
        update_ground_fall__19TObjGyaranzoMissileFPvPvf((u8 *)self, NULL, lbl_805DA2A4);
        if (self->fEC > 0) {
            self->fEC--;
        } else {
            update_collisions__10TObjPlayerFPv(self);
            if (self->info->flags & 0x380000) {
                TObjGyaranzoMissile__sub_800D4200((u8 *)self);
                break;
            }
        }
        self->fD4 += lbl_805DA2AC;
        if (self->fD4 >= lbl_805DA2B0) {
            self->state = 2;
        }
        break;
    }
    case 2:
        update_ground_fall__19TObjGyaranzoMissileFPvPvf((u8 *)self, NULL, lbl_805DA2A4);
        break;
    }
    VecCopy__FP3VecPC3Vec(&self->fE0, &self->pos);
    self->fE0.y += lbl_805DA2A8;
    if (self->timer >= 0x96) {
        TObjGyaranzoMissile__sub_800D4200((u8 *)self);
    }
}

}
