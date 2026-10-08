#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_800A9C38 { f32 x, y, z; };

struct VBase_18_fe09eb { char pad[0x18]; };

struct VObj_18_fe09eb : VBase_18_fe09eb {
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
    virtual M2C_UNK m63(M2C_UNK, void *);
};

extern "C" {
void enemy_set_heading_velocity(void *, s32, f32);
s32 check_path_obstructed(void *, void *);
void obj_clearFlags30(void *, u32);
s32 TObjPlayer__sub_800AAF98(void *, s32);
void TObjPlayer__sub_800AAFF8(u8 *arg0);
void TObjPlayer__sub_800AB034(u8 *arg0);
extern const f32 lbl_805D9AFC;
extern const f32 lbl_805D9B04;
extern const f32 lbl_805D9B08;
extern const f32 lbl_805D9B0C;
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK enemy_turn_toward_dest(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
u32 create_particle_emitter(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 TObjPlayer__sub_800AAF98(void *, s32);
M2C_UNK TObjPlayer__sub_800AB31C(void *, void *, s32, void *, s32);
M2C_UNK TBoss3Volopt__sub_800C7698();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, int, int);
void *__nw__7TObjectFUl(int);
extern const f32 lbl_805D9ADC;
extern const f32 lbl_805D9AE0;
extern const f32 lbl_805D9AE8;
extern const f32 lbl_805D9AEC;
void TObjPlayer__sub_800A8FB4(void *arg0_);
}
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub { char pad[0x14]; };
struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
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
    virtual M2C_UNK m63(M2C_UNK, void *);
};

struct RecoveredGlobal_800A8B8C_lbl_804910F4
{
  M2C_UNK value;
  u8 remaining[0x168];
};

struct Obj_800AA528 { u8 pad0[0x326]; s16 state; };

struct Obj_800A8A7C { u8 pad[0x388]; u32 flags; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_800A8C4C { s32 x, y, z; };

struct Obj_800A8A7C;
struct VBase_14_fddec9 { char pad[0x14]; };

struct VObj_14_fddec9 : VBase_14_fddec9 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual s32 m8();
};

struct VBase_18_ca64a0 { char pad[0x18]; };

