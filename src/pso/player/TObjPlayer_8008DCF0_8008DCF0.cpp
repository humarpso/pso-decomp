#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8008E098 {
    u8 pad0[0x1C];
    u16 field1C;
    u8 pad1E[0x28 - 0x1E];
    s16 field28;
    u8 pad2A[0x3C4 - 0x2A];
    s32 ids[5];
    s16 count;
};

struct Vec_8008E18C { f32 x, y, z; };

struct Obj_8008E18C {
    u8 pad0[0x38];
    Vec_8008E18C pos;
    u8 pad44[0x60 - 0x44];
    s32 field60;
};

typedef s32 M2C_UNK;
struct Vec_8008DD14 { f32 x, y, z; };

struct Info_8008DD14 { u8 pad0[4]; f32 f4; s32 f8; };

struct Obj_8008DD14 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x38 - 0x34];
    Vec_8008DD14 pos38;
    u8 pad44[0x50 - 0x44];
    Vec_8008DD14 home;
    u8 pad5C[0xB8 - 0x5C];
    s16 fB8;
    u8 padBA[0x290 - 0xBA];
    Vec_8008DD14 f290;
    Vec_8008DD14 f29C;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_8008DD14 pos;
    Vec_8008DD14 vel;
    u8 pad314[0x350 - 0x314];
    Info_8008DD14 *info;
    u8 pad354[0x37C - 0x354];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
};

struct Obj_8008DE9C {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xB8 - 0x34];
    s16 fB8;
    u8 padBA[0x290 - 0xBA];
    Vec_8008DD14 f290;
    Vec_8008DD14 f29C;
    Obj_8008DE9C *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_8008DD14 pos;
    Vec_8008DD14 vel;
    u8 pad314[0x350 - 0x314];
    Info_8008DD14 *info;
    u8 pad354[0x37C - 0x354];
    s32 state;
};

struct VBase_8008DE9C { char pad[0x18]; };

struct VObj_8008DE9C : VBase_8008DE9C {
    virtual s32 m0(); virtual s32 m1(); virtual s32 m2(); virtual s32 m3();
    virtual s32 m4(); virtual s32 m5(); virtual s32 m6(); virtual s32 m7();
    virtual s32 m8(); virtual s32 m9(); virtual s32 m10(); virtual s32 m11();
    virtual s32 m12(); virtual s32 m13(); virtual s32 m14(); virtual s32 m15();
    virtual s32 m16(); virtual s32 m17(s32);
};

struct Obj_8008E098;
struct P_8008E310 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xB8 - 0x44];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x2FC - 0xC4];
    u8 f2FC[0x32C - 0x2FC];
    s16 f32C;
    u8 pad32E[0x33C - 0x32E];
    s16 f33C;
    u8 pad33E[0x37C - 0x33E];
    s32 state;
    u8 pad380[4];
    s32 timer;
    u32 flags;
    u8 pad38C[0x3C4 - 0x38C];
    s32 ids[4];
    s32 f3D4;
    s16 count;
    u8 pad3DA[2];
    u32 emit1;
    u32 emit2;
};

struct E_8008E310 { u8 pad[0x3C0]; f32 f3C0; };

struct Obj_8008E18C;
struct VBase_18_4841bb { char pad[0x18]; };

struct VObj_18_4841bb : VBase_18_4841bb {
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
    virtual M2C_UNK m53();
};

struct Self_8008E934 { u8 pad[0x3C4]; s32 ids[4]; };

