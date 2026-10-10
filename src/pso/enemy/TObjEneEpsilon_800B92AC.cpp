#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct O_800B98C0;
extern "C" {
s32 tick_period_counter(M2C_UNK, void *, s32);
int copy_position__14TObjEneEpsilonFPv(void *, void *);
void enemy_clear_target(O_800B98C0 *self, u16 _w1);
s32 enemy_tick_target_acquisition(u8 *arg0, s32 *counter, s32 limit, f32 scale);
void spawn_part__14TObjEneEpsilonFi(s32 arg0);
s32 enemy_bind_or_clear_target(void *self, u16 x);
u16 enemy_find_nearest_player_in_range(void *, f32);
}
#define enemy_clear_target ((M2C_UNK (*)(void *))enemy_clear_target)
#define enemy_tick_target_acquisition ((int (*)(void *, void *, void *))enemy_tick_target_acquisition)

struct VBase_18_807e53 { char pad[0x18]; };

struct VObj_18_807e53 : VBase_18_807e53 {
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
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual M2C_UNK m99(M2C_UNK *);
};

extern "C" {
void enemy_init_validate_period(u8 *arg0, s32 arg1);
int copy_position__14TObjEneEpsilonFPv(void *, void *);
void enemy_copy_target_destination(u8 *arg0);
void fire_attack_b__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
u8 * try_move_actor_xz_on_ground(void *, void *);
void enemy_turn_and_move_on_ground(u8 *arg0, s32 arg1, f32 farg0);
void fire_attack_c__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
u8 * try_move_actor_xz_on_ground(void *, void *);
void TObjEneEpsilon__sub_800B9384(u8 *arg0, s32 arg1, f32 farg0);
void fire_attack_a__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void TObjEneEpsilon__sub_800B92AC(u8 *arg0, s32 arg1, f32 farg0);
void fire_attack_b__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void TObjEneEpsilon__sub_800B92F8(u8 *arg0, s32 arg1, f32 farg0);
s32 enemy_has_live_target(void *);
s32 tick_period_counter(M2C_UNK, void *, s32);
s32 transform_relative_position__9TObjEneDDFPvPv(void *, int);
s32 enemy_validate_retained_target(u8 *arg0);
}

extern "C" {

struct Base_800B9578_800B92AC { char pad[0x18]; };
struct VObj_800B9578_800B92AC : Base_800B9578_800B92AC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual int m97();
};

void fire_attack_a__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void fire_attack_b__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void fire_attack_c__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void update_angle__14TObjEneEpsilonFPvi(void *arg0, s32 arg1);
s32 update_death_check__14TObjEneEpsilonFPv(void *arg0);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 is_player_entity_id(u16);
M2C_UNK calc_wall_clamped_destination(void *, s32, f32, f32, f32);
M2C_UNK calc_wall_slide_destination(void *, s32, f32, f32, f32);
s16 approach_angle_limited(s32, s32, s32);
int VecCopy__FP3VecPC3Vec(void*);
M2C_UNK calc_shot_position__9TObjEneDDFPvPvfff(void *, s32, f32, f32, f32);
f64 atan2_float(f32, f32);

void TObjEneEpsilon__sub_800B92AC(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_UNK sp8;
    fire_attack_a__14TObjEneEpsilonFPviif(arg0, (s32) &sp8, arg1, farg0);
    ((VObj_18_807e53 *)(arg0))->m99(&sp8);
}

void TObjEneEpsilon__sub_800B92F8(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_UNK sp8;
    fire_attack_b__14TObjEneEpsilonFPviif(arg0, (s32) &sp8, arg1, farg0);
    ((VObj_18_807e53 *)(arg0))->m99(&sp8);
}

void enemy_turn_and_move_on_ground(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_UNK sp8;
    fire_attack_b__14TObjEneEpsilonFPviif(arg0, (s32) &sp8, arg1, farg0);
    try_move_actor_xz_on_ground(arg0, &sp8);
}

void TObjEneEpsilon__sub_800B9384(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_UNK sp8;
    fire_attack_c__14TObjEneEpsilonFPviif(arg0, (s32) &sp8, arg1, farg0);
    try_move_actor_xz_on_ground(arg0, &sp8);
}

void fire_attack_a__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f30 = farg0;
    update_angle__14TObjEneEpsilonFPvi((void *)(arg0), (s32)(arg2));
    temp_f31 = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    calc_wall_clamped_destination(arg0, arg1, sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60)), temp_f31, temp_f30);
}