struct VObj_18_ca64a0 : VBase_18_ca64a0 {
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

struct Self_800AA334 { u8 pad[0x3B0]; VObj_14_fddec9 sub; };

struct Vec_800AA334 { s32 x, y, z; };

struct VBase_18_cc39a7 { char pad[0x18]; };

struct VObj_18_cc39a7 : VBase_18_cc39a7 {
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
    virtual s32 m17(M2C_UNK);
};

typedef struct Vec_800A9E9C { f32 x, y, z; } Vec_800A9E9C;

extern "C" {
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *);
M2C_UNK advance_animation_playback(void *);
void TObjPlayer__sub_800A8E04(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_800C7698();
void TObjPlayer__sub_800A8B0C(u8 *arg0);
void obj_setFlags30(void *, u32);
void TObjPlayer__sub_800A8C1C(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
extern const f32 lbl_805D9AE0;
void update_timed_state__10TObjPlayerFPv(void *arg0);
s32 find_active_entity_by_id(u16);
s32 check_demo_mode__10TObjPlayerFv();
void TObjPlayer__sub_800AA330(void *);
M2C_UNK TObjPlayer__sub_800AB068(void *);
M2C_UNK TObjPlayer__sub_800C6A18(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);
void update_synced_state__10TObjPlayerFPv(u8 *arg0);
void *TObjControl__ct(void *, void *);
void *TObjEneDubchik__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern void *tl_04;
void * create_dubchik__10TObjPlayerFPv(void *arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
void TObjPlayer__sub_800A89B0(u8 *arg0);
f32 TObjPlayer__sub_800AAF78(void *, s32);
M2C_UNK TObjPlayer__sub_800AAFF0(int);
extern RecoveredGlobal_800A8B8C_lbl_804910F4 lbl_804910F4;
void TObjPlayer__sub_800A8B8C(u8 *arg0);
void update_timed_state__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_800A93E4(void *);
void TObjPlayer__sub_800A9C38(void *);
void TObjPlayer__sub_800A9718(void *);
void TObjPlayer__sub_800A8E04(u8 *arg0);
void TObjPlayer__sub_800AA528(Obj_800AA528 *arg0);
s32 clear_flag8_all__12TBoss3VoloptFPv(void *);
s32 set_flag8_list__12TBoss3VoloptFPv(void *);
extern u8 lbl_805009A0[];
void TBoss3Volopt__sub_800A8A7C(Obj_800A8A7C *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK calc_velocity_toward_destination(void *, Vec_800A8C4C, Vec_800A8C4C, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
f32 TObjPlayer__sub_800AAF78(void *, s32);
s32 check_v2_mode__9TObjEneDDFv();
f32 xz_distance_squared(void *, void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
extern M2C_UNK lbl_804910E4[];
extern M2C_UNK lbl_804910EC[];
extern const f32 lbl_805D9AE0;
extern const f32 lbl_805D9AE4;
void TObjPlayer__sub_800A8C4C(u8 *arg0);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 check_demo_mode__10TObjPlayerFv();
void TBoss3Volopt__sub_800A8A7C(Obj_800A8A7C *arg0);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_chunk_object(int);
extern M2C_UNK lbl_8043AC78[];
extern s32 lbl_805D5094;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9B24;
extern const f32 lbl_805D9B28;
extern const f32 lbl_805D9B2C;
extern const f32 lbl_805D9B30;
void TObjPlayer__sub_800AA334(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
f32 get_pos_x__10TObjPlayerFPv(int);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
u16 TObjPlayer__sub_800C6D24(void *, f32);
M2C_UNK TObjPlayer__sub_800C6E34(void *, f32);
s32 find_target_in_range__10TObjPlayerFPvf(void *, f32);
s32 find_active_entity_by_id(u16);
f32 xz_distance_squared(void *, void *);
extern const f32 lbl_805D9AE0;
extern const f32 lbl_805D9B10;
extern const f32 lbl_805D9B14;
extern const f32 lbl_805D9B18;
extern const f32 lbl_805D9B1C;
extern const f32 lbl_805D9B20;
void TObjPlayer__sub_800AA10C(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_enemy_wander_move(void *, Vec_800A9E9C *, s32, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
f32 TObjPlayer__sub_800AAF78(void *, s32);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, int, int);
M2C_UNK play_sound_effect(M2C_UNK, void *, int, int);
extern M2C_UNK lbl_804910E4[];
extern M2C_UNK lbl_804910EC[];
extern const f32 lbl_805D9AE0;
void TObjPlayer__sub_800A9E9C(void *arg0_);
}

extern "C" {

s32 TObjPlayer__sub_800A8A34(s32 arg0);
void set_flag_start_effect__10TObjPlayerFPv(u8 *arg0);
s32 try_apply_800a89b0__10TObjPlayerFi(s32 arg0);
s32 update_shock_clock__10TObjPlayerFPv();
s32 update_movement_status__10TObjPlayerFv();
M2C_UNK create_dead_spot__10TObjPlayerFiif(void *, s16, f32);

extern const f32 lbl_805D9ADC;

void set_flag_start_effect__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r3 & 0x04000000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 | 0x04000000);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFF7FFFFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
        create_dead_spot__10TObjPlayerFiif(arg0 + 0x2FC, M2C_FIELD(arg0, s16 *, 0x33C), lbl_805D9ADC);
    }
}

void TObjPlayer__sub_800A89B0(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
    }
}

s32 try_apply_800a89b0__10TObjPlayerFi(s32 arg0) {
    if (update_movement_status__10TObjPlayerFv() != 0) {
        TObjPlayer__sub_800A89B0((u8 *)arg0);
        return 1;
    }
    return 0;
}

s32 TObjPlayer__sub_800A8A34(s32 arg0) {
    if (update_shock_clock__10TObjPlayerFPv() != 0) {
        TObjPlayer__sub_800A89B0((u8 *)arg0);
        return 1;
    }
    return 0;
}

void TBoss3Volopt__sub_800A8A7C(Obj_800A8A7C *arg0) {
    u8 *g = lbl_805009A0;
    if (arg0->flags & 0x20000) {
        set_flag8_list__12TBoss3VoloptFPv(g + 0x68);
    } else {
        clear_flag8_all__12TBoss3VoloptFPv(g + 0x68);
    }
    if (arg0->flags & 0x40000) {
        set_flag8_list__12TBoss3VoloptFPv(g + 0x78);
    } else {
        clear_flag8_all__12TBoss3VoloptFPv(g + 0x78);
    }
    if (arg0->flags & 0x80000) {
        set_flag8_list__12TBoss3VoloptFPv(g + 0xA8);
    } else {
        clear_flag8_all__12TBoss3VoloptFPv(g + 0xA8);
    }
}

void TObjPlayer__sub_800A8B0C(u8 *arg0) {
    TBoss3Volopt__sub_800C7698();
    ((VObj_18 *)(arg0))->m63(0x13, arg0 + 0x3D4);
    ((VObj_18 *)(arg0))->m63(0x28, arg0 + 0x3E0);
    ((VObj_18 *)(arg0))->m63(0x29, arg0 + 0x3EC);
}

typedef struct RecoveredGlobal_800A8B8C_lbl_804910F4 RecoveredGlobal_800A8B8C_lbl_804910F4;
typedef char RecoveredGlobal_800A8B8C_lbl_804910F4_size[((sizeof(RecoveredGlobal_800A8B8C_lbl_804910F4)) == 0x16C) ? (1) : (-1)];
void TObjPlayer__sub_800A8B8C(u8 *arg0) {
  M2C_UNK *var_r4;
  M2C_UNK *var_r5;
  f32 temp_f1;
  f32 temp_f1_2;
  u8 *var_r31;
  u8 *var_r3;
  var_r4 = (M2C_UNK *) ((u8 *) 0);
  var_r31 = (u8 *) arg0;
  var_r4 = (M2C_UNK *) (&lbl_804910F4.value);
  var_r3 = (u8 *) var_r31;
  var_r5 = (M2C_UNK *) (&lbl_804910F4.value);
  var_r4 = (M2C_UNK *) ((u8 *) ((M2C_UNK *) 3));
  *((f32 *) (((s8 *) (&lbl_804910F4.value)) + 0x28)) = TObjPlayer__sub_800AAF78(arg0, 0);
  temp_f1 = TObjPlayer__sub_800AAF78(var_r3, 3);
  var_r5 = (var_r4 = (M2C_UNK *) (&lbl_804910F4.value));
  var_r3 = (u8 *) var_r31;
  var_r4 = (M2C_UNK *) ((u8 *) ((M2C_UNK *) 4));
  *((f32 *) (((s8 *) (&lbl_804910F4.value)) + 0x78)) = temp_f1;
  temp_f1_2 = TObjPlayer__sub_800AAF78(var_r3, 4);
  var_r4 = (M2C_UNK *) (&lbl_804910F4.value);
  var_r3 = (u8 *) var_r31;
  var_r5 = (M2C_UNK *) (&lbl_804910F4.value);
  var_r4 = (M2C_UNK *) ((u8 *) ((M2C_UNK *) 1));
  *((f32 *) (((s8 *) (&lbl_804910F4.value)) + 0xC8)) = temp_f1_2;
  if ((s16) (*((s16 *) (((s8 *) var_r31) + 0x392))))
  {
    var_r4 = (M2C_UNK *) ((u8 *) ((M2C_UNK *) 5));
  }
  TObjPlayer__sub_800AAF78(var_r3, (s32) var_r4);
  var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r31) + 0x318)));
  TObjPlayer__sub_800AAFF0((int) var_r3);
}

void TObjPlayer__sub_800A8C1C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x02000000);
    obj_setFlags30(arg0, 0x800U);
}

