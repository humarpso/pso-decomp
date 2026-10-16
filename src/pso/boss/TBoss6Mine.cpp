#include "types.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_C { u8 bytes[0xc]; };

#include <stddef.h>
#include "pso/boss/TBoss6Mine.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/misc/TLobby.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
struct Stack_803242C0 {
    f32 sp8;
    f32 spC;
    u8 pad_10[0x4];
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

struct VBase_18_b27ba1 { char pad[0x18]; };

struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual s32 m21(void *, void *, s32, s32, s32);
};

struct Vec_803240F8 { f32 x, y, z; };

struct Hit_803240F8 { s32 a; s32 b; s32 c; f32 d; };

struct Vec_80324440 { f32 x, y, z; };

struct Vec_80323FA4 { f32 x, y, z; };

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

struct Tmp_80324A00 { s32 a; u8 pad4[2]; s16 b; u8 pad8[8]; };

extern "C" {
f32 vector_length(void *);
extern const f32 lbl_805DF58C;
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 lbl_805DF5BC;
extern const f32 lbl_805DF5C0;
extern const f32 lbl_805DF5C4;
void TBoss6Mine__vt0(u8 *arg0);
s32 render_actor_shadows_default();
extern const f32 TBoss6Mine__data_805DF580;
s32 VecCopy__FP3VecPC3Vec(s32, s32);
s32 project_actor_to_ground(void *, void *, int);
f32 vec3_add_to(void *, void *);
f32 vector_length(void *);
f32 subtract_vector(void *, void *);
f32 normalize_vector(void *);
extern const f32 lbl_805DF59C;
extern const f32 lbl_805DF5A0;
void TBoss6Mine__vt5(u8 *arg0);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 play_sound_effect(int, void *, int, int);
f32 vector_length(void *);
f32 subtract_vector(void *, void *);
extern const f32 TBoss6Mine__data_805DF580;
extern const f32 lbl_805DF590;
extern const f32 lbl_805DF594;
void explode_damage_players__10TBoss6MineFPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
f32 vector_length(void *);
f32 normalize_vector(void *);
extern const f32 TBoss6Mine__data_805DF580;
extern const f32 lbl_805DF588;
void TBoss6Mine__vt3(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
f64 atan2_float(f32, f32);
s32 approach_angle_limited(s32, s32, s32);
f64 TBoss5GryphonLightningWing__sub_80324CEC(f32);
f32 vector_length(void *);
f32 subtract_vector(void *, void *);
f32 normalize_vector(void *);
extern const f64 lbl_804766A0[];
extern const f32 lbl_805DF588;
s32 play_persistent_sound(s32, s32, u32, s16, s32);
void TBoss6Mine__vt2(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
f32 *dispatch_shared_handler_a__6TLobbyFl(s32);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
s32 exchange_object_state__6TLobbyFls(void *, void *, int);
u32 create_particle_emitter(void *, int);
s32 bind_enemy_combat_stats(void *, int, int, int);
s32 init_collision_body_parts(void *, void *, int);
extern u8 TBoss6Mine__collision_body_template[];
extern s32 __vt__10TBoss6Mine[];
extern s32 lbl_805D4178;
extern const f32 TBoss6Mine__data_805DF580;
extern const float TBoss6Mine__data_805DF584;
extern const f32 lbl_805DF5A4;
extern const f32 lbl_805DF5CC;
extern const f32 lbl_805DF5D0;
extern const f32 lbl_805DF5D4;
extern const f32 lbl_805DF5D8;
extern const f32 lbl_805DF5DC;
s32 TBoss6Mine__ct(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TBoss6Mine__sub_80323E68(void* a0);
void TBoss6Mine__vt1(void *arg0);
void TBoss6Mine__vt4(u8 *arg0);
void TBoss6Mine__vt6(s32 arg0);
void TBoss6Mine__vt7(void* p);
void *__dt__10TBoss6MineFPvs(void *arg0, s16 arg1);
s32 play_sound_effect(int, void *, int, int);
s32 TBoss6PlotFalz__sub_802AC008(f32, f32);
void TBoss6Type1__sub_802B5DD4(void *);
int post_translate_matrix(void*);
int spawn_particle_effect_with_flags(void*, void*, void*);
int rotate_matrix_x(void*, void*);
s32 TObjControl__ct(s32, s32);
void free_collision_body_parts(void *);
s32 draw_model_motion(s32, s32, f32);
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
int rotate_matrix_y(void*, void*);
int push_matrix(void*);
int pop_matrix(void);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 __nw__7TObjectFUl(s32);
int queue_destruction__7TObjectFv(void*);

void TBoss6Mine::render_shadow_if_visible() {
    u8 *arg0 = (u8 *)this;
    if (*(f32 *)((s8 *)arg0 + 0x3C) >= (*(const f32 *)&TBoss6Mine__data_805DF580)) {
        render_actor_shadows_default();
    }
}

void TBoss6Mine::set_state7() {
    if ((s32) *(s32 *)((s8 *)this + 0x380) != 7) {
        *(s32 *)((s8 *)this + 0x380) = 7;
    }
}

    extern const float TBoss6Mine__data_805DF584;
void TBoss6Mine__sub_80323E68(void* a0) { *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffffdff); *(float*)((char*)a0 + 0x3c8) = TBoss6Mine__data_805DF584; }

void TBoss6Mine::copy_pos() {
    s32 arg0 = (s32)this;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

extern const f32 TBoss6Mine__data_805DF580;

void TBoss6Mine::draw() {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;

    TObjPlayer::set_global_flag();
    temp_r31 = TObjFish__sub_8001EDB0(*(s32 *)((s8 *)this + 0x374), 2);
    temp_r30 = get_bml_model(*(s32 *)((s8 *)this + 0x374), 2);
    temp_r31_2 = get_bml_motion(*(s32 *)((s8 *)this + 0x374), 0);
    TObjFish::set_global_param(temp_r31);
    TBoss6PlotFalz__sub_802AC008(*(f32 *)((s8 *)this + 0x3C8), TBoss6Mine__data_805DF580);
    draw_model_motion(temp_r30, temp_r31_2, *(f32 *)((s8 *)this + 0x39C));
    TBoss6PlotFalz::update_camera_target();
    TObjPlayer::clear_global_state();
}

void TBoss6Mine::draw_parts() { push_matrix(this); post_translate_matrix((char*)this + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)this + 0x390)); rotate_matrix_x((void*)0, *(void**)((char*)this + 0x394)); rotate_matrix_y((void*)0, *(void**)((char*)this + 0x398)); draw(); pop_matrix(); }

void TBoss6Mine::update_facing_angles() {
    u8 *arg0 = (u8 *)this;
    Vec_80323FA4 v;
    s32 a;
    s32 b;
    switch (*(s32 *)((s8 *)arg0 + 0x380)) {
    case 5:
    case 6:
        VecCopy__FP3VecPC3Vec((s32) &v, (s32) (arg0 + 0x38));
        subtract_vector(&v, arg0 + 0x44);
        if (vector_length(&v) <= lbl_805DF588) {
            a = 0;
            b = 0;
        } else {
            normalize_vector(&v);
            a = lbl_804766A0[0] * atan2_float(-v.x, -v.z);
            b = lbl_804766A0[0] * TBoss5GryphonLightningWing__sub_80324CEC(v.y);
            if (b < -0x2000) {
                b = -0x2000;
            } else if (b > 0x2000) {
                b = 0x2000;
            }
        }
        *(s32 *)((s8 *)arg0 + 0x390) = approach_angle_limited(*(s32 *)((s8 *)arg0 + 0x390), a, 0x1111);
        *(s32 *)((s8 *)arg0 + 0x394) = approach_angle_limited(*(s32 *)((s8 *)arg0 + 0x394), b, 0x444);
        *(s32 *)((s8 *)arg0 + 0x398) += 0x888;
        break;
    }
}

s32 TBoss6Mine::is_far_from_origin() {
    s32 arg0 = (s32)this;
    return vector_length((void *) (arg0 + 0x38)) > lbl_805DF58C;
}

void explode_damage_players__10TBoss6MineFPv(u8 *arg0) {
    s32 n;
    s32 i;
    u8 *pl;
    n = TLobby::get_game_mode();
    for (i = 0; i < n; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (((TBoss6PlotFalz *)pl)->is_active() != 0) {
            Vec_803240F8 v = *(Vec_803240F8 *) (arg0 + 0x38);
            subtract_vector(&v, pl + 0x38);
            v.y = TBoss6Mine__data_805DF580;
            if (!(vector_length(&v) > lbl_805DF590)) {
                Hit_803240F8 h;
                s32 r = TBoss6PlotFalz::rand_vary_count(*(s32 *)((s8 *)arg0 + 0x384), lbl_805DF594);
                h.a = 1;
                h.c = 1;
                h.d = r;
                h.b = *(s32 *) &h.d;
                ((VObj_18_b27ba1 *) pl)->m21(arg0, &h, 0, -1, -1);
            }
        }
    }
    play_sound_effect(0x4003BA1E, arg0 + 0x38, 0, 0);
}

void TBoss6Mine__vt7(void* p) { spawn_particle_effect_with_flags((void*)((char*)p + 0x38), (void*)((void*)252), (void*)((void*)64)); queue_destruction__7TObjectFv((void*)(p)); }

extern f32 lbl_805DF598;

void TBoss6Mine__vt6(s32 arg0) {
    explode_damage_players__10TBoss6MineFPv((u8 *)(arg0));
    spawn_particle_effect_with_flags((void*)(arg0 + 0x38), (void*)(0xFB), (void*)(0x40));
    spawn_particle_effect_with_flags((void*)(arg0 + 0x38), (void*)(0xFC), (void*)(0x40));
    TBoss6PlotFalz::apply_radial_effect_to_players((void *)(arg0 + 0x38), (s16)0xC0, (s16)0xF, (f32)lbl_805DF598);
    queue_destruction__7TObjectFv((void*)(arg0));
}

#pragma push
#pragma opt_common_subs off
void TBoss6Mine__vt5(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_803242C0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803242C0, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_803242C0, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_803242C0, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_803242C0, sp1C) == 0x14) ? 1 : -1];
    Stack_803242C0 stack;
    f32 temp_f31;
    VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp14)), (s32)((void *) (arg0 + 0x3BC)));
    subtract_vector((void *) (&stack.sp14), (void *) (arg0 + 0x38));
    if (vector_length((void *) (&stack.sp14)) <= lbl_805DF59C) {
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        *(s32 *)((s8 *)arg0 + 0x380) = 6;
        return;
    }
    normalize_vector((void *) (&stack.sp14));
    stack.sp14 *= lbl_805DF59C;
    stack.sp18 *= lbl_805DF59C;
    stack.sp1C *= lbl_805DF59C;
    vec3_add_to((void *) (arg0 + 0x38), (void *) (&stack.sp14));
    VecCopy__FP3VecPC3Vec((s32)((void *) (&stack.sp8)), (s32)((void *) (arg0 + 0x38)));
    temp_f31 = stack.spC - lbl_805DF5A0;
    stack.spC = temp_f31;
    if ((project_actor_to_ground((void *) (arg0), (void *) (&stack.sp8), (int) (0)) != 0) && (temp_f31 < stack.spC)) {
        stack.spC += lbl_805DF5A0;
        VecCopy__FP3VecPC3Vec((s32)((void *) (arg0 + 0x38)), (s32)((void *) (&stack.sp8)));
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        *(s32 *)((s8 *)arg0 + 0x380) = 6;
    }
}
#pragma pop

