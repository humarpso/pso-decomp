#include "types.h"

#include <stddef.h>
struct Stack_8009048C {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_8009048C_lbl_80439B8C {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8009048C_lbl_8048F11C {
    s32 value;
    u8 remaining[0x28];
};

extern "C" {
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern RecoveredGlobal_8009048C_lbl_80439B8C lbl_80439B8C;
extern void *TObjEneBalClawClaw__collision_body_template[11];
extern u8 *lbl_805D4F20;
void spawn_lobby_npc_enemy(void);
}

extern "C" {

typedef char RecoveredGlobal_8009048C_lbl_80439B8C_size[sizeof(RecoveredGlobal_8009048C_lbl_80439B8C) == 0x14 ? 1 : -1];

void spawn_lobby_npc_enemy(void) {
    typedef char sp8_offset[(offsetof(Stack_8009048C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8009048C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8009048C, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8009048C, sp14) == 0xC) ? 1 : -1];
    Stack_8009048C stack;
    u8 *temp_r5;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_80439B8C.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_80439B8C.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_80439B8C.value) + 8);
    stack.sp14 = *(s32 *)((s8 *)(&lbl_80439B8C.value) + 0xC);
    stack.sp8 = *(s32 *)((s8 *)lbl_805D4F20 + 0x430);
    temp_r5 = (u8 *)(*(u8 **)((s8 *)lbl_805D4F20 + 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x14), (int) (*(s32 *)((s8 *)temp_r5 + 0x28)), (int) (*(s32 *)((s8 *)temp_r5 + 0x2C)), (void *) (&stack.sp8), (f32) (*(f32 *)((s8 *)((s32 *)TObjEneBalClawClaw__collision_body_template) + 0xC)), (f32) ((15.0f)));
}

}

#include "types.h"

#include <stddef.h>
struct VBase_14_0d3ae4 { char pad[0x14]; };

struct VObj_14_0d3ae4 : VBase_14_0d3ae4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual s32 m3();
    virtual void m4();
    virtual s32 m5();
};

struct RecoveredFields_8009060C_arg0 {
    u8 unknown_0[0x37C];
    s32 field_37C;
    u8 unknown_380[0x8];
    s32 field_388;
};

struct VBase_800906C8 { char pad[0x14]; };

struct VObj_800906C8 : VBase_800906C8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct Claw_800906C8 {
    u8 pad0[0xB8];
    s16 fieldB8;
    u8 padBA[0x37C - 0xBA];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 flags;
    u8 pad38C[0x390 - 0x38C];
    VObj_800906C8 motion;
};

struct Vec_80090850 { f32 x, y, z; };

struct Params_80090850 { u8 pad0[4]; f32 speed; s32 angle; };

struct Claw_80090850 {
    u8 pad0[0x30];
    u32 flags30;
    u8 pad34[0x50 - 0x34];
    Vec_80090850 pos;
    u8 pad5C[0xB8 - 0x5C];
    s16 fieldB8;
    u8 padBA[0x290 - 0xBA];
    Vec_80090850 target;
    Vec_80090850 home;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_80090850 field2FC;
    s32 field308;
    f32 field30C;
    u8 pad310[0x350 - 0x310];
    Params_80090850 *params;
    u8 pad354[0x37C - 0x354];
    s32 state;
};

struct Vec_80090504 { f32 x, y, z; };

extern "C" {
void obj_clearFlags30(void *, u32);
void TObjEneBalClawClaw__sub_80090798(u8 *arg0);
void obj_setFlags30(void *, u32);
void set_claw_flags__18TObjEneBalClawClawFPv(u8 *arg0);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
void run_active_state__18TObjEneBalClawClawFPv(u8 *arg0);
void apply_actor_gravity(void *, int, f32);
void advance_animation_playback(void *);
void update_drop__18TObjEneBalClawClawFPv(Claw_800906C8 *self);
s32 move_with_wall_slide(void *);
void calc_velocity_toward_destination(void *self, Vec_80090850 pos, Vec_80090850 dest, f32 speed);
void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
void VecCopy__FP3VecPC3Vec(void *, const void *);
void update_move_to_target__18TObjEneBalClawClawFPv(Claw_80090850 *self);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
void move_along_ground_avoiding_walls__10TObjPlayerFPviff(void *, Vec_80090504, void *, f32, f32);
s32 update_collisions__10TObjPlayerFPv(void *);
void update_chase_state__18TObjEneBalClawClawFPv(u8 *arg0);
}

extern "C" {

void TObjEneBalClawClaw__sub_80090824(void);
void TObjEneBalClawClaw__sub_80090828(void);

typedef char RecoveredFields_8009060C_arg0_37C_offset[offsetof(RecoveredFields_8009060C_arg0, field_37C) == 0x37C ? 1 : -1];
typedef char RecoveredFields_8009060C_arg0_388_offset[offsetof(RecoveredFields_8009060C_arg0, field_388) == 0x388 ? 1 : -1];

void update_chase_state__18TObjEneBalClawClawFPv(u8 *arg0) {
    u8 *temp_r5;
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case -1:
        break;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x30) &= ~0x100;
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        *(s16 *)((s8 *)arg0 + 0x3C8) = 0x78;
        break;
    case 1:
        if (*(void **)((s8 *)arg0 + 0x2A8) == NULL || --*(s16 *)((s8 *)arg0 + 0x3C8) <= 0) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
            break;
        }
        *(f32 *)((s8 *)arg0 + 0x30C) = (0.0f);
        move_along_ground_avoiding_walls__10TObjPlayerFPviff(arg0, *(Vec_80090504 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2A8)) + 0x2FC), *(u8 **)((s8 *)arg0 + 0xA4), (-0.6f), *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0xC));
        update_angle__10TObjPlayerFPviPv(arg0, *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x350)) + 8), arg0 + 0x308);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, (0.0f));
        update_collisions__10TObjPlayerFPv(arg0);
        break;
    }
}

void run_active_state__18TObjEneBalClawClawFPv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = ((RecoveredFields_8009060C_arg0 *)arg0)->field_37C;
    switch (temp_r0) {
    case 0:
        ((VObj_14_0d3ae4 *)((u8 *)(arg0) + (912)))->m3();
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 | 5);
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_37C = 1;
    case 1:
        if (((VObj_14_0d3ae4 *)((u8 *)(arg0) + (912)))->m5() == 1) {
            ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 & ~5);
            reset_active_state__18TObjEneBalClawClawFPv((void*)(arg0));
        }
        return;
    case -1:
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 & 0xFFFFFFFB);
        break;
    }
}

void update_drop__18TObjEneBalClawClawFPv(Claw_800906C8 *self) {
    switch (self->state) {
    case -1:
        break;
    case 0:
        self->fieldB8 = 0;
        self->motion.m2();
        self->flags |= 4;
        self->state = 1;
    case 1:
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, (0.0f));
        if (self->motion.m4() == 1) {
            self->flags &= ~4;
            obj_setFlags30(self, 0x02000000);
            self->state = 2;
        }
        break;
    case 2:
        break;
    }
}