void TObjPlayer__sub_800A8C4C(u8 *arg0) {
    f32 var_f31;
    s32 temp_r0;
    s32 var_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        if (check_v2_mode__9TObjEneDDFv() == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                var_r0 = 7;
            } else {
                var_r0 = M2C_FIELD(((u8 *)(lbl_804910EC) + (M2C_FIELD(arg0, s32 *, 0x368) * 4)), s32 *, 0);
            }
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) var_r0;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        }
        VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x29C), (void *) ((u8 *)(arg0) + 0x50));
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        advance_animation_playback((void *) (arg0));
        apply_actor_gravity((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (f32) (lbl_805D9AE0));
        check_object_collisions__10TObjPlayerFPv((void *) (arg0));
        check_enemy_body_collisions((void *) (arg0));
        if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
            var_f31 = TObjPlayer__sub_800AAF78((void *)((void *) (arg0)), (s32)((int) (2)));
        } else {
            var_f31 = M2C_FIELD(((u8 *)(lbl_804910E4) + (M2C_FIELD(arg0, s32 *, 0x368) * 4)), f32 *, 0);
        }
        VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x290), (void *) ((u8 *)(arg0) + 0x2FC));
        calc_velocity_toward_destination((void *) (arg0), *(Vec_800A8C4C *)(arg0 + 0x290), *(Vec_800A8C4C *)(arg0 + 0x29C), var_f31);
        update_angle__10TObjPlayerFPviPv((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)), (void *) ((u8 *)(arg0) + 0x308));
        move_with_wall_slide((void *) (arg0));
        if (xz_distance_squared((void *) ((u8 *)(arg0) + 0x38), (void *) ((u8 *)(arg0) + 0x50)) < lbl_805D9AE4) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 5;
            advance_animation_playback((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFE7FFFFF);
            update_if_active__15TObjEneMe1GiGueFPv((void *)((void *) (arg0)), (s32)((int) (0)));
        }
        return;
    }
}