void fire_attack_b__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f30 = farg0;
    update_angle__14TObjEneEpsilonFPvi((void *)(arg0), (s32)(arg2));
    temp_f31 = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    calc_wall_slide_destination(arg0, arg1, sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60)), temp_f31, temp_f30);
}

void fire_attack_c__14TObjEneEpsilonFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f30 = farg0;
    update_angle__14TObjEneEpsilonFPvi((void *)(arg0), (s32)(arg2));
    temp_f31 = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    calc_shot_position__9TObjEneDDFPvPvfff(arg0, arg1, sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60)), temp_f31, temp_f30);
}

extern const f64 lbl_8043B698;

void update_angle__14TObjEneEpsilonFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), (s32) (lbl_8043B698 * atan2_float(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), arg1);
}

s32 update_death_check__14TObjEneEpsilonFPv(void *arg0) {
    if ((((VObj_800B9578_800B92AC *)arg0)->m97() == 0) && (is_player_entity_id(M2C_FIELD(arg0, u16 *, 0x38C)) == 0)) {
        enemy_clear_target(arg0);
        return 0;
    }
    return enemy_validate_retained_target((u8 *)((void *)(arg0)));
}

s32 enemy_validate_retained_target(u8 *arg0) {
    if (tick_period_counter((s32) arg0, arg0 + 0x3B8, M2C_FIELD(arg0, s32 *, 0x3BC)) != 0) {
        if (transform_relative_position__9TObjEneDDFPvPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x390))) != 0) {
            return 1;
        }
        goto block_5;
    }
    if (enemy_has_live_target(arg0) != 0) {
        return 1;
    }
block_5:
    enemy_clear_target((void *) (arg0));
    return 0;
}

void enemy_init_validate_period(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3BC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3B8) = (s32) ((M2C_FIELD(arg0, u16 *, 0x1C) + 3) % M2C_FIELD(arg0, s32 *, 0x3BC));
}

int copy_position__14TObjEneEpsilonFPv(void* p, void * _w1) { return VecCopy__FP3VecPC3Vec((char*)p + 0x394); }
void enemy_copy_target_destination(u8 *arg0) {
    u32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x390);
    if (temp_r4 != 0U) {
        copy_position__14TObjEneEpsilonFPv((void *)((void *)(arg0)), (void *)((void *) (temp_r4 + 0x38)));
    }
}

}
#undef enemy_clear_target
#undef enemy_tick_target_acquisition

#define copy_position__14TObjEneEpsilonFPv ((int (*)(void *))copy_position__14TObjEneEpsilonFPv)
#define tick_period_counter ((s32 (*)(void *, s32 *, s32))tick_period_counter)
#define enemy_clear_target ((M2C_UNK (*)(void *))enemy_clear_target)

struct VBase_18_8e9c4f { char pad[0x18]; };

struct VObj_18_8e9c4f : VBase_18_8e9c4f {
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
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual s32 m102(f32);
};

extern "C" {
s32 enemy_has_live_target(void *);
s32 enemy_tick_target_acquisition(u8 *arg0, s32 *counter, s32 limit, f32 scale);
}

extern "C" {

int VecCopy__FP3VecPC3Vec(void*);

void update_linked_position__14TObjEneEpsilonFPv(void *p, f32 scale) {
    enemy_tick_target_acquisition((u8 *)p, (s32 *)((u8 *)p + 0x3B0),
                               M2C_FIELD(p, s32 *, 0x3B4), scale);
}
s32 enemy_tick_target_acquisition(u8 *arg0, s32 *counter, s32 limit, f32 scale) {
    s32 var_r31;
    if (tick_period_counter(arg0, counter, limit) != 0) {
        var_r31 = ((VObj_18_8e9c4f *)(arg0))->m102(scale);
    } else {
        var_r31 = enemy_has_live_target(arg0);
        if (var_r31 == 0) {
            enemy_clear_target((void *) (arg0));
        }
    }
    return var_r31;
}

}
#undef copy_position__14TObjEneEpsilonFPv
#undef tick_period_counter
#undef enemy_clear_target

#define enemy_bind_or_clear_target ((M2C_UNK (*)(s32, s32))enemy_bind_or_clear_target)
#define enemy_find_nearest_player_in_range ((s32 (*)())enemy_find_nearest_player_in_range)

