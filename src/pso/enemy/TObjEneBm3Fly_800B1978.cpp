#include "pso/enemy/TObjEneBm3Fly.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B1A90_800B1978 { char pad[0x18]; };
struct VObj_800B1A90_800B1978 : Base_800B1A90_800B1978 {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)VV(74)VV(75)VV(76)VV(77)VV(78)VV(79)VV(80)
VV(81)VV(82)VV(83)VV(84)VV(85)VV(86)VV(87)VV(88)VV(89)VV(90)
VV(91)VV(92)VV(93)VV(94)VV(95)VV(96)VV(97)VV(98)VV(99)
#undef VV
    virtual u32 v102();
};
struct Base_800B2214_800B1978 { char pad[0xC]; };
struct VObj_800B2214_800B1978 : Base_800B2214_800B1978 {
    virtual void m2(int);
};

struct VBase_18_6eb1ad
{
  char pad[0x18];
};

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

#include <stddef.h>
struct Stack_800B22C8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_800B22C8_lbl_8043B0FC {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_800B22C8_lbl_80491B4C {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly {
    M2C_UNK value;
    u8 remaining[0x1A8];
};

struct VBase_18_800B23A0 { char pad[0x18]; };

struct VObj_18_800B23A0 : VBase_18_800B23A0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_800B23A0 { s32 x, y, z; };

struct Ent_800B23A0 { s32 a; u32 count; };

struct Pair_800B23A0 { s32 k; Ent_800B23A0 *e; };

extern "C" {
s32 TObjEneBm3Fly__sub_800BB774();
int transition_enemy_state(void*, void*);
void TObjEneBm3Fly__vt61(u8 *arg0);
s32 TObjEneEpsilon__sub_800B96A4();
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 lbl_805D9CEC;
void TObjEneBm3Fly__sub_800B1AEC(void *arg0, s32 arg1);
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
u8 *create_particle_emitter(void *, s32);
s32 enable__13TParticleCtrlFPv(int);
void store_position__13TObjEneBm3FlyFPv(u8 *arg0);
s32 check_v2_mode__9TObjEneDDFv();
s32 set_player_state_default__12TBoss8DragonFPv(void *);
u32 find_entity_by_id(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805D9CB4;
extern const f32 lbl_805D9CE8;
extern const f32 lbl_805D9CF0;

s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TBreakUpMdl__sub_8009705C(int, void *);
u8 *TObjEneBm3FlyNest__sub_800B4158();
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern RecoveredGlobal_800B22C8_lbl_8043B0FC lbl_8043B0FC;
extern RecoveredGlobal_800B22C8_lbl_80491B4C lbl_80491B4C;
extern s32 lbl_805D50E0;
extern s32 TObjEneBm3Fly__data_805D50E4;
extern s32 lbl_805D50E8;
extern f32 *lbl_805D50EC;
extern u8 *lbl_805D50F0;
extern void *TObjEneBm3Fly__data_805D50F4;
extern const f32 TObjEneBm3Fly__data_805D9C6C;
void TObjEneBm3Fly__sub_800B22C8(void);
u16 obj_getField1c(void *);
u8 * init_object__9TObjEneDDFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjEneBm3Fly__sub_800B1F80(void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
extern M2C_UNK __vt__13TObjEneBm3Fly[];
extern s32 lbl_805D2A10;
u8 *TObjEneBm3Fly__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6);
s32 handle_message__13TObjEneBm3FlyFPvi(void *, void *);
s32 TObjEneBm3Fly__sub_800AFDC8(void *, void *);
s32 action__13TObjEneBm3FlyFPvi(void *, void *);
s32 TObjEneBm3Fly__sub_800B012C(void *, void *);
s32 TObjEneBm3Fly__sub_800B02C8(void *, void *);
s32 TObjEneBm3Fly__sub_800B044C(void *, void *);
s32 execute_action__13TObjEneBm3FlyFPvi(void *, void *);
s32 TObjEneBm3Fly__sub_800B0B20(void *, void *);
s32 TObjEneBm3Fly__sub_800B0F70(void *, void *);
s32 TObjEneBm3Fly__sub_800B1214(void *, void *);
void TObjEneBm3Fly__vt85(s32 arg0, u32 arg1, s32 arg2);
void TObjEneBm3Fly__sub_800B1978(u8 *arg0);
void clear_global_flag_400__9TObjEneDDFv(void);
void update_player_state__9TObjEneDDFPv(void *, Vec_800B23A0 *, s32);
s32 get_target_info__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BB878(s32, s32);
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void TObjEneBm5GibonU__sub_803D853C(s32, const char *, ...);
void rotate_matrix_y(s32, s32);
void translate_matrix(s32, f32, f32, f32);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void draw_chunk_object(s32);
void draw_model_motion(s32, Ent_800B23A0 *, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
extern const Vec_800B23A0 lbl_8043B31C;
extern char lbl_8043B328[];
extern char lbl_8043B338[];
extern char lbl_8043B348[];
extern char lbl_8043B358[];
extern char lbl_8043B368[];
extern s32 lbl_805D28B8;
extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9CFC;
extern const f32 lbl_805D9D00;
extern const f32 lbl_805D9D04;
void TObjPlayer__sub_800B23A0(u8 *arg0);
}

extern "C" {

void TObjEneBm3Fly__vt26(void);
void TObjEneBm3Fly__vt59(void);
void TObjEneBm3Fly__vt60(void* p);
void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1);
void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void release_shared_data__13TObjEneBm3FlyFv(void);
void store_position__13TObjEneBm3FlyFPv(u8 *arg0);
void update__13TObjEneBm3FlyFPv(void *arg0);
void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_height_offset__13TObjEneBm3FlyFPv(void *arg0);
void update_state_flag__13TObjEneBm3FlyFPv(void *arg0);
u32 TObjEneDD__sub_800BAC14();
int transition_enemy_state(void*, void*);
u32 TObjEneEpsilon__sub_800B92F8(void *, void *, f32);
s32 TObjEneEpsilon__sub_800B96A4();
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

void TObjEneBm3Fly__sub_800B1978(u8 *arg0) {
    if ((M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x3C)) < 1.2f) {
        M2C_FIELD(arg0, f32 *, 0x42C) = 1.2f + M2C_FIELD(arg0, f32 *, 0x3C);
    }
    M2C_FIELD(arg0, f32 *, 0x300) = M2C_FIELD(arg0, f32 *, 0x42C);
}

void store_position__13TObjEneBm3FlyFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

extern f32 *lbl_805D50EC;

void update_state_flag__13TObjEneBm3FlyFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x350);
    if (TObjEneEpsilon__sub_800B92F8(arg0, M2C_FIELD(temp_r5, void **, 8), *lbl_805D50EC) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (TObjEneDD__sub_800BAC14() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (((VObj_800B1A90_800B1978 *)arg0)->v102() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

#pragma push
#pragma fp_contract on
void TObjEneBm3Fly__sub_800B1AEC(void *arg0, s32 arg1) {
    f32 temp_f1;
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((lbl_805D9CEC * TBoss8Dragon__sub_803D64C0(arg1)) + M2C_FIELD(arg0, f32 *, 0x394));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x44C));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((lbl_805D9CEC * TBoss8Dragon__sub_803D64DC(arg1)) + M2C_FIELD(arg0, f32 *, 0x39C));
}
#pragma pop

void update_height_offset__13TObjEneBm3FlyFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x450));
}
void update__13TObjEneBm3FlyFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x44C));
}
void TObjEneBm3Fly__vt59(void) {  }
void TObjEneBm3Fly__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { transition_enemy_state(p, (void*)6); } }