void TObjPlayer__sub_800A8E04(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        advance_animation_playback((void *)(arg0));
        TBoss3Volopt__sub_800D8D88(arg0 + 0x2FC);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3B0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (((V_Sub *) (arg0 + 0x3B0))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        break;
    }
}
void update_timed_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) ((M2C_FIELD(arg0, u32 *, 0x388) & 0x1000000) ? 0 : 5);
        M2C_FIELD(arg0, u32 *, 0x388) = (u32) (M2C_FIELD(arg0, u32 *, 0x388) | 0x800000);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity(arg0, 0, lbl_805D9AE0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x30) & 0x40000) {
            temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
            M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
            if (temp_r4 < 0) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            }
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        break;
    }
}
struct Vec_800A93E4 { f32 x, y, z; };
struct Pair_800A93E4 { s32 a, b; };
struct VB_800A93E4 { u8 pad[0x18]; };
struct VO_800A93E4 : VB_800A93E4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800A93E4 *, Vec_800A93E4 *);
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual void m20(void *, f32);
    virtual void m21(void *, Pair_800A93E4 *, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *, f32);
};
struct Params_800A93E4 { u8 pad[8]; s32 turn; };
struct Ene_800A93E4 {
    u8 pad0[0x30];
    s32 flags;
    u8 pad34[4];
    Vec_800A93E4 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xB4 - 0x64];
    u32 fb4;
    s16 fb8;
    u8 padba[0xC0 - 0xBA];
    f32 fc0;
    u8 padc4[0x29C - 0xC4];
    Vec_800A93E4 dest;
    VO_800A93E4 *target;
    u8 pad2ac[0x350 - 0x2AC];
    Params_800A93E4 *params;
    u8 pad354[0x368 - 0x354];
    s32 f368;
    u8 pad36c[0x37C - 0x36C];
    s32 state;
    u8 pad380[0x392 - 0x380];
    s16 kind;
    u8 pad394[0x398 - 0x394];
    u32 f398;
    u32 f39c;
    u8 pad3a0[0x3AC - 0x3A0];
    VO_800A93E4 *model;
};