void TObjEneBalClawClaw__sub_80090798(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xEFFFFFFF);
    obj_clearFlags30(arg0, 0x06040000U);
    *(s32 *)((s8 *)arg0 + 0x374) = 0xB;
}

void set_claw_flags__18TObjEneBalClawClawFPv(u8 *arg0) {
    obj_setFlags30(arg0, 0x04040000U);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xDFFFFFFF);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x10000000);
}

void TObjEneBalClawClaw__sub_80090824(void) {  }

void TObjEneBalClawClaw__sub_80090828(void) {  }
int reset_active_state__18TObjEneBalClawClawFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }
void update_move_to_target__18TObjEneBalClawClawFPv(Claw_80090850 *self) {
    switch (self->state) {
    case -1:
        break;
    case 0:
        self->flags30 &= ~0x100;
        self->fieldB8 = 1;
        VecCopy__FP3VecPC3Vec(&self->home, &self->pos);
        self->state = 1;
    case 1:
        self->field30C = (0.0f);
        VecCopy__FP3VecPC3Vec(&self->target, &self->field2FC);
        calc_velocity_toward_destination(self, self->target, self->home, self->params->speed);
        update_angle__10TObjPlayerFPviPv(self, self->params->angle, &self->field308);
        move_with_wall_slide(self);
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, (0.0f));
        break;
    }
}

}

#define VecCopy__FP3VecPC3Vec (*(void (*)(void *, void *))&VecCopy__FP3VecPC3Vec)
#define TObjEneBalClawClaw__sub_80090798 (*(void (*)(void *))&TObjEneBalClawClaw__sub_80090798)
#define update_if_active__15TObjEneMe1GiGueFPv (*(s32 (*)(void *, int))&update_if_active__15TObjEneMe1GiGueFPv)
#define apply_actor_gravity (*(void (*)(void *, s32, f32))&apply_actor_gravity)
#define reset_active_state__18TObjEneBalClawClawFPv (*(s32 (*)())&reset_active_state__18TObjEneBalClawClawFPv)

#include "types.h"

struct VBaseA_80090950 { char pad[0x18]; };
struct VA_80090950 : VBaseA_80090950 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual s32 m9(f32, f32, f32);
};
struct VBaseB_80090950 { char pad[0x14]; };
struct VB_80090950 : VBaseB_80090950 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8();
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
    virtual s32 m53();
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
void TObjEneBalClawClaw__sub_80090A10(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3);
void enter_hit_state__18TObjEneBalClawClawFPvs(u8 *arg0, s16 arg1);
f32 update_enemy_wander_move(void *, Vec_80090A70 *, s32, Sub_80090A70 *, f32);
void select_enemy_destination(void *, Vec_80090A70 *, s32);
void enemy_turn_half_toward_dest(void *);
void clear_attack_flag__18TObjEneBalClawClawFPv(void *);
void clear_flag__18TObjEneBalClawClawFPv(void *arg0);
Ent_80090A70 *get_enemy_entity(u16);
void check_object_collisions__10TObjPlayerFPv(void *);
void update_follow_parent__18TObjEneBalClawClawFPv(Obj_80090A70 *arg0);
}

extern "C" {

s32 check_active__18TObjEneBalClawClawFPv(void *arg0);
void render__18TObjEneBalClawClawFPv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 rotate_matrix_x(s32, s32);
s32 render_scaled__14TObjEneBalClawFPvi(void *, s32);
s32 draw_chunk_object(s32);
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 render_world_model__10TObjPlayerFPv(void *);
s32 set_global_param__8TObjFishFi(s32);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 toggle_particle_effect__10TObjPlayerFv();

void clear_flag__18TObjEneBalClawClawFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xDFFFFFFF);
    reset_active_state__18TObjEneBalClawClawFPv();
}

void enter_hit_state__18TObjEneBalClawClawFPvs(u8 *arg0, s16 arg1) {
    *(s16 *)((s8 *)arg0 + 0x3C6) = arg1;
    *(s16 *)((s8 *)arg0 + 0x338) = arg1;
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x20000000);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFBFFFF);
    *(f32 *)((s8 *)arg0 + 0x3C0) = (f32) (1e+05f);
    update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (0xA));
    ((VObj_18_4841bb *)(arg0))->m53();
}

s32 check_active__18TObjEneBalClawClawFPv(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x30) & 0xA00) {
        return 0;
    }
    return (u32) __cntlzw(*(s32 *)((s8 *)arg0 + 0x388) & 0x10000000) >> 5;
}

extern s32 model_render_flags;

void TObjEneBalClawClaw__sub_80090A10(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    *(s32 *)((s8 *)arg0 + 0x60) = arg2;
    *(s16 *)((s8 *)arg0 + 0x33E) = arg3;
    *(s16 *)((s8 *)arg0 + 0x32C) = arg3;
    TObjEneBalClawClaw__sub_80090798(arg0);
    ((VObj_18_4841bb *)(arg0))->m53();
}

void update_follow_parent__18TObjEneBalClawClawFPv(Obj_80090A70 *arg0) {
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
        apply_actor_gravity(arg0, 0, (0.0f));
        check_object_collisions__10TObjPlayerFPv(arg0);
        break;
    }
    }
}

void render__18TObjEneBalClawClawFPv(u8 *arg0) {
    s32 var_r30;
    s32 temp_r3;
    s32 var_r29;

    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x02000000)) {
        temp_r3 = ((VA_80090950 *)arg0)->m9((1.2e+02f), (4e+02f), (1e+01f));
        if (temp_r3 != 0) {
            var_r30 = 1;
            set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
            select_actor_lighting(arg0);
            toggle_particle_effect__10TObjPlayerFv();
            push_matrix();
            model_render_flags &= 0xFFFFFBFF;
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x5C));
                rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
                draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x34));
            } else {
                translate_matrix(0, (0.0f), *(f32 *)((s8 *)arg0 + 0x3B4) + *(f32 *)((s8 *)arg0 + 0x3BC), (0.0f));
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x5C));
                rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
                if (*(s32 *)((s8 *)arg0 + 0x388) & 4) {
                    if (((VB_80090950 *)(arg0 + 0x390))->m8() != 0) {
                        ((VB_80090950 *)(arg0 + 0x390))->m6();
                        var_r29 = 1;
                        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
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
            render_scaled__14TObjEneBalClawFPvi(arg0, var_r30);
        }
    }
}

}

#undef VecCopy__FP3VecPC3Vec
#undef TObjEneBalClawClaw__sub_80090798
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef apply_actor_gravity
#undef reset_active_state__18TObjEneBalClawClawFPv

#define apply_actor_gravity (*(s32 (*)(void *, s32, f32))&apply_actor_gravity)
#define advance_animation_playback (*(s32 (*)(void *))&advance_animation_playback)

#include "types.h"

extern "C" {

void TObjEneBalClawClaw__sub_80090D3C(void *arg0);

void TObjEneBalClawClaw__sub_80090D3C(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000);
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, (0.0f));
        return;
    case -1:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFBFFFF);
        return;
    }
}

}