void TObjEneBm3Fly__vt61(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 8) && (temp_r0 != 9) && (temp_r0 != 7)) {
        if (TObjEneBm3Fly__sub_800BB774() != 0) {
            transition_enemy_state((void*)((void *) (arg0)), (void*)((int) (7)));
            return;
        }
        transition_enemy_state((void*)((void *) (arg0)), (void*)((int) (8)));
    }
}

void TObjEneBm3Fly__vt26(void) {  }

extern M2C_UNK __vt__13TObjEneBm3Fly[];

typedef struct VBase_18_6eb1ad VBase_18_6eb1ad;
typedef struct VObj_18_6eb1ad VObj_18_6eb1ad;
#define PSO_VCALL_VObj_18_6eb1ad_m103(_self) (((VObj_18_6eb1ad *)(_self))->m103())
#define PSO_VCALL_VObj_18_6eb1ad_m81(_self) (((VObj_18_6eb1ad *)(_self))->m81())
#define PSO_VCALL_VObj_18_6eb1ad_m83(_self) (((VObj_18_6eb1ad *)(_self))->m83())
#define PSO_VCALL_VObj_18_6eb1ad_m98(_self) (((VObj_18_6eb1ad *)(_self))->m98())
}

void TObjEneBm3Fly::run_task() {
  u8* arg0 = (u8*)this;
  f32 temp_f2;
  f32 temp_f31;
  f32 var_f30;
  s16 temp_r0;
  u32 temp_r3;
  u8 *temp_r3_2;
  u8 *temp_r3_3;
  u8 *temp_r3_4;
  if (check_demo_mode__10TObjPlayerFv() != 0)
  {
    PSO_VCALL_VObj_18_6eb1ad_m103(arg0);
    return;
  }
  temp_r3 = find_entity_by_id((int) (owner_id));
  if ((temp_r3 == 0U) || (all_parents_unqueued_for_destruction__7TObjectFv((int) temp_r3) == 0))
  {
    queue_destruction__7TObjectFv((void *) arg0);
    return;
  }
  if (PSO_VCALL_VObj_18_6eb1ad_m81(arg0) != 4)
  {
    PSO_VCALL_VObj_18_6eb1ad_m83(arg0);
    temp_r3_2 = (u8 *) (particle_effect);
    if (temp_r3_2 == 0)
    {
      particle_effect = create_particle_emitter(arg0 + 0x2FC, 0xC7);
      temp_r3_3 = (u8 *) (particle_effect);
      if (temp_r3_3 != 0)
      {
        enable__13TParticleCtrlFPv((int) temp_r3_3);
      }
    }
    else
    {
      ;
      if ((((animation_id) == 9) || ((animation_id) == 8)) || ((animation_id) == 7))
      {
        enable__13TParticleCtrlFPv((int) temp_r3_2);
      }
      else
      {
        if (((s32) (alternate_phase)) == 0)
        {
          var_f30 = lbl_805D9CB4;
          alternate_phase = 1;
        }
        else
        {
          var_f30 = lbl_805D9CF0;
          alternate_phase = 0;
        }
        if (check_v2_mode__9TObjEneDDFv() != 0)
        {
          var_f30 *= lbl_805D9CB4;
        }
        temp_f31 = var_f30 * TBoss8Dragon__sub_803D64DC((s32)((int) (facing_angle)));
        temp_f2 = var_f30 * (-TBoss8Dragon__sub_803D64C0((s32)((int) (facing_angle))));
        *((f32 *) (((s8 *) (particle_effect)) + 0x60)) = (f32) ((position.x) + temp_f31);
        *((f32 *) (((s8 *) (particle_effect)) + 0x64)) = (f32) (lbl_805D9CE8 + (position.y));
        *((f32 *) (((s8 *) (particle_effect)) + 0x68)) = (f32) ((position.z) + temp_f2);
      }
    }
  }
  else
  {
    temp_r3_4 = (u8 *) (particle_effect);
    if (temp_r3_4 != 0)
    {
      enable__13TParticleCtrlFPv((int) temp_r3_4);
    }
  }
  store_position__13TObjEneBm3FlyFPv((u8 *)((void *) arg0));
  set_player_state_default__12TBoss8DragonFPv((void *) arg0);
  PSO_VCALL_VObj_18_6eb1ad_m98(arg0);
}