M2C_UNK enemy_turn_toward_dest(void *, s32);
M2C_UNK reset_timer__11TBoss4Type3FPv(void *);
u32 lookup_entry_by_value__10TObjPlayerFPvf(s32, f32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TObjPlayer__sub_803D8960(int, u32, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
extern f32 lbl_8043AC84[];
extern Pair_800A93E4 lbl_8043AC9C[];
extern s32 lbl_80500AF0[];
extern s32 lbl_80500AF8[];

void TObjPlayer__sub_800A8FB4(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    s32 r;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        if (M2C_FIELD(arg0, u32 *, 0x39C) != 0U) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            break;
        }
        M2C_FIELD(arg0, s16 *, 0x38E) = (s16) M2C_FIELD(arg0, f32 *, 0x354);
        if (M2C_FIELD(arg0, s16 *, 0x38E) == 0) {
            M2C_FIELD(arg0, s16 *, 0x38E) = 2;
        }
        {
            s16 v = 8;
            if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                v = 9;
            }
            M2C_FIELD(arg0, s16 *, 0xB8) = v;
        }
    case 1:
        if (M2C_FIELD(arg0, s16 *, 0x38E) == 1) {
            s16 v = 0x11;
            if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                v = 0x12;
            }
            M2C_FIELD(arg0, s16 *, 0xB8) = v;
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
    case 2:
        if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x29C, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            enemy_turn_toward_dest(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
        }
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9AE0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        r = 0;
        if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0xB8) != 9) {
                r = objInBand__FP7GameObjf(arg0, lbl_805D9ADC);
            }
        } else if (M2C_FIELD(arg0, s16 *, 0xB8) != 8) {
            r = objInBand__FP7GameObjf(arg0, lbl_805D9ADC);
        }
        if (r != 0) {
            ((M2C_UNK (*)(void *))TBoss3Volopt__sub_800C7698)(arg0);
            ((VObj_18_fe09eb *)arg0)->m63(0x22, arg0 + 0x410);
            M2C_FIELD(arg0, u32 *, 0x3A8) = create_particle_emitter(arg0 + 0x410, 0x119);
            M2C_FIELD(arg0, s16 *, 0x33C) = TObjPlayer__sub_800AAF98(arg0, 1);
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x29C, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            enemy_turn_toward_dest(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
        }
        apply_actor_gravity(arg0, 0, lbl_805D9AE0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        ((M2C_UNK (*)(void *))TBoss3Volopt__sub_800C7698)(arg0);
        ((VObj_18_fe09eb *)arg0)->m63(0x22, arg0 + 0x410);
        if (M2C_FIELD(arg0, u32 *, 0x3A8) != 0U) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x3A8), arg0 + 0x410);
        }
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            void *o;
            M2C_FIELD(arg0, s16 *, 0x38E)--;
            o = __nw__7TObjectFUl(0x6C);
            if (o != NULL) {
                TObjPlayer__sub_800AB31C(o, arg0 + 0x410, M2C_FIELD(arg0, s32 *, 0x60), arg0, TObjPlayer__sub_800AAF98(arg0, 3));
            }
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
            if (M2C_FIELD(arg0, u32 *, 0x3A8) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3A8));
                M2C_FIELD(arg0, u32 *, 0x3A8) = 0U;
            }
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD04), arg0 + 0x38, 0, 0);
        }
        break;
    case 4:
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, lbl_805D9AE0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        if (M2C_FIELD(arg0, s16 *, 0x38E) > 0) {
            if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                r = objInBand__FP7GameObjf(arg0, lbl_805D9AE8);
            } else {
                r = objInBand__FP7GameObjf(arg0, lbl_805D9AEC);
            }
            if (r != 0) {
                M2C_FIELD(arg0, s16 *, 0x33C) = 0xF;
                M2C_FIELD(arg0, s32 *, 0x37C) = 5;
            }
        } else if (M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
            M2C_FIELD(arg0, s32 *, 0x37C) = 6;
        }
        break;
    case 5:
        apply_actor_gravity(arg0, 0, lbl_805D9AE0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        M2C_FIELD(arg0, s16 *, 0x33C) = M2C_FIELD(arg0, s16 *, 0x33C) - 1;
        if (M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        }
        break;
    case 6:
        apply_actor_gravity(arg0, 0, lbl_805D9AE0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        M2C_FIELD(arg0, s16 *, 0x33C) = M2C_FIELD(arg0, s16 *, 0x33C) - 1;
        if (M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            if (M2C_FIELD(arg0, s16 *, 0x38E) > 0) {
                M2C_FIELD(arg0, s32 *, 0x37C) = 1;
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            }
        }
        break;
    case -1:
        if (M2C_FIELD(arg0, u32 *, 0x3A8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3A8));
            M2C_FIELD(arg0, u32 *, 0x3A8) = 0U;
        }
        break;
    }
}