#undef apply_actor_gravity
#undef advance_animation_playback

#define advance_animation_playback (*(s32 (*)(void *))&advance_animation_playback)
#define apply_actor_gravity (*(s32 (*)(void *, s32, f32))&apply_actor_gravity)
#define move_with_wall_slide (*(s32 (*)(void *))&move_with_wall_slide)
#define reset_active_state__18TObjEneBalClawClawFPv (*(s32 (*)(void *, s32, s32))&reset_active_state__18TObjEneBalClawClawFPv)
#define update_collisions__10TObjPlayerFPv (*(s32 (*)(void *))&update_collisions__10TObjPlayerFPv)
#define update_enemy_wander_move (*(s32 (*)(void *, void *, int, void *, f32))&update_enemy_wander_move)
#define update_angle__10TObjPlayerFPviPv (*(s32 (*)(void *, s32, void *))&update_angle__10TObjPlayerFPviPv)
#define VecCopy__FP3VecPC3Vec (*(s32 (*)(void *, void *))&VecCopy__FP3VecPC3Vec)
#define update_if_active__15TObjEneMe1GiGueFPv (*(s32 (*)(void *, int))&update_if_active__15TObjEneMe1GiGueFPv)
#define clear_attack_flag__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&clear_attack_flag__18TObjEneBalClawClawFPv)

#include "types.h"

struct VBase_80091134 { char pad[0x14]; };

struct VObj_80091134 : VBase_80091134 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct Claw_80091134 {
    u8 pad0[0x38];
    u8 pos[0xB8 - 0x38];
    s16 fieldB8;
    u8 padBA[0x2FC - 0xBA];
    u8 effects[0x37C - 0x2FC];
    s32 state;
    u8 pad380[0x390 - 0x380];
    VObj_80091134 motion;
};

struct Vec_80091200 { f32 x, y, z; };

struct Claw_80091200 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xB4 - 0x34];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x2FC - 0xBA];
    Vec_80091200 pos;
    Vec_80091200 vel;
    u8 pad314[0x32C - 0x314];
    s16 f32C;
    u8 pad32E[0x33E - 0x32E];
    s16 f33E;
    u8 pad340[0x37C - 0x340];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
};

struct Vec_80091354 { f32 x, y, z; };

struct Info_80091354 {
    u8 pad0[4];
    f32 f4;
    s32 f8;
};

struct Claw_80091354 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xB8 - 0x34];
    s16 fB8;
    u8 padBA[0x29C - 0xBA];
    Vec_80091354 f29C;
    struct Claw_80091354 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_80091354 pos;
    u8 pad308[0x338 - 0x308];
    u16 targetId;
    u8 pad33A[0x350 - 0x33A];
    Info_80091354 *info;
    u8 pad354[0x37C - 0x354];
    s32 state;
};

struct Vec_80090ECC { f32 x, y, z; };

struct Info_80090ECC { u8 pad0[8]; s32 f8; };

struct VBase_80090ECC { char pad[0x18]; };

struct VObj_80090ECC : VBase_80090ECC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual void m20(void *, f32);
    virtual void m21(); virtual void m22();
    virtual void m23(void *, f32);
};

struct Claw_80090ECC {
    u8 pad0[0x38];
    u8 f38[0xB4 - 0x38];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x2A8 - 0xBA];
    VObj_80090ECC *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_80090ECC pos;
    u8 f308[0x318 - 0x308];
    s32 f318;
    u8 pad31C[0x33C - 0x31C];
    s16 f33C;
    u8 pad33E[0x350 - 0x33E];
    Info_80090ECC *info;
    u8 pad354[0x37C - 0x354];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
    u8 pad38C[0x3C0 - 0x38C];
    f32 f3C0;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800A04F0(void *);
void request_two_effects__10TObjPlayerFPv(void *);
void apply_effect_variant_a__10TObjPlayerFii(void *, int);
void refresh_lobby_state__10TObjPlayerFPv(void *);
void send_entity_set_flags__6TLobbyFPv(void *);
void play_sound_effect(int, void *, int, int);
void TObjEneBalClawClaw__sub_80091134(Claw_80091134 *self);
s32 check_path_obstructed(void *, void *);
s32 play_persistent_sound(int, void *, void *, int, int);
void TObjEneBalClawClaw__sub_80091200(Claw_80091200 *self);
s32 TBoss3VoloptMonitor__sub_8004292C(void *);
s32 find_target_in_range__10TObjPlayerFPvf(void *, f32);
Claw_80091354 *find_active_entity_by_id(u16);
void update_chase__18TObjEneBalClawClawFPv(Claw_80091354 *self);
f32 get_pos_x__10TObjPlayerFPv(s32);
s32 objInBand__FP7GameObjf(void *, f32);
void TObjEneBalClawClaw__sub_80090ECC(Claw_80090ECC *self);
}

extern "C" {

struct En0Base_80090DD0 { char pad[0x14]; };
struct En0VObj_80090DD0 : En0Base_80090DD0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

void TObjEneBalClawClaw__sub_800914A4(void);
void action__18TObjEneBalClawClawFPv(u8 *arg0);
s32 play_area_se_with_particle__12TBoss3VoloptFi(void *, s32);
s32 TObjPlayer__sub_800A0554(void *);

void action__18TObjEneBalClawClawFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 4);
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x30) | 0x04000000;
        *(s32 *)((s8 *)arg0 + 0x30) = temp_r4;
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        play_area_se_with_particle__12TBoss3VoloptFi(arg0 + 0x38, temp_r4);
        TObjPlayer__sub_800A0554(arg0 + 0x390);
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, (0.0f));
        if (((En0VObj_80090DD0*)(arg0 + 0x390))->m5() == 1) {
            temp_r5 = *(s32 *)((s8 *)arg0 + 0x388);
            temp_r4_2 = temp_r5 & ~5;
            *(s32 *)((s8 *)arg0 + 0x388) = temp_r4_2;
            *(s32 *)((s8 *)arg0 + 0x37C) = -1;
            reset_active_state__18TObjEneBalClawClawFPv(arg0, temp_r4_2, temp_r5);
        }
        return;
    case -1:
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & ~5);
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFBFFFFFF);
        break;
    }
}