extern "C" {

void spawn_part__14TObjEneEpsilonFi(s32 arg0);

void spawn_part__14TObjEneEpsilonFi(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)enemy_find_nearest_player_in_range();
    enemy_bind_or_clear_target(arg0, (s32)tmp);
}

}
#undef enemy_bind_or_clear_target
#undef enemy_find_nearest_player_in_range

struct Base_800B97B4 { char pad[0x18]; };
struct VObj_800B97B4 : Base_800B97B4 {
#define V8(b) virtual void b##0(); virtual void b##1(); virtual void b##2(); virtual void b##3(); virtual void b##4(); virtual void b##5(); virtual void b##6(); virtual void b##7();
    V8(a) V8(b) V8(c) V8(d) V8(e) V8(f) V8(g) V8(h) V8(i) V8(j) V8(k) V8(l)
    virtual void p96();
    virtual s32 m97();
};

extern "C" {

void select_and_apply_target__14TObjEneEpsilonFPvf(void *arg0, f32 farg0);
M2C_UNK enemy_bind_or_clear_target(void *, u16);
u16 set_squared_value__9TObjEneDDFf(void *, f32);
u16 enemy_find_nearest_player_in_range(void *, f32);

void select_and_apply_target__14TObjEneEpsilonFPvf(void *arg0, f32 farg0) {
    u16 temp_r3;
    u16 var_r4;

    if (((VObj_800B97B4 *)arg0)->m97() != 0) {
        temp_r3 = set_squared_value__9TObjEneDDFf(arg0, farg0);
        var_r4 = temp_r3;
        if (temp_r3 == 0xFFFF) {
            var_r4 = enemy_find_nearest_player_in_range(arg0, farg0);
        }
    } else {
        var_r4 = enemy_find_nearest_player_in_range(arg0, farg0);
    }
    enemy_bind_or_clear_target(arg0, var_r4);
}

}

#define spawn_part__14TObjEneEpsilonFi ((int (*)(void *))spawn_part__14TObjEneEpsilonFi)

struct O_800B98C0 { u8 pad[0x38c]; u16 f38c; u8 pad2[2]; s32 f390; };

struct Obj_800B9958 { u8 pad[0x38c]; u16 id; u8 pad2[2]; s32 ptr; };

struct Obj_800B98D8 { u8 pad[0x38c]; u16 target_id; u8 pad2[2]; void *target; };

extern "C" {
void enemy_init_acquire_period(u8 *arg0, s32 arg1);
s32 enemy_bind_or_clear_target(void *self, u16 x);
void enemy_clear_target(O_800B98C0 *self, u16 _w1);
s32 find_active_entity_by_id(u16);
void enemy_set_target_id(Obj_800B9958 *self, u16 id);
s32 get_game_mode__6TLobbyFv(void);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
void set_target_player__13TBoss2DeRolLeFPvPv(Obj_800B98D8 *self, void *player);
}

extern "C" {

int TObjEneEpsilon__vt101(void* p);

s32 enemy_bind_or_clear_target(void *self, u16 x) {
    if (x != 0xFFFF) {
        enemy_set_target_id((Obj_800B9958 *)((void *)(self)), x);
        return 1;
    }
    enemy_clear_target((O_800B98C0 *)((void *)(self)), x);
    return 0;
}

int TObjEneEpsilon__vt101(void* p) { return spawn_part__14TObjEneEpsilonFi(p); }

void enemy_init_acquire_period(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) % arg1);
    M2C_FIELD(arg0, s32 *, 0x3B4) = arg1;
}

void enemy_clear_target(O_800B98C0 *self, u16 _w1) {
    self->f390 = 0;
    self->f38c = 0xFFFF;
}

void set_target_player__13TBoss2DeRolLeFPvPv(Obj_800B98D8 *self, void *player) {
    s32 n;
    s32 i;
    self->target_id = 0xFFFF;
    self->target = 0;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        if (player == get_player_data__10TObjPlayerFi(i)) {
            self->target_id = obj_getField1c(player);
            self->target = player;
            return;
        }
    }
}

void enemy_set_target_id(Obj_800B9958 *self, u16 id) {
    self->id = id;
    if (id != 0xFFFF) {
        self->ptr = find_active_entity_by_id(self->id);
    } else {
        self->id = 0xFFFF;
        self->ptr = 0;
    }
}

}