void TObjPlayer__sub_800A93E4(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    Ene_800A93E4 *e = (Ene_800A93E4 *)arg0;
    s32 act;
    u32 h0;
    u32 h1;
    Vec_800A93E4 b2;
    Vec_800A93E4 a2;
    Vec_800A93E4 b1;
    Vec_800A93E4 a1;

    switch (e->state) {
    case 0: {
        s16 a = 2;
        if (e->kind != 0) {
            a = 12;
        }
        e->fb8 = a;
        e->flags |= 0x200000;
        reset_timer__11TBoss4Type3FPv(e->model);
        e->state = 1;
    }
    case 1:
        if (e->target != NULL) {
            VecCopy__FP3VecPC3Vec(&e->dest, (u8 *)e->target + 0x2FC);
            enemy_turn_toward_dest(arg0, e->params->turn);
        }
        advance_animation_playback(arg0);
        act = -1;
        if (objInBand__FP7GameObjf(arg0, lbl_8043AC84[e->kind]) != 0) {
            if (e->f39c == 0) {
                act = 4;
            }
        } else if (objInBand__FP7GameObjf(arg0, lbl_8043AC84[e->kind + 2]) != 0 && e->f398 == 0) {
            act = 3;
        }
        if (act >= 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD03), &e->pos, 0, 0);
            if (e->target != NULL && e->target->m18(arg0, 1.0f) != 0) {
                e->target->m20(arg0, 1.0f);
                e->target->m23(arg0, 3.0f);
                if (e->f368 != 0 && calc_boss4_scale__10TObjPlayerFi(arg0) <= 0.16666667f) {
                    Pair_800A93E4 p = lbl_8043AC9C[0];
                    e->target->m21(arg0, &p, 0, -1, -1);
                }
            }
        }
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        h0 = lookup_entry_by_value__10TObjPlayerFPvf(lbl_80500AF0[e->kind], e->fc0);
        h1 = lookup_entry_by_value__10TObjPlayerFPvf(lbl_80500AF8[e->kind], e->fc0);
        push_matrix();
        TObjPlayer__sub_803D8CD4(0);
        post_translate_matrix(&e->pos);
        rotate_matrix_y(0, e->angle);
        if (h0 != 0) {
            TObjPlayer__sub_803D8960(0, h0, &a1, 2);
            e->model->m4(&a1, &b1);
        }
        if (h1 != 0) {
            s32 pa = (s32)&a2;
            TObjPlayer__sub_803D8960(0, h1, (void *)pa, 2);
            e->model->m4((Vec_800A93E4 *)pa, &b2);
        }
        pop_matrix();
        if (e->fb4 != 4) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
            e->state = -1;
        }
        break;
    case -1:
        e->flags &= ~0x200000;
        break;
    }
}

#define arg0 ((u8 *)arg0_)
void TObjPlayer__sub_800A9C38(void *arg0_) {
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        if (check_v2_mode__9TObjEneDDFv() != 0 && calc_boss4_scale__10TObjPlayerFi(arg0) > lbl_805D9B0C) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
            enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60), lbl_805D9AFC);
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A806), arg0 + 0x38, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x3CC) = TObjPlayer__sub_800AAF98(arg0, 2);
        }
        M2C_FIELD(arg0, u32 *, 0x30) &= ~0x200000;
        break;
    case 1:
        advance_animation_playback(arg0);
        if (--M2C_FIELD(arg0, s32 *, 0x3CC) <= 0) {
            TObjPlayer__sub_800AB034(arg0);
        }
        {
        Vec_800A9C38 pos = *(Vec_800A9C38 *)(arg0 + 0x2FC);
        pos.x += M2C_FIELD(arg0, f32 *, 0x308);
        pos.z += M2C_FIELD(arg0, f32 *, 0x310);
        if (check_path_obstructed(arg0, &pos) == 0) {
            move_with_wall_slide(arg0);
        } else {
            M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = lbl_805D9AE0;
        }
        }
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805D9B04;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805D9B04;
        if (M2C_FIELD(arg0, s16 *, 0xB8) == 0xE) {
            M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = lbl_805D9AE0;
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            TObjPlayer__sub_800AB034(arg0);
        }
        break;
    case 2:
        break;
    case 3:
        advance_animation_playback(arg0);
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D9B08) {
            TObjPlayer__sub_800AAFF8(arg0);
        }
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 8) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0x384)--;
        if (M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case -1:
        TObjPlayer__sub_800AAFF8(arg0);
        obj_clearFlags30(arg0, 0x200);
        M2C_FIELD(arg0, u32 *, 0x388) &= ~1;
        M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
        return;
    }
    apply_actor_gravity(arg0, 0, lbl_805D9AE0);
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
}

#undef arg0