#define RESET_80090ECC(p) ((s32 (*)(void *))reset_active_state__18TObjEneBalClawClawFPv)(p)
#define SEEK_80090ECC(p, v, f) ((s32 (*)(void *, void *, int, f32))update_enemy_wander_move)(p, v, 1, f)
void TObjEneBalClawClaw__sub_80090ECC(Claw_80090ECC *self) {
    switch (self->state) {
    case -1:
        break;
    case 0:
        if (self->target == NULL) {
            RESET_80090ECC(self);
            return;
        }
        clear_attack_flag__18TObjEneBalClawClawFPv(self);
        self->f388 &= ~8;
        self->state = self->fB8 = 1;
        break;
    case 1: {
        if (self->target == NULL) {
            RESET_80090ECC(self);
            return;
        }
        Vec_80090ECC v = ((Claw_80090ECC *)self->target)->pos;
        SEEK_80090ECC(self, &v, (0.7f));
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, self->f308);
        if (self->f3C0 <= get_pos_x__10TObjPlayerFPv(self->f318) * get_pos_x__10TObjPlayerFPv(self->f318)) {
            self->state = self->fB8 = 2;
        }
        break;
    }
    case 2: {
        if (self->target == NULL) {
            RESET_80090ECC(self);
            return;
        }
        Vec_80090ECC v = ((Claw_80090ECC *)self->target)->pos;
        SEEK_80090ECC(self, &v, (0.7f));
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, self->f308);
        if (objInBand__FP7GameObjf(self, (8.0f)) != 0) {
            play_sound_effect(0x4003B032, self->f38, 0, 0);
            if (self->target->m18(self, (1.0f)) != 0) {
                self->target->m23(self, (3.0f));
                self->target->m20(self, (1.0f));
                self->f388 |= 8;
            }
        }
        if (self->fB4 != 4) {
            self->f33C = 0x5A;
            update_if_active__15TObjEneMe1GiGueFPv(self, 0xC);
        }
        break;
    }
    case 3:
        self->f33C = self->f33C - 1;
        if (self->f33C <= 0) {
            RESET_80090ECC(self);
        }
        break;
    }
    advance_animation_playback(self);
    apply_actor_gravity(self, 0, (0.0f));
    update_collisions__10TObjPlayerFPv(self);
}

void TObjEneBalClawClaw__sub_80091134(Claw_80091134 *self) {
    switch (self->state) {
    case 0:
        refresh_lobby_state__10TObjPlayerFPv(self);
        self->fieldB8 = 4;
        TObjPlayer__sub_800A04F0(&self->motion);
        request_two_effects__10TObjPlayerFPv(self->effects);
        play_sound_effect(0x4003AD37, self->pos, 0, 0);
        self->state = 1;
    case 1:
        ((s32)advance_animation_playback(self));
        if (self->motion.m4() == 1) {
            apply_effect_variant_a__10TObjPlayerFii(self->pos, 0);
            send_entity_set_flags__6TLobbyFPv(self);
            queue_destruction__7TObjectFv(self);
        }
        break;
    case -1:
        return;
    }
}

void TObjEneBalClawClaw__sub_80091200(Claw_80091200 *self) {
    switch (self->state) {
    case 0:
        self->f30 &= ~0x200000;
        self->fB8 = 3;
        self->state = 1;
    case 1: {
        advance_animation_playback(self);
        Vec_80091200 v = self->pos;
        v.x += self->vel.x;
        v.z += self->vel.z;
        if (check_path_obstructed(self, &v) == 0) {
            move_with_wall_slide(self);
        } else {
            self->vel.x = self->vel.z = (0.0f);
        }
        self->vel.x *= (0.9f);
        self->vel.z *= (0.9f);
        apply_actor_gravity(self, 0, (0.0f));
        update_collisions__10TObjPlayerFPv(self);
        play_persistent_sound(0x4003B235, self, (u8 *)self + 0x38, 0, 0);
        if (self->fB4 != 8) {
            self->f30 &= ~0x200;
            self->f388 &= ~1;
            self->f33E = self->f32C;
            ((s32 (*)(void *))reset_active_state__18TObjEneBalClawClawFPv)(self);
        }
        break;
    }
    case -1:
        break;
    }
}

#define RESET(p) ((s32 (*)(void *))reset_active_state__18TObjEneBalClawClawFPv)(p)
void update_chase__18TObjEneBalClawClawFPv(Claw_80091354 *self) {
    switch (self->state) {
    case 0:
        find_target_in_range__10TObjPlayerFPvf(self, (2.5e+02f));
        if (self->targetId != 0xFFFF) {
            self->f30 &= 0xFBFFFEFF;
            TBoss3VoloptMonitor__sub_8004292C(self);
            self->state = self->fB8 = 1;
        } else {
            RESET(self);
        }
        self->target = find_active_entity_by_id(self->targetId);
        if (self->target != NULL) {
            VecCopy__FP3VecPC3Vec(&self->f29C, &self->target->pos);
        }
        break;
    case 1: {
        if (self->target == NULL) {
            RESET(self);
            break;
        }
        play_persistent_sound(0x4003B235, self, (u8 *)self + 0x38, 0, 0);
        Vec_80091354 v = self->target->pos;
        update_enemy_wander_move(self, &v, 1, self->info, self->info->f4);
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, (u8 *)self + 0x308);
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, (0.0f));
        update_collisions__10TObjPlayerFPv(self);
        break;
    }
    case -1:
        break;
    }
}

void TObjEneBalClawClaw__sub_800914A4(void) {  }

}

#undef advance_animation_playback
#undef apply_actor_gravity
#undef move_with_wall_slide
#undef reset_active_state__18TObjEneBalClawClawFPv
#undef update_collisions__10TObjPlayerFPv
#undef update_enemy_wander_move
#undef update_angle__10TObjPlayerFPviPv
#undef VecCopy__FP3VecPC3Vec
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef clear_attack_flag__18TObjEneBalClawClawFPv

#include "types.h"

#include <stddef.h>
struct Stack_80091E08 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80091E08_lbl_8058D490 { s32 value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80091E08_lbl_8058D490_size[sizeof(RecoveredGlobal_80091E08_lbl_8058D490) == 0x30 ? 1 : -1];

struct RecoveredGlobal_80091B98_lbl_8048F148 { s32 value; u8 remaining[0x148]; };

struct VBase_18_f05d67 { char pad[0x18]; };

struct VObj_18_f05d67 : VBase_18_f05d67 {
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
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual s32 m79(void *);
};

struct RecoveredGlobal_80091C58_lbl_8048F148 {
    s32 value;
    u8 remaining[0x148];
};

struct Vec_80091EA4 { f32 x, y, z; };

struct VBase_80091EA4 { char pad[0x18]; };

struct VObj_80091EA4 : VBase_80091EA4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_80091EA4 *, Vec_80091EA4 *);
};

struct Obj_80091EA4 {
    u8 pad0[0x38];
    Vec_80091EA4 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xB8 - 0x64];
    s16 state;
    u8 padBA[0xC0 - 0xBA];
    f32 frame;
    u8 padC4[0x3A8 - 0xC4];
    VObj_80091EA4 *effects[2];
};

struct VBase_14 { char pad[0x14]; };
struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6();
    virtual s32 m7();
    u32 pad18;
};
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
    virtual s32 m9(f32, f32, f32);
};
struct Vec_8009211C { f32 x, y, z; };
struct Obj_8009211C : VObj_18 {
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    Vec_8009211C f2FC;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    u8 pad328[0x380 - 0x328];
    f32 f380;
    u8 pad384[0x3B0 - 0x384];
    VObj_14 fades[4];
};

