#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK TObjPlayer__sub_800AA10C(void *);
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
void TObjPlayer__sub_800A9E9C(void *);
void TObjPlayer__sub_800A93E4(void *);
void TObjPlayer__sub_800A8FB4(void *);
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
M2C_UNK TObjPlayer__sub_800180E8(void *, Vec_800A8C4C, Vec_800A8C4C, f32);
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
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
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
}

extern "C" {

s32 TObjPlayer__sub_800A8A34(s32 arg0);
void set_flag_start_effect__10TObjPlayerFPv(u8 *arg0);
s32 try_apply_800a89b0__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_80016C54();
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
    if (TObjPlayer__sub_80016C54() != 0) {
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
        TObjPlayer__sub_800180E8((void *) (arg0), *(Vec_800A8C4C *)(arg0 + 0x290), *(Vec_800A8C4C *)(arg0 + 0x29C), var_f31);
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
            TObjLight__sub_80134194((void *) (arg0));
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
            TObjLight__sub_80134098();
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
    case 1: TObjPlayer__sub_800A9E9C(arg0); return;
    case 2: TObjPlayer__sub_800A93E4(arg0); return;
    case 9: TObjPlayer__sub_800A8FB4(arg0); return;
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
    TObjPlayer__sub_800AA10C(arg0);
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