extern "C" {
int get_flag_0x388_b24__10TObjPlayerFPv(void *p);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
void TObjPlayer__sub_8008E708(void *self);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
void TObjEneBalClawClaw__sub_8009097C(u32, u16);
s32 check_active__18TObjEneBalClawClawFPv(void *);
s32 get_target_id__13TWindowLockOnFPv(void *);
u32 find_entity_by_id(u16);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
s32 TObjPlayer__sub_8008E098(Obj_8008E098 *self);
void vec3_add_to(Vec_8008E18C *, Vec_8008E18C *);
void matrix_mult_vec(void *, Vec_8008E18C *, Vec_8008E18C *);
void set_matrix_identity__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
extern const f32 lbl_805D9620;
extern const f32 lbl_805D962C;
extern const f32 lbl_805D9630;
void calc_slot_offset_position__10TObjPlayerFPviPvPv(Obj_8008E18C *self, s32 slot, Vec_8008E18C *out, s32 *angle_out);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK calc_velocity_toward_destination(void *, Vec_8008DD14, Vec_8008DD14, Info_8008DD14 *, f32);
s32 check_path_obstructed(void *, void *);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, s32, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int reset_enemy_state__10TObjPlayerFPv(void* p);
f32 xz_distance_squared(void *, void *);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D961C;
extern const f32 lbl_805D9620;
void TObjPlayer__sub_8008DD14(Obj_8008DD14 *self);
int get_flag_0x388_b24__10TObjPlayerFPv(void *p);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK calc_velocity_toward_destination(void *, Vec_8008DD14, Vec_8008DD14, Info_8008DD14 *, f32);
s32 check_path_obstructed(void *, void *);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, s32, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int reset_enemy_state__10TObjPlayerFPv(void* p);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK pick_open_direction__10TObjPlayerFPvPvff(void *, void *, f32, f32);
M2C_UNK subtract_vector(void *, void *);
extern const f32 lbl_805D9620;
extern const f32 lbl_805D9624;
extern const f32 lbl_805D9628;
void update_move_to_target__10TObjPlayerFPv(Obj_8008DE9C *self);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s16 obj_getS16_32C(void *);
void queue_destruction__7TObjectFv(u32);
void spawn_particle_effect(void *, s32);
u32 create_particle_emitter(void *, s32);
void copy_pos__11TNowLoadingFPvPv(u32, void *);
void clear_active_flag__13TParticleCtrlFPv(u32);
void enable__13TParticleCtrlFPv(u32);
int reset_enemy_state__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_8008E098(Obj_8008E098 *self);
int get_flag_0x388_b24__10TObjPlayerFPv(void *p);
void TObjEneBalClawClaw__sub_800907DC(void *);
void clear_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK advance_animation_playback(void *);
u32 find_entity_by_id(u16);
s32 play_sound_effect(int, void *, int, int);
extern const f32 lbl_805D9620;
extern const f32 lbl_805D9634;
extern const f32 lbl_805D9638;
void TObjPlayer__sub_8008E310(P_8008E310 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
int reset_enemy_state__10TObjPlayerFPv(void* p);
int get_flag_0x388_b24__10TObjPlayerFPv(void *p);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D9620;
void TObjPlayer__sub_8008E254(void *arg0);
void set_hp_clamped__10TObjPlayerFPvs(void *, s16);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
M2C_UNK TObjEneBalClawClaw__sub_8008DC90(void *);
void calc_slot_offset_position__10TObjPlayerFPviPvPv(Obj_8008E18C *self, s32 slot, Vec_8008E18C *out, s32 *angle_out);
void TObjPlayer__sub_80090418(void *self, s32 i);
void TObjEneBalClawClaw__sub_80090A10(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3);
void *create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
void set_param__12TObjEneLappyFPvi(void *, s32);
u8 *get_enemy_entity(u16);
extern u8 lbl_8048EEA8[];
void TObjPlayer__sub_8008E934(void *arg0_, s32 arg1);
}

extern "C" {

struct VBase18_8008e74c_8008DCF0 { char pad[0x18]; };
struct VObj18_8008e74c_8008DCF0 : VBase18_8008e74c_8008DCF0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual s32 m9(f32, f32, f32);
};
struct VObj390_8008e74c_8008DCF0 { char pad[0x14]; };
struct VObj390V_8008e74c_8008DCF0 : VObj390_8008e74c_8008DCF0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual void m7(); virtual s32 m8();
};