void TBoss6Mine__vt4(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = *(s32 *)((s8 *)arg0 + 0x38C) + 1;
    *(s32 *)((s8 *)arg0 + 0x38C) = temp_r3;
    if (temp_r3 > (s32) *(s32 *)((s8 *)arg0 + 0x3A8)) {
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        *(s32 *)((s8 *)arg0 + 0x380) = 5;
        play_sound_effect(0x4003B51D, arg0 + 0x38, 0, 0);
    }
}

void TBoss6Mine__vt3(u8 *arg0) {
    Vec_80324440 v;
    f32 len;
    f32 cnt;
    f32 k;
    cnt = (f32) (*(s32 *)((s8 *)arg0 + 0x3A4) - *(s32 *)((s8 *)arg0 + 0x38C) + 1);
    VecCopy__FP3VecPC3Vec((s32) &v, (s32) (arg0 + 0x38));
    v.y = TBoss6Mine__data_805DF580;
    len = vector_length(&v);
    if (len > lbl_805DF588) {
        normalize_vector(&v);
    }
    k = len + (120.0f - len) / cnt;
    *(f32 *)((s8 *)arg0 + 0x38) = k * v.x;
    *(f32 *)((s8 *)arg0 + 0x40) = k * v.z;
    *(f32 *)((s8 *)arg0 + 0x39C) += 0.8333334f;
    if (*(f32 *)((s8 *)arg0 + 0x39C) >= 9.0f) {
        *(f32 *)((s8 *)arg0 + 0x39C) = 9.0f;
    }
    if (++*(s32 *)((s8 *)arg0 + 0x38C) > *(s32 *)((s8 *)arg0 + 0x3A4)) {
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        *(s32 *)((s8 *)arg0 + 0x380) = 4;
    }
}