struct VBase_18_b31a3c { char pad[0x18]; };
struct VObj_18_b31a3c : VBase_18_b31a3c {
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
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual s32 m80();
};
extern "C" {
void set_param__12TObjEneLappyFPvi(void *, s32);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
s32 set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 reset_photon_effect__12TBoss3VoloptFPv(void *);
s32 TObjPlayer__sub_80090418(void *, int);
s32 bind_enemy_combat_stats(void *, s32, s32, s32);
s32 set_animation__10TObjPlayerFPvs(void *, s16);
s32 init_collision_body_parts(void *, void *, int);
extern s32 lbl_805D2978;
extern u8 *lbl_805D4F20;
extern s32 lbl_805D4F28;
extern s32 lbl_805D4F2C;
extern s32 lbl_805D4F30;
void select_subtype__12TObjEneBeastFPv(u8 *arg0);
s32 spawn_effect_at_ground__10TObjPlayerFPvi(void *, int);
s32 spawn_dead_spot_type2__10TObjPlayerFii(void *, int);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 push_matrix_from(void *);
extern RecoveredGlobal_80091E08_lbl_8058D490 identity_matrix;
extern const f32 lbl_805D96D8;
extern const f32 lbl_805D96DC;
extern const f32 lbl_805D96E0;
void spawn_death_fire__12TObjEneBeastFPv(u8 *arg0);
u8 * TObjEneBalClaw__ct(void *);
s32 TObjEneBalClawClaw__ct(void *arg0);
u8 *TObjEneBalClawClaw__sub_80091B98(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 _w7);
s32 TObjEnemyCustom__sub_800C7860(void *);
u8 *TObjEneBalClawClaw__sub_80091C58(u8 *arg0, s32 arg1, u8 *arg2);
void update_state__18TObjEneBalClawClawFPv(u8 *arg0);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
void mult_vec_array__10TObjPlayerFUii(int, u32, void *, int);
void set_matrix_identity(void *);
extern void *beast_claw_trail_instance;
extern void *boss4_type3_instance;
extern const f32 lbl_805D96E4;
void update_claw_trail__12TObjEneBeastFPv(Obj_80091EA4 *self);
s32 clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
s32 set_indexed_flags(void *, int, int);
void update_appearance__12TObjEneBeastFPv(u8 *arg0);
s32 render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_v2_mode__9TObjEneDDFv();
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
s32 update_obstruction_fade(void *);
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D96E8;
extern const f32 lbl_805D96EC;
extern const f32 lbl_805D96F0;
extern const f32 lbl_805D96F4;
extern const f32 lbl_805D96F8;
extern const f32 lbl_805D96FC;

s32 TObjEneBalClaw__sub_8008D68C();
s32 update_wobble__14TObjEneBalClawFPv(void *);
s32 update_claw_angle__14TObjEneBalClawFPv(void *);
void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0);
s32 release_destroyed_target__10TObjPlayerFPv(void *);
s32 find_entity_by_id(int);
s32 submit_cursor_candidate(void *, int, int, f32, f32);
s32 minimap_render_dot(void *, int, int, int);
void TObjEneBalClawClaw__sub_8009173C(u8 *arg0);
}
#define clear_attack_flag__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&clear_attack_flag__18TObjEneBalClawClawFPv)
#define TObjEneBalClawClaw__sub_80090824 (*(s32 (*)(void *))&TObjEneBalClawClaw__sub_80090824)
#define rotate_matrix_y (*(s32 (*)(int, int))&rotate_matrix_y)
#define pop_matrix (*(s32 (*)())&pop_matrix)
#define VecCopy__FP3VecPC3Vec (*(s32 (*)(void *, void *))&VecCopy__FP3VecPC3Vec)
#define TObjEneBalClawClaw__sub_80090798 (*(s32 (*)(void *))&TObjEneBalClawClaw__sub_80090798)
#define update_chase_state__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&update_chase_state__18TObjEneBalClawClawFPv)
#define run_active_state__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&run_active_state__18TObjEneBalClawClawFPv)
#define update_drop__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&update_drop__18TObjEneBalClawClawFPv)
#define update_move_to_target__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&update_move_to_target__18TObjEneBalClawClawFPv)
#define update_follow_parent__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&update_follow_parent__18TObjEneBalClawClawFPv)
#define TObjEneBalClawClaw__sub_80090D3C (*(s32 (*)(void *))&TObjEneBalClawClaw__sub_80090D3C)
#define action__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&action__18TObjEneBalClawClawFPv)
#define TObjEneBalClawClaw__sub_80090ECC (*(s32 (*)(void *))&TObjEneBalClawClaw__sub_80090ECC)
#define TObjEneBalClawClaw__sub_80091134 (*(s32 (*)(void *))&TObjEneBalClawClaw__sub_80091134)
#define TObjEneBalClawClaw__sub_80091200 (*(s32 (*)(void *))&TObjEneBalClawClaw__sub_80091200)
#define update_chase__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&update_chase__18TObjEneBalClawClawFPv)
#define push_matrix (*(void (*)(void))&push_matrix)
#define post_translate_matrix (*(f32 (*)(void *))&post_translate_matrix)
#define obj_clearFlags30 (*(s32 (*)(void *, int))&obj_clearFlags30)
#define obj_setFlags30 (*(s32 (*)(void *, int))&obj_setFlags30)
#define advance_animation_playback (*(s32 (*)(void *))&advance_animation_playback)
#define play_sound_effect (*(s32 (*)(s32, s32, s32, s32))&play_sound_effect)
#define translate_matrix (*(s32 (*)(int, f32, f32, f32))&translate_matrix)
#define set_global_param__8TObjFishFi (*(s32 (*)(int))&set_global_param__8TObjFishFi)
#define draw_chunk_object (*(s32 (*)(int))&draw_chunk_object)
#define update_if_active__15TObjEneMe1GiGueFPv (*(s32 (*)(void *, int))&update_if_active__15TObjEneMe1GiGueFPv)
#define TObjEneBalClawClaw__sub_800914A4 (*(s32 (*)(void *))&TObjEneBalClawClaw__sub_800914A4)
#define find_active_entity_by_id (*(s32 (*)(int))&find_active_entity_by_id)
#define reset_active_state__18TObjEneBalClawClawFPv (*(s32 (*)(void *))&reset_active_state__18TObjEneBalClawClawFPv)
#define render__18TObjEneBalClawClawFPv (*(void (*)())&render__18TObjEneBalClawClawFPv)

extern "C" {

struct VObjBase_800914a8 { char pad_[0x18]; };
struct VObj_800914a8 : VObjBase_800914a8 {
    virtual s32 m00(); virtual s32 m01(); virtual s32 m02(); virtual s32 m03();
    virtual s32 m04(); virtual s32 m05(); virtual s32 m06(); virtual s32 m07();
    virtual s32 m08(); virtual s32 m09(); virtual s32 m10(); virtual s32 m11();
    virtual s32 m12(); virtual s32 m13(); virtual s32 m14(); virtual s32 m15();
    virtual s32 m16(); virtual s32 m17(s32);
};

void on_attack_cooldown_expired__12TObjEneBeastFv(void);
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0);
void * create__18TObjEneBalClawClawFPv(void *arg0);
void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
void *deleting_dtor__18TObjEneBalClawClawFPvs(void *arg0, s16 arg1);
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0);
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0);
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void *TObjControl__ct(void *, void *);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TObjEneBalClawFv(void *, int);
void *__nw__7TObjectFUl(int);
f32 xz_distance_squared(void *, void *);
s32 play_effect_if_v2__10TObjPlayerFi(s32);
s32 set_attack_distance_flag__10TObjPlayerFPv(void *);