void draw_main__10TObjPlayerFPv(u8 *arg0);
int reset_enemy_state__10TObjPlayerFPv(void* p);
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK TObjEneBalClaw__sub_8008D700(void *, M2C_UNK);
M2C_UNK draw_chunk_object(s32);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK TObjPlayer__sub_8008ED48(void *, s16);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);

int reset_enemy_state__10TObjPlayerFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9620;
extern const f32 lbl_805D9628;
extern const f32 lbl_805D963C;
extern const f32 lbl_805D9640;

void TObjPlayer__sub_8008DD14(Obj_8008DD14 *self) {
    s16 mode;
    switch (self->state) {
    case 0:
        self->f30 &= 0xFFFBFEFF;
        mode = 6;
        if (self->f388 & 0x01000000) {
            mode = 1;
        }
        self->fB8 = mode;
        self->state = 1;
        VecCopy__FP3VecPC3Vec(&self->f29C, &self->home);
        break;
    case 1: {
        self->vel.y = lbl_805D9620;
        VecCopy__FP3VecPC3Vec(&self->f290, &self->pos);
        calc_velocity_toward_destination(self, self->f290, self->f29C, self->info, self->info->f4);
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, &self->vel);
        Vec_8008DD14 v = self->pos;
        v.x += self->vel.x;
        v.z += self->vel.z;
        if (check_path_obstructed(self, &v) == 0) {
            move_with_wall_slide(self);
        }
        if (xz_distance_squared(&self->pos38, &self->home) < lbl_805D961C) {
            reset_enemy_state__10TObjPlayerFPv(self);
        }
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, lbl_805D9620);
        break;
    }
    case -1:
        break;
    }
}

void update_move_to_target__10TObjPlayerFPv(Obj_8008DE9C *self) {
    switch (self->state) {
    case -1:
        break;
    case 0: {
        self->f30 &= ~0x100;
        self->fB8 = get_flag_0x388_b24__10TObjPlayerFPv(self) != 0 ? 1 : 6;
        Vec_8008DD14 d = self->pos;
        subtract_vector(&d, &self->target->pos);
        pick_open_direction__10TObjPlayerFPvPvff(self, &d, lbl_805D9624, lbl_805D9628);
        self->state = 1;
        break;
    }
    case 1: {
        if (self->target == NULL) {
            reset_enemy_state__10TObjPlayerFPv(self);
            break;
        }
        if (((VObj_8008DE9C *)self)->m17(0x5A) != 0) {
            Vec_8008DD14 d2 = self->pos;
            subtract_vector(&d2, &self->target->pos);
            pick_open_direction__10TObjPlayerFPvPvff(self, &d2, lbl_805D9624, lbl_805D9628);
        }
        VecCopy__FP3VecPC3Vec(&self->f290, &self->pos);
        calc_velocity_toward_destination(self, self->f290, self->f29C, self->info, self->info->f4);
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, &self->vel);
        Vec_8008DD14 v = self->pos;
        v.x += self->vel.x;
        v.z += self->vel.z;
        if (check_path_obstructed(self, &v) == 0) {
            move_with_wall_slide(self);
        }
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, lbl_805D9620);
        update_collisions__10TObjPlayerFPv(self);
        break;
    }
    }
}

s32 TObjPlayer__sub_8008E098(Obj_8008E098 *self) {
    s32 i;
    Obj_8008E098 *p;
    s32 j;
    self->count = 0;
    for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
        p = (Obj_8008E098 *)get_player_data__10TObjPlayerFi(i);
        if (p != NULL && get_target_id__13TWindowLockOnFPv(p) == 0x26 &&
            self->field28 == p->field28 && check_active__18TObjEneBalClawClawFPv(p) != 0) {
            self->ids[self->count++] = obj_getField1c(p);
            if (self->count >= 4) {
                break;
            }
        }
    }
    for (j = 0; j < self->count; j++) {
        TObjEneBalClawClaw__sub_8009097C(find_entity_by_id(self->ids[j]), self->field1C);
    }
    return self->count;
}