extern "C" {

void TObjEneBm3Fly__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneBm3Fly__sub_800B1214((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        TObjEneBm3Fly__sub_800B0F70((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneBm3Fly__sub_800B0B20((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        execute_action__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        TObjEneBm3Fly__sub_800B044C((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneBm3Fly__sub_800B012C((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        TObjEneBm3Fly__sub_800AFDC8((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneBm3Fly__sub_800B02C8((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        action__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        handle_message__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneBm3Fly;
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TObjEneBm3Fly__data_805D50F4;

typedef char RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly_size[sizeof(RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly) == 0x1AC ? 1 : -1];
u8 *TObjEneBm3Fly__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly *)&__vt__13TObjEneBm3Fly).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A10;
    M2C_FIELD(arg0, u16 *, 0x418) = obj_getField1c(arg2);
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((void *) (arg5)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x41C)), (void *)((void *) (arg2 + 0x38)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x40C)), (void *)((void *) (arg6)));
    TObjEneBm3Fly__sub_800B1F80((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    return arg0;
}

void release_shared_data__13TObjEneBm3FlyFv(void) {
    void *obj = TObjEneBm3Fly__data_805D50F4;
    if (obj != NULL) {
        if (obj != NULL) {
            ((VObj_800B2214_800B1978 *)obj)->m2(1);
        }
        TObjEneBm3Fly__data_805D50F4 = NULL;
    }
}

extern void *tl_04;

void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4A8);
    if (o != NULL) {
        o = TObjEneBm3Fly__ct((u8 *)(o), (M2C_UNK)(tl_04), (u8 *)(arg0), (s32)(arg1), (s32)(arg2), (u8 *)(arg3), (u8 *)(arg4));
    }
    return o;
}
typedef char RecoveredGlobal_800B22C8_lbl_8043B0FC_size[sizeof(RecoveredGlobal_800B22C8_lbl_8043B0FC) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_800B22C8_lbl_80491B4C_size[sizeof(RecoveredGlobal_800B22C8_lbl_80491B4C) == 0x2C ? 1 : -1];
void TObjEneBm3Fly__sub_800B22C8(void) {
    typedef char sp8_offset[(offsetof(Stack_800B22C8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800B22C8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B22C8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800B22C8, sp14) == 0xC) ? 1 : -1];
    Stack_800B22C8 stack;
    s32 temp_r3;
    s32 var_r0;
    u8 *temp_r5;
    lbl_805D50F0 = TObjEneBm3FlyNest__sub_800B4158();
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x10));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TBreakUpMdl__sub_8009705C((int) (temp_r3), (void *) (M2C_FIELD(M2C_FIELD(lbl_805D50F0, u8 **, 0x42C), s32 *, 8)));
    }
    (*(s32 *)&TObjEneBm3Fly__data_805D50F4) = var_r0;
    lbl_805D50E0 = register_boss__6TLobbyFPv((int) (0));
    TObjEneBm3Fly__data_805D50E4 = dispatch_shared_handler_b__6TLobbyFPv((int) (0));
    lbl_805D50E8 = register_object__6TLobbyFPv((int) (0));
    (*(s32 *)&lbl_805D50EC) = dispatch_shared_handler_a__6TLobbyFPv((int) (0));
    stack.sp8 = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(lbl_805D50F0, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(lbl_805D50F0, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (7), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (f32) (M2C_FIELD(&lbl_80491B4C.value, f32 *, 0xC)), (f32) (TObjEneBm3Fly__data_805D9C6C));
}
void TObjPlayer__sub_800B23A0(u8 *arg0) {
    f32 var_f31;
    Ent_800B23A0 *var_r30;
    if (get_target_info__9TObjEneDDFPv(arg0) != 0) {
        switch (M2C_FIELD(arg0, s32 *, 0x38C)) {
        default:
        case 2:
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 0), lbl_8043B328);
            break;
        case 9:
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 0), lbl_8043B338);
            break;
        case 5:
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 0), lbl_8043B348);
            break;
        }
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 1), lbl_8043B358, M2C_FIELD(arg0, s32 *, 0x390));
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 2), lbl_8043B368, M2C_FIELD(arg0, s32 *, 0x394));
    }
    switch (M2C_FIELD(arg0, s32 *, 0x38C)) {
    default:
    case 2:
        var_f31 = lbl_805D9CF8;
        var_r30 = M2C_FIELD(arg0, Pair_800B23A0 **, 0xDC)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD8), s32 *, 4)].e;
        break;
    case 9:
        var_r30 = M2C_FIELD(arg0, Pair_800B23A0 **, 0xDC)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD8), s32 *, 0x74)].e;
        var_f31 = var_r30->count - 1;
        break;
    case 5:
        var_r30 = M2C_FIELD(arg0, Pair_800B23A0 **, 0xDC)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD8), s32 *, 0x34)].e;
        var_f31 = var_r30->count - 1;
        break;
    }
    if (((VObj_18_800B23A0 *)arg0)->m8(lbl_805D9CFC, lbl_805D9D00) != 0) {
        Vec_800B23A0 v = lbl_8043B31C;
        update_player_state__9TObjEneDDFPv(arg0, &v, 1);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        translate_matrix(0, lbl_805D9CF8, lbl_805D9D04, lbl_805D9CF8);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        set_global_flag__10TObjPlayerFv();
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), var_r30, var_f31);
        clear_global_state__10TObjPlayerFv();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    translate_matrix(0, M2C_FIELD(arg0, f32 *, 0x35C), M2C_FIELD(arg0, f32 *, 0x360), M2C_FIELD(arg0, f32 *, 0x364));
    draw_chunk_object(lbl_805D28B8);
    pop_matrix();
}

}