void TBoss6Mine__vt2(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x39C) += 0.33333334f;
    if (*(f32 *)((s8 *)arg0 + 0x39C) >= 10.0f) {
        *(f32 *)((s8 *)arg0 + 0x39C) -= 10.0f;
    }
    *(f32 *)((s8 *)arg0 + 0x3C) += 0.6944444f;
    if (*(f32 *)((s8 *)arg0 + 0x3C) >= 75.0f) {
        *(f32 *)((s8 *)arg0 + 0x3C) = 75.0f;
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        *(s32 *)((s8 *)arg0 + 0x380) = 3;
    }
    play_persistent_sound(0x4003B21C, (s32) arg0, (u32) (arg0 + 0x38), 0, 0);
}

void TBoss6Mine__vt1(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)arg0 + 0x38C) + 1;
    *(s32 *)((s8 *)arg0 + 0x38C) = temp_r4;
    if (temp_r4 > (s32) *(s32 *)((s8 *)arg0 + 0x3A0)) {
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        *(s32 *)((s8 *)arg0 + 0x380) = 2;
    }
}

extern s32 __vt__10TBoss6Mine[];

#pragma push
#pragma fp_contract on
void TBoss6Mine__vt0(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x38C);
    temp_f31 = *(f32 *)((s8 *)arg0 + 0x3AC) / lbl_805DF5BC;
    if (temp_r0 > 0xF) {
        temp_r0_2 = 0x1E - temp_r0;
        if (temp_r0_2 > 0) {
            temp_f3 = *(f32 *)((s8 *)arg0 + 0x3B4);
            *(f32 *)((s8 *)arg0 + 0x3B4) = (f32) (temp_f3 + ((lbl_805DF5C0 - temp_f3) / (f32) temp_r0_2));
        }
    }
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) ((temp_f31 * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x37C))) + *(f32 *)((s8 *)arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) ((temp_f31 * cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x37C))) + *(f32 *)((s8 *)arg0 + 0x40));
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) ((lbl_805DF5C4 * sin_table_lookup((s32) (*(s32 *)((s8 *)arg0 + 0x38C) << 0xF) / 30)) + *(f32 *)((s8 *)arg0 + 0x3B4));
    temp_r0_3 = *(s32 *)((s8 *)arg0 + 0x38C) + 1;
    *(s32 *)((s8 *)arg0 + 0x38C) = temp_r0_3;
    if (temp_r0_3 > 0x1E) {
        *(s32 *)((s8 *)arg0 + 0x38C) = 0;
        *(s32 *)((s8 *)arg0 + 0x380) = 1;
    }
}
#pragma pop