typedef s32 M2C_UNK;
#define arg0 ((u8 *)arg0_)
void TObjPlayer__sub_800A9E9C(void *arg0_) {
    f32 var_f31;
    s32 var_r0;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) |= 0x01800000;
        TBoss3VoloptMonitor__sub_8004292C();
        if (M2C_FIELD(arg0, s32 *, 0x380) != 0) {
            if (check_v2_mode__9TObjEneDDFv() == 0) {
                if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                    var_r0 = 7;
                } else {
                    var_r0 = ((s32 *)lbl_804910EC)[M2C_FIELD(arg0, s32 *, 0x368)];
                }
                M2C_FIELD(arg0, s16 *, 0xB8) = (s16) var_r0;
            } else {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        } else {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B205), arg0 + 0x38, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        }
        if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x29C, M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
        }
        break;
    case 1:
        advance_animation_playback(arg0);
        if (M2C_FIELD(arg0, s16 *, 0xB8) == 0) {
            if (check_v2_mode__9TObjEneDDFv() == 0) {
                if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                    var_r0 = 7;
                } else {
                    var_r0 = ((s32 *)lbl_804910EC)[M2C_FIELD(arg0, s32 *, 0x368)];
                }
                M2C_FIELD(arg0, s16 *, 0xB8) = (s16) var_r0;
            }
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        break;
    case 2:
        advance_animation_playback(arg0);
        if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
            var_r0 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801);
        } else {
            var_r0 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B200);
        }
        play_persistent_sound(var_r0, arg0, arg0 + 0x38, 0, 0);
        if (M2C_FIELD(arg0, u8 **, 0x2A8) != NULL) {
            if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                var_f31 = TObjPlayer__sub_800AAF78(arg0, 2);
            } else {
                var_f31 = ((f32 *)lbl_804910E4)[M2C_FIELD(arg0, s32 *, 0x368)];
            }
            {
                Vec_800A9E9C v = *(Vec_800A9E9C *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
                update_enemy_wander_move(arg0, &v, 1, var_f31);
            }
            M2C_FIELD(arg0, f32 *, 0x3A4) += var_f31;
            update_angle__10TObjPlayerFPviPv(arg0, (void *) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), arg0 + 0x308);
        } else {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
        apply_actor_gravity(arg0, 0, lbl_805D9AE0);
        check_object_collisions__10TObjPlayerFPv(arg0);
        check_enemy_body_collisions(arg0);
        break;
    }
}
#undef arg0

void TObjPlayer__sub_800AA10C(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    s16 temp_r0;
    u32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 8:
    case 0:
        if ((((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0) && (find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3D0))) != 0)) {
            update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (1));
        }
        break;
    case 1:
        if (((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0) {
            find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805D9B10 + M2C_FIELD(arg0, f32 *, 0x3D0)));
        }
        temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x2A8);
        if (temp_r0_2 == 0U) {
            update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
            return;
        }
        if (M2C_FIELD(arg0, f32 *, 0x3A4) >= lbl_805D9B14) {
            M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) lbl_805D9AE0;
            if ((M2C_FIELD(arg0, f32 *, 0x354) >= lbl_805D9AE0) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D9B18)) {
                M2C_FIELD(arg0, u16 *, 0x338) = TObjPlayer__sub_800C6D24((void *) (arg0), (f32) (lbl_805D9B1C));
                if (M2C_FIELD(arg0, u16 *, 0x338) != 0xFFFF) {
                    M2C_FIELD(arg0, u32 *, 0x2A8) = find_active_entity_by_id(M2C_FIELD(arg0, u16 *, 0x338));
                    update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (9));
                    return;
                }
                find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805D9B10 + M2C_FIELD(arg0, f32 *, 0x3D0)));
                return;
            }
        } else if (temp_r0_2 != 0U) {
            temp_f31_2 = get_pos_x__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0x318))) * get_pos_x__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0x318)));
            if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x38)) < temp_f31_2) {
                M2C_FIELD(arg0, s16 *, 0x390) = (s16) (M2C_FIELD(arg0, s16 *, 0x390) + 1);
                if ((s16) M2C_FIELD(arg0, s16 *, 0x390) > 3) {
                    M2C_FIELD(arg0, s16 *, 0x390) = 0;
                    TObjPlayer__sub_800C6E34((void *) (arg0), (f32) (lbl_805D9B20));
                }
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (2));
                return;
            }
        } else if (((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0) {
            find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805D9B10 + M2C_FIELD(arg0, f32 *, 0x3D0)));
        }
        break;
    }
}