void calc_slot_offset_position__10TObjPlayerFPviPvPv(Obj_8008E18C *self, s32 slot, Vec_8008E18C *out, s32 *angle_out) {
    s32 angle;
    push_matrix();
    angle = (s32)(lbl_805D962C * (f32)(slot * 0x5A + 0x2D));
    *angle_out = self->field60 + angle;
    out->x = lbl_805D9620;
    out->y = lbl_805D9620;
    out->z = lbl_805D9630;
    set_matrix_identity__10TObjPlayerFPv(0);
    rotate_matrix_y((M2C_UNK)(0), (s32)(angle));
    matrix_mult_vec(0, out, out);
    vec3_add_to(out, &self->pos);
    pop_matrix();
}

void TObjPlayer__sub_8008E254(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        if (get_flag_0x388_b24__10TObjPlayerFPv(arg0) == 0) {
            reset_enemy_state__10TObjPlayerFPv(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
        TObjPlayer__sub_8008E934((void *)(arg0), (s32)(0));
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9620);
        M2C_FIELD(arg0, s16 *, 0x33C)--;
        if (M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            reset_enemy_state__10TObjPlayerFPv(arg0);
        }
        return;
    }
}

void TObjPlayer__sub_8008E310(P_8008E310 *arg0) {
    s32 all;
    s32 cnt;
    E_8008E310 *e;
    f32 lim;
    switch (arg0->state) {
    case 0:
        if (get_flag_0x388_b24__10TObjPlayerFPv(arg0) != 0) {
            reset_enemy_state__10TObjPlayerFPv(arg0);
            return;
        }
        arg0->f3D4 = 0;
        if (TObjPlayer__sub_8008E098((Obj_8008E098 *)arg0) == 0) {
            reset_enemy_state__10TObjPlayerFPv(arg0);
            return;
        }
        arg0->flags |= 1;
        arg0->flags &= ~0x04020000;
        arg0->timer = 0x258;
        arg0->state = 1;
        arg0->fB8 = 5;
        arg0->emit1 = create_particle_emitter(arg0->f2FC, 0x128);
        break;
    case 1:
        copy_pos__11TNowLoadingFPvPv(arg0->emit1, arg0->f2FC);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9620);
        all = 1;
        cnt = 0;
        lim = lbl_805D9634;
        for (s32 i = 0; i < arg0->count; i++) {
            e = (E_8008E310 *)find_entity_by_id(arg0->ids[i]);
            if (e != NULL) {
                cnt++;
                if (e->f3C0 > lim) {
                    all = 0;
                }
            } else {
                arg0->ids[i] = 0xFFFF;
            }
        }
        if (--arg0->timer <= 0 || cnt == 0) {
            arg0->flags &= ~1;
            reset_enemy_state__10TObjPlayerFPv(arg0);
            return;
        }
        if (all == 1) {
            for (s32 i = 0; i < arg0->count; i++) {
                E_8008E310 *e2 = (E_8008E310 *)find_entity_by_id(arg0->ids[i]);
                if (e2 != NULL) {
                    TObjEneBalClawClaw__sub_800907DC(e2);
                    arg0->f32C += obj_getS16_32C(e2);
                }
            }
            arg0->emit2 = create_particle_emitter(arg0->f2FC, 0x12A);
            enable__13TParticleCtrlFPv(arg0->emit2);
            arg0->fB8 = 0xB;
            arg0->flags |= 0x04000000;
            arg0->state = 2;
        }
        break;
    case 2:
        copy_pos__11TNowLoadingFPvPv(arg0->emit1, arg0->f2FC);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9620);
        if (arg0->fC0 < lbl_805D9638) {
            enable__13TParticleCtrlFPv(arg0->emit2);
        } else {
            clear_active_flag__13TParticleCtrlFPv(arg0->emit2);
            copy_pos__11TNowLoadingFPvPv(arg0->emit2, arg0->f2FC);
        }
        if (arg0->fB8 != 0xB) {
            queue_destruction__7TObjectFv(arg0->emit1);
            arg0->emit1 = 0;
            spawn_particle_effect(arg0->f2FC, 0x129);
            TObjPlayer__sub_8008E934((void *)(arg0), (s32)(1));
            advance_animation_playback(arg0);
            arg0->flags &= ~0x04000000;
            arg0->f33C = 0x1E;
            arg0->state = 3;
            play_sound_effect(0x4003AD30, arg0->pos, 0, 0);
        }
        break;
    case 3:
        copy_pos__11TNowLoadingFPvPv(arg0->emit2, arg0->f2FC);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9620);
        if (--arg0->f33C <= 0) {
            arg0->flags &= ~1;
            reset_enemy_state__10TObjPlayerFPv(arg0);
        }
        break;
    case -1:
        if (arg0->flags & 0x04000000) {
            TObjPlayer__sub_8008E934((void *)(arg0), (s32)(1));
            advance_animation_playback(arg0);
        }
        if (get_flag_0x388_b24__10TObjPlayerFPv(arg0) == 0) {
            for (s32 i = 0; i < arg0->count; i++) {
                e = (E_8008E310 *)find_entity_by_id(arg0->ids[i]);
                if (e != NULL) {
                    clear_flag__18TObjEneBalClawClawFPv(e);
                }
            }
        }
        arg0->flags |= 0x20000;
        if (arg0->emit1 != 0) {
            queue_destruction__7TObjectFv(arg0->emit1);
            arg0->emit1 = 0;
        }
        if (arg0->emit2 != 0) {
            queue_destruction__7TObjectFv(arg0->emit2);
            arg0->emit2 = 0;
        }
        break;
    }
}