extern "C" void TBoss3Volopt__sub_800C762C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneBalClaw__vt28();
extern "C" void TObjEneBalClaw__vt34();
extern "C" void TObjEneBalClaw__vt37();
extern "C" void TObjEneBalClaw__vt57();
extern "C" void TObjEneBalClaw__vt59();
extern "C" void TObjEneBalClaw__vt60();
extern "C" void TObjEnemyCustom__sub_800C789C();
extern "C" void TObjEnemyCustom__sub_800C7DF4();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void call_player_preserving_field__15TObjEnemyCustomFPv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_gigue__15TObjEnemyCustomFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
void *lbl_8048F090[28] = {
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0xa, (void *)0x3f4ccccd, (void *)0x4,
    (void *)0x20000, (void *)0xb, (void *)0x3f333333, (void *)0x8,
    (void *)0x30000, (void *)0xc, (void *)0x3f000000, (void *)0x10,
    (void *)0x10000, (void *)0xd, (void *)0x3f333333, (void *)0x1,
    (void *)0x10000, (void *)0xe, (void *)0x3f333333, (void *)0x1,
};
void *lbl_8048F100[7] = {
    (void *)0x43160000, (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *TObjEneBalClawClaw__collision_body_template[11] = {
    (void *)0x0, (void *)0x41900000, (void *)0x0, (void *)0x40a00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *__vt__18TObjEneBalClawClaw[83] = {
    (void *)0x0, (void *)0x0, (void *)&deleting_dtor__18TObjEneBalClawClawFPvs, (void *)&TObjEneBalClawClaw__sub_8009173C,
    (void *)&render__18TObjEneBalClawClawFPv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEnemyCustom__sub_800C7DF4, (void *)&TObjPlayer__sub_8000FF3C, (void *)&TObjEneBalClaw__vt28, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&TObjEneBalClaw__vt34, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&TObjEneBalClaw__vt37,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjEneBalClawClaw__sub_80090828, (void *)&TObjEneBalClaw__vt57,
    (void *)&update_gigue__15TObjEnemyCustomFPv, (void *)&TObjEneBalClaw__vt59, (void *)&TObjEneBalClaw__vt60, (void *)&TObjEnemyCustom__sub_800C789C,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TBoss3Volopt__sub_800C762C, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_player_preserving_field__15TObjEnemyCustomFPv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state,
};
#define __vt__18TObjEneBalClawClaw ((s32 *)__vt__18TObjEneBalClawClaw)

void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r31;
    u32 temp_r3;

    if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
        find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) ((2.5e+02f)));
    }
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 8:
    case 0:
        if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x2A8) != 0U) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (1));
                *(s32 *)((s8 *)arg0 + 0x38C) = 2;
                return;
            }
            if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > (1e+02f)) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
                return;
            }
            reset_active_state__18TObjEneBalClawClawFPv((void *) (arg0));
        }
        return;
    case 1:
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x2A8);
        if (temp_r3 != 0U) {
            temp_f1 = xz_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
            temp_r31 = *(s32 *)((s8 *)arg0 + 0x38C);
            switch (temp_r31) {
            case 0:
                if (temp_f1 > (1.6e+03f)) {
                    *(s32 *)((s8 *)arg0 + 0x38C) = 1;
                }
                break;
            case 1:
                if (temp_f1 < (4e+02f)) {
                    clear_attack_flag__18TObjEneBalClawClawFPv((void *) (arg0));
                    *(s32 *)((s8 *)arg0 + 0x38C) = 0;
                } else if (temp_f1 > (1e+04f)) {
                    *(s32 *)((s8 *)arg0 + 0x38C) = 2;
                }
                break;
            case 2:
                if (temp_f1 < (6.4e+03f)) {
                    set_attack_distance_flag__10TObjPlayerFPv((void *) (arg0));
                    *(s32 *)((s8 *)arg0 + 0x38C) = 1;
                }
                break;
            }
            temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x38C);
            if (temp_r31 != temp_r0_2) {
                switch (temp_r0_2) {
                case 0:
                    update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (2));
                    return;
                case 1:
                    clear_attack_flag__18TObjEneBalClawClawFPv((void *) (arg0));
                    return;
                case 2:
                    set_attack_distance_flag__10TObjPlayerFPv((void *) (arg0));
                    return;
                }
            }
        } else {
            update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
        }
        break;
    }
}

extern void *tl_04;

void update_state__18TObjEneBalClawClawFPv(u8 *arg0) {
  s16 temp_r0;
  void *new_var;
  void *new_var2;
  new_var = (void *) arg0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        new_var2 = new_var;
        TObjEneBalClawClaw__sub_80090D3C(new_var2);
        return;
      case 1:
        update_chase__18TObjEneBalClawClawFPv(new_var);
        return;
      case 2:
        TObjEneBalClawClaw__sub_80090ECC(new_var);
        return;
      case 4:
        TObjEneBalClawClaw__sub_80091200(new_var);
        return;
      case 5:
        TObjEneBalClawClaw__sub_80091134(new_var);
        return;
      case 7:
        new_var = arg0;
        action__18TObjEneBalClawClawFPv((void *) new_var);
        return;
      case 9:
        update_drop__18TObjEneBalClawClawFPv(new_var = new_var);
        return;
      case 10:
        update_follow_parent__18TObjEneBalClawClawFPv(new_var);
        return;
      case 11:
        run_active_state__18TObjEneBalClawClawFPv(new_var);
        return;
      case 8:
        update_move_to_target__18TObjEneBalClawClawFPv(new_var);
        return;
      case 12:
        update_chase_state__18TObjEneBalClawClawFPv(new_var);
        break;
    }
  }
}

