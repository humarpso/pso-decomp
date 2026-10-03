#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBaseA_80090950 { char pad[0x18]; };
struct VA_80090950 : VBaseA_80090950 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual M2C_UNK m9(f32, f32, f32);
};
struct VBaseB_80090950 { char pad[0x14]; };
struct VB_80090950 : VBaseB_80090950 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

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

struct Vec_80090A70 { f32 x, y, z; };

struct Ent_80090A70 { u8 pad[0x30]; s32 flags; u8 pad34[4]; Vec_80090A70 pos; };

struct Sub_80090A70 { u8 pad[4]; f32 f4; };

struct Obj_80090A70 {
    u8 pad0[0xB8]; s16 fB8;
    u8 padBA[0x350 - 0xBA]; Sub_80090A70 *f350;
    u8 pad354[0x37C - 0x354]; s32 state;
    u8 pad380[0x3C0 - 0x380]; f32 f3C0;
    u8 pad3C4[2]; u16 f3C6;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TObjEneBalClawClaw__sub_80090798(void *);
void TObjEneBalClawClaw__sub_80090A10(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3);
s32 update_if_active__15TObjEneMe1GiGueFPv(void *, int);
extern const f32 lbl_805D9694;
void TObjEneBalClawClaw__sub_8009097C(u8 *arg0, s16 arg1);
void apply_actor_gravity(void *, s32, f32);
f32 update_enemy_wander_move(void *, Vec_80090A70 *, s32, Sub_80090A70 *, f32);
void select_enemy_destination(void *, Vec_80090A70 *, s32);
void enemy_turn_half_toward_dest(void *);
void clear_attack_flag__18TObjEneBalClawClawFPv(void *);
void clear_flag__18TObjEneBalClawClawFPv(void *arg0);
Ent_80090A70 *get_enemy_entity(u16);
void advance_animation_playback(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
extern const f32 TObjEneBalClawClaw__data_805D968C;
void TObjEneBalClawClaw__sub_80090A70(Obj_80090A70 *arg0);
}

extern "C" {

s32 check_active__18TObjEneBalClawClawFPv(void *arg0);
void clear_flag__18TObjEneBalClawClawFPv(void *arg0);
void render__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK TObjEneBalClaw__sub_8008D700(void *, M2C_UNK);
M2C_UNK draw_chunk_object(s32);
M2C_UNK restore_scene_lighting();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv();
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

void clear_flag__18TObjEneBalClawClawFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xDFFFFFFF);
    reset_active_state__18TObjEneBalClawClawFPv();
}

void TObjEneBalClawClaw__sub_8009097C(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x3C6) = arg1;
    M2C_FIELD(arg0, s16 *, 0x338) = arg1;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000000);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x3C0) = (f32) lbl_805D9694;
    update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (0xA));
    ((VObj_18_4841bb *)(arg0))->m53();
}

s32 check_active__18TObjEneBalClawClawFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    return (u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000000) >> 5;
}

extern s32 some_id_805c6f74;
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D9698;
extern const f32 lbl_805D969C;
extern const f32 lbl_805D96A0;

void TObjEneBalClawClaw__sub_80090A10(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    M2C_FIELD(arg0, s16 *, 0x33E) = arg3;
    M2C_FIELD(arg0, s16 *, 0x32C) = arg3;
    TObjEneBalClawClaw__sub_80090798(arg0);
    ((VObj_18_4841bb *)(arg0))->m53();
}

void TObjEneBalClawClaw__sub_80090A70(Obj_80090A70 *arg0) {
    Ent_80090A70 *e = get_enemy_entity(arg0->f3C6);
    if (e == NULL || (e->flags & 0x800)) {
        clear_flag__18TObjEneBalClawClawFPv(arg0);
        return;
    }
    switch (arg0->state) {
    case -1:
        break;
    case 0:
        arg0->fB8 = 1;
        clear_attack_flag__18TObjEneBalClawClawFPv(arg0);
        arg0->state = 1;
    case 1: {
        Vec_80090A70 a = e->pos;
        select_enemy_destination(arg0, &a, 1);
        Vec_80090A70 b = e->pos;
        arg0->f3C0 = update_enemy_wander_move(arg0, &b, 1, arg0->f350, arg0->f350->f4);
        enemy_turn_half_toward_dest(arg0);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, TObjEneBalClawClaw__data_805D968C);
        check_object_collisions__10TObjPlayerFPv(arg0);
        break;
    }
    }
}

void render__18TObjEneBalClawClawFPv(u8 *arg0) {
    M2C_UNK var_r30;
    s32 temp_r3;
    s32 var_r29;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        temp_r3 = ((VA_80090950 *)arg0)->m9(lbl_805D9698, lbl_805D969C, lbl_805D96A0);
        if (temp_r3 != 0) {
            var_r30 = 1;
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            TObjLight__sub_80134194(arg0);
            toggle_particle_effect__10TObjPlayerFv();
            push_matrix();
            some_id_805c6f74 &= 0xFFFFFBFF;
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
            } else {
                translate_matrix(0, TObjEneBalClawClaw__data_805D968C, M2C_FIELD(arg0, f32 *, 0x3B4) + M2C_FIELD(arg0, f32 *, 0x3BC), TObjEneBalClawClaw__data_805D968C);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
                if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
                    if (((VB_80090950 *)(arg0 + 0x390))->m8() != 0) {
                        ((VB_80090950 *)(arg0 + 0x390))->m6();
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
                        ((VB_80090950 *)(arg0 + 0x390))->m7();
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
            TObjEneBalClaw__sub_8008D700(arg0, var_r30);
        }
    }
}

}