void TObjPlayer__sub_800AA330(void * _w0) {  }

#pragma push
#pragma opt_common_subs off
void TObjPlayer__sub_800AA334(u8 *arg0) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r29;
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        temp_r3 = ((VObj_18_ca64a0 *)(arg0))->m9(lbl_805D9B24, lbl_805D9B28, lbl_805D9B2C);
        if (temp_r3 != 0) {
            select_actor_lighting((void *) (arg0));
            toggle_particle_effect__10TObjPlayerFv();
            if (M2C_FIELD(arg0, s16 *, 0x392) != 0) {
                set_global_param__8TObjFishFi((void *) (lbl_805D5094));
            } else {
                set_global_param__8TObjFishFi((void *) (M2C_FIELD(arg0, s32 *, 0x24)));
            }
            var_r30 = 1;
            push_matrix();
            lbl_805D5660 = some_id_805c6f74;
            TBoss3Volopt__sub_800A8A7C((Obj_800A8A7C *) (arg0));
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            scale_matrix((int) (0), (f32) (lbl_805D9B30), (f32) (lbl_805D9B30), (f32) (lbl_805D9B30));
            some_id_805c6f74 &= 0xFFFFFBFF;
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
            } else if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
                if (((Self_800AA334 *)arg0)->sub.m8() != 0) {
                    ((Self_800AA334 *)arg0)->sub.m6();
                    var_r29 = 1;
                    if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
                        var_r29 = 0;
                    }
                    if (var_r29 != 0) {
                        if (temp_r3 == 1) {
                            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
                        } else {
                            render_world_model__10TObjPlayerFPv((void *) (arg0));
                        }
                    }
                    ((Self_800AA334 *)arg0)->sub.m7();
                } else {
                    var_r30 = 0;
                }
            } else if (temp_r3 == 1) {
                draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            } else {
                render_world_model__10TObjPlayerFPv((void *) (arg0));
            }
            some_id_805c6f74 = lbl_805D5660;
            pop_matrix();
            restore_scene_lighting();
            end_effect_render__13TParticleCtrlFv();
            if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && (var_r30 != 0)) {
                Vec_800AA334 v = *(Vec_800AA334 *)lbl_8043AC78;
                render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), (void *) (&v), 0);
            }
        }
    }
}
#pragma pop

void TObjPlayer__sub_800AA528(Obj_800AA528 *arg0) {
    switch (arg0->state) {
    case 0: update_timed_state__10TObjPlayerFPv(arg0); return;
    case 1: TObjPlayer__sub_800A9E9C((void *)(arg0)); return;
    case 2: TObjPlayer__sub_800A93E4(arg0); return;
    case 9: TObjPlayer__sub_800A8FB4((void *)(arg0)); return;
    case 4: TObjPlayer__sub_800A9C38(arg0); return;
    case 5: TObjPlayer__sub_800A9718(arg0); return;
    case 7: TObjPlayer__sub_800A8E04((u8 *)(arg0)); return;
    case 8: TObjPlayer__sub_800A8C4C((u8 *)(arg0)); break;
    }
}

void update_synced_state__10TObjPlayerFPv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_800AA330((void *)(arg0));
        return;
    }
    TObjPlayer__sub_800A8B8C((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x2A8) = find_active_entity_by_id(M2C_FIELD(arg0, u16 *, 0x338));
    TObjPlayer__sub_800C6A18(arg0);
    TObjPlayer__sub_800AA10C((u8 *)(arg0));
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjPlayer__sub_800AA528((Obj_800AA528 *)(arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjPlayer__sub_800AA528((Obj_800AA528 *)(arg0));
    TObjPlayer__sub_800AB068(arg0);
    update_prev_position__10TObjPlayerFPv(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
    if (obj_testFlags30(arg0, 0x04000000) == 0) {
        submit_cursor_candidate(arg0, -1);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}
void * create_dubchik__10TObjPlayerFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x41C);
    if (o2 != NULL) {
        o2 = TObjEneDubchik__ct(o2, o, arg0);
    }
    return o2;
}

}