void TObjEneBalClawClaw__sub_8009173C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u8 *temp_r5;
    TObjEneBalClaw__sub_8008D68C();
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneBalClawClaw__sub_80090824((void *) (arg0));
        TObjEneBalClawClaw__sub_800914A4((void *) (arg0));
        return;
    }
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x388);
    if (temp_r3 & 0x20000000) {
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (0xA));
    } else if (temp_r3 & 0x10000000) {
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (9));
    } else {
        update_attack_distance_state__18TObjEneBalClawClawFPv(arg0);
    }
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != (s32) *(s32 *)((s8 *)arg0 + 0x374)) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x37C) != -1) {
            *(s32 *)((s8 *)arg0 + 0x37C) = -1;
            update_state__18TObjEneBalClawClawFPv(arg0);
        }
        *(s16 *)((s8 *)arg0 + 0x326) = (s16) *(s32 *)((s8 *)arg0 + 0x374);
        *(s32 *)((s8 *)arg0 + 0x37C) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x2A8) = find_active_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0x338)));
    release_destroyed_target__10TObjPlayerFPv((void *) (arg0));
    update_state__18TObjEneBalClawClawFPv(arg0);
    temp_r3_2 = *(s32 *)((s8 *)arg0 + 0x388);
    if (!(temp_r3_2 & 0x10000000)) {
        if (temp_r3_2 & 0x20000000) {
            *(f32 *)((s8 *)arg0 + 0x3BC) = (0.2f + *(f32 *)((s8 *)arg0 + 0x3BC) < 10.0f) ? 0.2f + *(f32 *)((s8 *)arg0 + 0x3BC) : 10.0f;
        } else {
            update_wobble__14TObjEneBalClawFPv((void *) (arg0));
        }
        update_claw_angle__14TObjEneBalClawFPv((void *) (arg0));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        temp_f2 = *(f32 *)((s8 *)arg0 + 0x300);
        *(f32 *)((s8 *)arg0 + 0x300) = (f32) (temp_f2 + (*(f32 *)((s8 *)arg0 + 0x3B4) + *(f32 *)((s8 *)arg0 + 0x3BC)));
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x3B4);
        temp_r5 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
        *(f32 *)((s8 *)temp_r5 + 4) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x3BC));
        submit_cursor_candidate((void *) (arg0), (int) (-1), (int) (temp_r5), (f32) (temp_f1), (f32) (temp_f2));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
        return;
    }
    temp_r3_3 = find_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0x3C6)));
    if (temp_r3_3 != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r3_3 + 0x38));
    }
}

void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = TObjEneBalClawClaw__sub_80091B98((u8 *)(o2), (s32)(o), (u8 *)(arg0), (s32)(arg1), (s32)(arg2), (u8 *)(arg3), (s32)(arg4), (s32)(arg5));
    }
    return o2;
}

extern void *tl_04;

void * create__18TObjEneBalClawClawFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = TObjEneBalClawClaw__sub_80091C58((u8 *)(o2), (s32)(o), (u8 *)(arg0));
    }
    return o2;
}

void *deleting_dtor__18TObjEneBalClawClawFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjEneBalClawClaw;
        free_collision_body_parts(arg0);
        __dt__14TObjEneBalClawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
#define self ((u8 *)arg0)
s32 TObjEneBalClawClaw__ct(void *arg0) {
    *(s32 *)((s8 *)self + 0) = lbl_805D2978;
    *(s32 *)((s8 *)self + 0xDC) = *(s32 *)((s8 *)lbl_805D4F20 + 0x430);
    *(u8 **)((s8 *)self + 0xD8) = (u8 *)lbl_8048F090;
    set_field_d8__10TObjPlayerFPvi(self, *(u8 **)((s8 *)self + 0xD8));
    init_collision_body_parts(self, TObjEneBalClawClaw__collision_body_template, 1);
    *(s32 *)((s8 *)self + 0x368) = 0;
    *(u8 **)((s8 *)self + 0x350) = (u8 *)lbl_8048F100;
    bind_enemy_combat_stats(self, lbl_805D4F28, lbl_805D4F2C, lbl_805D4F30);
    TObjEneBalClawClaw__sub_80090824(self);
    *(s16 *)((s8 *)self + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(self, *(s16 *)((s8 *)self + 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(self, *(s16 *)((s8 *)self + 0xB8));
    *(s16 *)((s8 *)self + 0x32C) = *(s16 *)((s8 *)self + 0x2B8);
    *(s16 *)((s8 *)self + 0x32E) = *(s16 *)((s8 *)self + 0x2BA);
    *(s16 *)((s8 *)self + 0x33E) = *(s16 *)((s8 *)self + 0x32C);
    set_param__12TObjEneLappyFPvi(self, 0x26);
    VecCopy__FP3VecPC3Vec(self + 0x2FC, self + 0x38);
    *(f32 *)((s8 *)self + 0x300) += (5.0f);
    reset_photon_effect__12TBoss3VoloptFPv(self);
    TObjPlayer__sub_80090418(self, 2);
    *(s32 *)((s8 *)self + 0x3B8) = 0;
    *(f32 *)((s8 *)self + 0x3BC) = (0.0f);
    *(f32 *)((s8 *)self + 0x3AC) = (15.0f);
    *(f32 *)((s8 *)self + 0x3B0) = (4e+01f);
    *(f32 *)((s8 *)self + 0x3B4) = *(f32 *)((s8 *)self + 0x3AC);
    clear_attack_flag__18TObjEneBalClawClawFPv(self);
    VecCopy__FP3VecPC3Vec(self + 0x290, (void *)VecCopy__FP3VecPC3Vec(self + 0x29C, self + 0x38));
    return ((VObj_18_b31a3c *)self)->m80();
}
#undef self
#pragma pop
u8 *TObjEneBalClawClaw__sub_80091B98(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 _w7) {
    TObjEneBalClaw__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80091B98_lbl_8048F148 *)__vt__18TObjEneBalClawClaw).value;
    *(s16 *)((s8 *)arg0 + 0x1C) = arg3;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg4;
    *(s16 *)((s8 *)arg0 + 0x28) = (s16) *(s16 *)((s8 *)arg2 + 0x28);
    *(s16 *)((s8 *)arg0 + 0x2A) = (s16) *(s16 *)((s8 *)arg2 + 0x2A);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x50), (void *) (arg2 + 0x50));
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    *(s32 *)((s8 *)arg0 + 0x5C) = 0;
    *(s32 *)((s8 *)arg0 + 0x60) = arg6;
    TObjEneBalClawClaw__ct((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    *(s32 *)((s8 *)arg0 + 0x3B8) = (s32) *(s32 *)((s8 *)arg2 + 0x3B8);
    *(f32 *)((s8 *)arg0 + 0x3BC) = (f32) *(f32 *)((s8 *)arg2 + 0x3BC);
    *(f32 *)((s8 *)arg0 + 0x3B4) = (f32) *(f32 *)((s8 *)arg2 + 0x3B4);
    TObjEneBalClawClaw__sub_80090798((void *) (arg0));
    return arg0;
}

typedef char RecoveredGlobal_80091C58_lbl_8048F148_size[sizeof(RecoveredGlobal_80091C58_lbl_8048F148) == 0x14C ? 1 : -1];
u8 *TObjEneBalClawClaw__sub_80091C58(u8 *arg0, s32 arg1, u8 *arg2) {
    TObjEneBalClaw__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80091C58_lbl_8048F148 *)__vt__18TObjEneBalClawClaw).value;
    ((VObj_18_f05d67 *)(arg0))->m79(arg2);
    TObjEneBalClawClaw__ct((void *) (arg0));
    if (*(s16 *)((s8 *)arg2 + 0xA) != 0) {
        TObjEnemyCustom__sub_800C7860((void *) (arg0));
    }
    return arg0;
}