void *__dt__10TBoss6MineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TBoss6Mine;
        if (*(void **)((s8 *)arg0 + 0x3CC) != NULL) { TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)arg0 + 0x3CC))); *(s32 *)((s8 *)arg0 + 0x3CC) = 0; }
        free_collision_body_parts(arg0);
        if (*(void **)((s8 *)arg0 + 0x378) != NULL) { TBoss6Type1__sub_802B5DD4(*(void **)((s8 *)arg0 + 0x378)); }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

#pragma push
#pragma fp_contract on
#define VecCopyP ((u8 *(*)(void *, void *))VecCopy__FP3VecPC3Vec)
#define THIS self
s32 TBoss6Mine__ct(s32 arg0, s32 arg1, s32 arg2) {
    u8 *self;
    Tmp_80324A00 tmp;
    f32 f;
    self = (u8 *)arg0;
    ((TObjEnemy *)arg0)->initialize((void*)arg1);
    *(s32 **)((s8 *)THIS + 0x18) = __vt__10TBoss6Mine;
    *(s32 *)((s8 *)THIS + 0) = lbl_805D4178;
    *(s32 *)((s8 *)THIS + 0x378) = *(s32 *)((s8 *)arg2 + 0x40);
    VecCopyP(THIS + 0x38, (u8 *)arg2 + 0x44);
    VecCopyP(THIS + 0x3BC, (u8 *)arg2 + 0x50);
    *(s32 *)((s8 *)THIS + 0x37C) = *(s32 *)((s8 *)arg2 + 0x5C);
    *(s32 *)((s8 *)THIS + 0x388) = *(s32 *)((s8 *)arg2 + 0x60);
    ((TObjPlayer *)THIS)->add_flags_2e4(8);
    ((VObj_18_f05d67 *)THIS)->m79((void *)arg2);
    if (exchange_object_state__6TLobbyFls(THIS, &tmp, 1) != 0) {
        tmp.a = 0;
        tmp.b = 0;
        exchange_object_state__6TLobbyFls(THIS, &tmp, 0);
    }
    *(s32 *)((s8 *)THIS + 0x374) = TObjFish::get_fish_count();
    *(s32 *)((s8 *)THIS + 0x24) = 0;
    *(s32 *)((s8 *)THIS + 0x34) = 0;
    VecCopyP(THIS + 0x44, VecCopyP(THIS + 0x50, VecCopyP(THIS + 0x74, THIS + 0x38)));
    init_collision_body_parts(THIS, TBoss6Mine__collision_body_template, 1);
    VecCopyP(THIS + 0x2FC, THIS + 0x38);
    *(f32 *)((s8 *)THIS + 0x310) = TBoss6Mine__data_805DF580;
    *(f32 *)((s8 *)THIS + 0x30C) = TBoss6Mine__data_805DF580;
    *(f32 *)((s8 *)THIS + 0x308) = TBoss6Mine__data_805DF580;
    *(s32 *)((s8 *)THIS + 0x2A8) = 0;
    bind_enemy_combat_stats(THIS, register_boss__6TLobbyFl(0x2D), dispatch_shared_handler_b__6TLobbyFl(0x2D), register_object__6TLobbyFl(0x2D));
    *(s16 *)((s8 *)THIS + 0x33E) = *(s16 *)((s8 *)THIS + 0x32C);
    ((TBoss3Volopt *)THIS)->reset_photon_effect();
    ((TObjEneLappy *)THIS)->set_param(0);
    *(s32 *)((s8 *)THIS + 0x3A0) = lbl_805DF5D0 * TBoss6Mine::next_random_float((s32 *)(THIS + 0x388)) + lbl_805DF5CC;
    *(s32 *)((s8 *)THIS + 0x3A4) = 0x96 - *(s32 *)((s8 *)THIS + 0x3A0);
    *(s32 *)((s8 *)THIS + 0x3A8) = lbl_805DF5D8 * TBoss6Mine::next_random_float((s32 *)(THIS + 0x388)) + lbl_805DF5D4;
    *(f32 *)((s8 *)THIS + 0x3AC) = lbl_805DF5DC * TBoss6Mine::next_random_float((s32 *)(THIS + 0x388)) + lbl_805DF5A4;
    f = *dispatch_shared_handler_a__6TLobbyFl(0x2D);
    *(s32 *)((s8 *)THIS + 0x384) = f;
    if (TBoss6Mine__data_805DF580 == f) {
        *(s32 *)((s8 *)THIS + 0x384) = 0x14;
    }
    *(f32 *)((s8 *)THIS + 0x3C8) = TBoss6Mine__data_805DF580;
    VecCopyP(THIS + 0x3B0, THIS + 0x38);
    *(f32 *)((s8 *)THIS + 0x39C) = (*(const f32 *)&TBoss6Mine__data_805DF584);
    *(s32 *)((s8 *)THIS + 0x390) = 0;
    *(s32 *)((s8 *)THIS + 0x394) = 0;
    *(s32 *)((s8 *)THIS + 0x398) = 0;
    *(s32 *)((s8 *)THIS + 0x38C) = 0;
    *(s32 *)((s8 *)THIS + 0x380) = 0;
    *(u32 *)((s8 *)THIS + 0x3CC) = create_particle_emitter(THIS + 0x38, 0x146);
    if (*(u32 *)((s8 *)THIS + 0x3CC) != 0) {
        ((TBoss4Type2 *)(*(u32 *)((s8 *)THIS + 0x3CC)))->set_flags(0x40);
    }
    return arg0;
}
#pragma pop

s32 TBoss6Mine::create(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3D0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Mine__ct((s32)(var_r31), (s32)(var_r4), (s32)(arg0));
    }
    return var_r31;
}

}