void TObjPlayer__sub_8008E708(void *self) {
    update_if_active__15TObjEneMe1GiGueFPv((void*)(self), (int)(get_flag_0x388_b24__10TObjPlayerFPv(self) ? 9 : 2));
}

void draw_main__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK var_r30;
    s32 temp_r3;
    s32 var_r29;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        lbl_805D5660 = some_id_805c6f74;
        temp_r3 = ((VObj18_8008e74c_8008DCF0*)arg0)->m9(lbl_805D963C, lbl_805D9640, lbl_805D9628);
        if (temp_r3 != 0) {
            var_r30 = 1;
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            select_actor_lighting(arg0);
            toggle_particle_effect__10TObjPlayerFv();
            push_matrix();
            some_id_805c6f74 &= 0xFFFFFBFF;
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                TObjPlayer__sub_8008ED48(arg0, 4);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
            } else {
                TObjPlayer__sub_8008ED48(arg0, M2C_FIELD(arg0, s16 *, 0x3D8));
                translate_matrix(0, lbl_805D9620, M2C_FIELD(arg0, f32 *, 0x3B4) + M2C_FIELD(arg0, f32 *, 0x3BC), lbl_805D9620);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
                    if (((VObj390V_8008e74c_8008DCF0*)(arg0 + 0x390))->m8() != 0) {
                        ((VObj390V_8008e74c_8008DCF0*)(arg0 + 0x390))->m6();
                        var_r29 = 1;
                        if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                            var_r29 = 0;
                        }
                        if (var_r29 != 0) {
                            if (temp_r3 == 1) {
                                draw__16TObjEneRe7BeruraFPv(arg0);
                            } else {
                                render_world_model__10TObjPlayerFPv(arg0);
                            }
                        }
                        ((VObj390V_8008e74c_8008DCF0*)(arg0 + 0x390))->m7();
                    } else {
                        var_r30 = 0;
                    }
                } else if (temp_r3 == 1) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                } else {
                    render_world_model__10TObjPlayerFPv(arg0);
                }
            }
            pop_matrix();
            restore_scene_lighting();
            end_effect_render__13TParticleCtrlFv();
            some_id_805c6f74 = lbl_805D5660;
            TObjEneBalClaw__sub_8008D700(arg0, var_r30);
        }
    }
}
#pragma push
#pragma opt_propagation off
#define arg0 ((u8 *)arg0_)
void TObjPlayer__sub_8008E934(void *arg0_, s32 arg1) {
    Vec_8008E18C a;
    Vec_8008E18C b;
    s32 angA;
    s32 angB;
    s32 i;
    s32 id;
    s32 id2;
    s32 n;
    s32 k;
    u8 *ent;
    s32 j;
    if (arg1 == 1) {
        M2C_FIELD(arg0, u32 *, 0x388) |= 0x01000000;
        set_param__12TObjEneLappyFPvi(arg0, 0x28);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TObjPlayer__sub_80090418(arg0, 1);
        M2C_FIELD(arg0, s16 *, 0x3DA) = 0;
        ((VObj_18_4841bb *)(arg0))->m53();
    } else {
        M2C_FIELD(arg0, u32 *, 0x388) &= ~0x01000000;
        set_param__12TObjEneLappyFPvi(arg0, 0x27);
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        TObjPlayer__sub_80090418(arg0, 0);
        ((VObj_18_4841bb *)(arg0))->m53();
        if (!(M2C_FIELD(arg0, u32 *, 0x388) & 0x40000)) {
            M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x32C) / (M2C_FIELD(arg0, s16 *, 0x3D8) + 1);
            if (M2C_FIELD(arg0, s16 *, 0x32C) <= 0) {
                M2C_FIELD(arg0, s16 *, 0x32C) = 1;
            }
            M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
            if (M2C_FIELD(arg0, u32 *, 0x80) != 0) {
                M2C_FIELD(arg0, u32 *, 0x388) |= 0x40000;
                for (i = 0; i < 4; i++) {
                    id = M2C_FIELD(arg0, u16 *, 0x1C) + i;
                    id2 = M2C_FIELD(arg0, s16 *, 0x2C) + i;
                    id++;
                    id2++;
                    calc_slot_offset_position__10TObjPlayerFPviPvPv((Obj_8008E18C *)arg0, i, &a, &angA);
                    ((void *(*)(void *, u16, void *, void *, void *, void *))create__18TObjEneBalClawClawFPvPvPvPvPvPv)(arg0, id, (void *)id2, &a, (void *)angA, (void *)M2C_FIELD(arg0, s16 *, 0x32C));
                }
            }
        } else {
            n = 0;
            for (k = 0; k < M2C_FIELD(arg0, s16 *, 0x3D8); k++) {
                ent = get_enemy_entity(((Self_8008E934 *)arg0)->ids[k]);
                if (ent != NULL) {
                    calc_slot_offset_position__10TObjPlayerFPviPvPv((Obj_8008E18C *)arg0, k, &b, &angB);
                    TObjEneBalClawClaw__sub_80090A10(ent, (u8 *)&b, angB, M2C_FIELD(arg0, s16 *, 0x32C));
                    n++;
                }
            }
            if (n > 0) {
                M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x32C) / (n + 1);
                for (j = 0; j < M2C_FIELD(arg0, s16 *, 0x3D8); j++) {
                    if ((ent = get_enemy_entity(((Self_8008E934 *)arg0)->ids[j])) != NULL) {
                        set_hp_clamped__10TObjPlayerFPvs(ent, M2C_FIELD(arg0, s16 *, 0x32C));
                    }
                }
            }
        }
        M2C_FIELD(arg0, s16 *, 0x3D8) = 0;
    }
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, u8 **, 0x350) = lbl_8048EEA8 + arg1 * 0x1C;
    TObjEneBalClawClaw__sub_8008DC90(arg0);
    M2C_FIELD(arg0, s32 *, 0x368) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
}
#undef arg0
#pragma pop

}