void on_attack_cooldown_expired__12TObjEneBeastFv(void) {  }
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0) {
    play_sound_effect(0x4003E431, arg0 + 0x38, 0, 0);
}
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003AB2D, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003A32E, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003A62F, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    play_sound_effect(0x4003A82C, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}

void spawn_death_fire__12TObjEneBeastFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80091E08, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80091E08, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80091E08, sp10) == 0x8) ? 1 : -1];
    Stack_80091E08 stack;
    stack.sp8 = lbl_805D96D8;
    stack.spC = lbl_805D96DC;
    stack.sp10 = lbl_805D96E0 * *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2B0)) + 0x10);
    push_matrix_from((void *) (&identity_matrix.value));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    vec3_add_to((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_effect_at_ground__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    spawn_dead_spot_type2__10TObjPlayerFii((void *) (&stack.sp8), (int) (0xF));
}

void update_claw_trail__12TObjEneBeastFPv(Obj_80091EA4 *self) {
    Vec_80091EA4 dir;
    Vec_80091EA4 pos;
    u32 entry;
    s32 idx;
    VObj_80091EA4 *eff;
    if (self->frame < lbl_805D96E4) {
        switch (self->state) {
        case 3:
            entry = lookup_entry_by_value__10TObjPlayerFPvf(beast_claw_trail_instance, self->frame);
            idx = 0;
            break;
        case 4:
            entry = lookup_entry_by_value__10TObjPlayerFPvf(boss4_type3_instance, self->frame);
            idx = 1;
            break;
        default:
            entry = 0;
            break;
        }
        if (entry != 0) {
            push_matrix();
            set_matrix_identity(0);
            post_translate_matrix(&self->pos);
            rotate_matrix_y(0, self->angle);
            mult_vec_array__10TObjPlayerFUii(0, entry, &pos, 2);
            pop_matrix();
            eff = self->effects[idx];
            if (eff != NULL) {
                eff->m4(&pos, &dir);
            }
        }
    }
}

void select_subtype__12TObjEneBeastFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x334);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x334) = 0;
    } else if (temp_r0 > 2) {
        *(s32 *)((s8 *)arg0 + 0x334) = 2;
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x334);
    switch (temp_r0_2) {
    case 2:
        *(s32 *)((s8 *)arg0 + 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 0xB);
        return;
    case 1:
        *(s32 *)((s8 *)arg0 + 0x368) = 2;
        set_param__12TObjEneLappyFPvi(arg0, 0xA);
        return;
    default:
        *(s32 *)((s8 *)arg0 + 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 9);
        return;
    }
}
void update_appearance__12TObjEneBeastFPv(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x328);
    switch (temp_r0) {
    case 0:
    default:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x390) != 1) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
        } else {
            *(s16 *)((s8 *)arg0 + 0x328) = 1;
            *(s16 *)((s8 *)arg0 + 0xB8) = 0xB;
            set_indexed_flags((void *) (arg0), (int) (0), (int) (0x0A000000));
            obj_setFlags30((void *) (arg0), (int) (0x04000000));
            play_sound_effect(0x4003AB32, (s32) (arg0 + 0x38), 0, 0);
        }
        break;
    case 1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 0x20U) {
            *(s16 *)((s8 *)arg0 + 0x328) = 2;
            *(s32 *)((s8 *)arg0 + 0x390) = 0;
            *(s16 *)((s8 *)arg0 + 0xB8) = 0;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
            obj_clearFlags30((void *) (arg0), (int) (0x04000000));
        }
        break;
    case 2:
        *(s16 *)((s8 *)arg0 + 0x326) = 1;
        break;
    }
    advance_animation_playback((void *) (arg0));
}
void render__12TObjEneBeastFPv(Obj_8009211C *o) {
    s32 drawMode;
    s32 fade;
    s32 cam;
    s32 doDraw;

    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    drawMode = o->m9(lbl_805D96E8, lbl_805D96EC, lbl_805D96F0);
    if (drawMode == 0) {
        return;
    }
    fade = 0;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        fade = (s32)&o->fades[cam];
        update_obstruction_fade((void *)fade);
        fade = updateFromCamera__15RenderFadeStateFPCf((void *)fade, &o->f2FC);
    }
    lbl_805D5660 = model_render_flags;
    select_actor_lighting(o);
    set_global_param__8TObjFishFi(o->f24);
    push_matrix();
    translate_matrix(0, lbl_805D96D8, o->f380, lbl_805D96D8);
    post_translate_matrix(o->f38);
    rotate_matrix_y(0, o->f60);
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        draw_chunk_object(o->f34);
    } else {
        toggle_particle_effect__10TObjPlayerFv();
        doDraw = 1;
        if (fade != 0) {
            o->fades[cam].m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(o) != 0) {
                doDraw = 0;
            }
        }
        if (doDraw != 0) {
            if (drawMode == 1) {
                draw__16TObjEneRe7BeruraFPv(o);
            } else {
                render_world_model__10TObjPlayerFPv(o);
            }
        }
        end_effect_render__13TParticleCtrlFv();
        if (fade != 0) {
            o->fades[cam].m7();
        }
    }
    pop_matrix();
    restore_scene_lighting();
    if (o->f326 >= 10 || o->f326 < 8) {
        Vec_8009211C v;
        v.x = lbl_805D96F4;
        v.y = lbl_805D96F8;
        v.z = lbl_805D96FC;
        render_with_position_override__10TObjPlayerFPvPvi(o, &v, 0);
    }
}

}

#undef clear_attack_flag__18TObjEneBalClawClawFPv
#undef TObjEneBalClawClaw__sub_80090824
#undef rotate_matrix_y
#undef pop_matrix
#undef VecCopy__FP3VecPC3Vec
#undef TObjEneBalClawClaw__sub_80090798
#undef update_chase_state__18TObjEneBalClawClawFPv
#undef run_active_state__18TObjEneBalClawClawFPv
#undef update_drop__18TObjEneBalClawClawFPv
#undef update_move_to_target__18TObjEneBalClawClawFPv
#undef update_follow_parent__18TObjEneBalClawClawFPv
#undef TObjEneBalClawClaw__sub_80090D3C
#undef action__18TObjEneBalClawClawFPv
#undef TObjEneBalClawClaw__sub_80090ECC
#undef TObjEneBalClawClaw__sub_80091134
#undef TObjEneBalClawClaw__sub_80091200
#undef update_chase__18TObjEneBalClawClawFPv
#undef push_matrix
#undef post_translate_matrix
#undef obj_clearFlags30
#undef obj_setFlags30
#undef advance_animation_playback
#undef play_sound_effect
#undef translate_matrix
#undef set_global_param__8TObjFishFi
#undef draw_chunk_object
#undef update_if_active__15TObjEneMe1GiGueFPv
#undef TObjEneBalClawClaw__sub_800914A4
#undef find_active_entity_by_id
#undef reset_active_state__18TObjEneBalClawClawFPv
#undef render__18TObjEneBalClawClawFPv
