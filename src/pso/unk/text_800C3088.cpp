#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct VBase_18_9e83f9 { char pad[0x18]; };

struct VObj_18_9e83f9 : VBase_18_9e83f9 {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Stack_800C32DC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct VBase_18_880cfd
{
  char pad[0x18];
};

struct VObj_18_880cfd : VBase_18_880cfd {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct RecoveredFields_800C3088_arg0
{
  u8 unknown_0[0xB8];
  s16 field_B8;
  u8 unknown_BA[0xA];
  f32 field_C4;
  f32 field_C8;
  u8 unknown_CC[0x2C4];
  u8 *field_390;
  u8 unknown_394[0x30];
  int field_3C4;
  u8 unknown_3C8[0x48];
  int field_410;
  int field_414;
  int field_418;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(int);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
u32 TBoss4Type2__sub_800874F4(void *, int);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 enable__13TParticleCtrlFPv(int);
s32 clamp_frame_index__9TObjEneDDFi(int);
s32 check_v2_mode__9TObjEneDDFv();
s32 set_field_378__9TObjEneDDFPvi(void *, int);
s32 transition_enemy_state(void *, int);
s32 noop__9TObjEneDDFv(void *);
s32 fn_800C3A60(void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *);
s32 set_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 TObjPlayer__sub_800C4A5C(int, void *, void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
u32 __nw__7TObjectFUl(int);
s32 create_ex__9TTecMegidFiiii(void *, void *, int, int);
extern u8 *lbl_805D5170;
extern const f32 lbl_805D9FD8;
extern const f32 lbl_805D9FDC;
void fn_800C32DC(u8 *arg0, s32 arg1);
s32 fn_800B91F4(void *);
s32 TObjEneEpsilon__sub_800B95E0(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, int);
s32 transition_enemy_state(void *, int);
s32 noop__9TObjEneDDFv(void *);
s32 fn_800C3A60(void *, int);
s32 set_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FC0;
extern const f32 lbl_805D9FC4;
extern const f32 lbl_805D9FD4;
void fn_800C3088(u8 *arg0, int arg1);
}

extern "C" {

typedef struct RecoveredFields_800C3088_arg0 RecoveredFields_800C3088_arg0;
typedef struct VBase_18_880cfd VBase_18_880cfd;
typedef struct VObj_18_880cfd VObj_18_880cfd;
#define PSO_VCALL_VObj_18_880cfd_m94(_self) (((VObj_18_880cfd *)(_self))->m94())
#define PSO_VCALL_VObj_18_880cfd_m18(_self, _arg0, _arg1) (((VObj_18_880cfd *)(_self))->m18((_arg0), (_arg1)))
#define PSO_VCALL_VObj_18_880cfd_m20(_self, _arg0, _arg1) (((VObj_18_880cfd *)(_self))->m20((_arg0), (_arg1)))
#define PSO_VCALL_VObj_18_880cfd_m23(_self, _arg0, _arg1) (((VObj_18_880cfd *)(_self))->m23((_arg0), (_arg1)))
#define PSO_VCALL_VObj_18_880cfd_m100(_self) (((VObj_18_880cfd *)(_self))->m100())
#define PSO_VCALL_VObj_18_880cfd_m86(_self) (((VObj_18_880cfd *)(_self))->m86())
void fn_800C3088(u8 *arg0, int arg1) {
  int temp_r0;
  u8 *temp_r3;
  u8 *temp_r3_2;
  u8 *temp_r3_3;
  switch (arg1)
  {
    case 4:
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_B8 = 7;
      PSO_VCALL_VObj_18_880cfd_m94(arg0);
      set_child_flags__16TObjEneRe2FlowerFPv((void *) arg0);
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 & 0xFFFFFFF7);
      set_field_378__9TObjEneDDFPvi((void *) arg0, (int) 3);
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_410 = 0;
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_414 = 0;
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_418 = 0;
      return;
    case 3:
      if (((int) ((RecoveredFields_800C3088_arg0 *) arg0)->field_410) >= 0x14)
    {
      transition_enemy_state((void *) arg0, (int) 3);
    }
    case 1:
      return;
    return;
    case 0:
      advance_animation_playback((void *) arg0);
      TObjEneEpsilon__sub_800B95E0((void *) arg0);
      temp_r0 = ((RecoveredFields_800C3088_arg0 *) arg0)->field_414;
      switch (temp_r0)
    {
      case 0:
        if (objInBand__FP7GameObjf((void *) arg0, (f32) ((((RecoveredFields_800C3088_arg0 *) arg0)->field_C4 - lbl_805D9FC0) - ((RecoveredFields_800C3088_arg0 *) arg0)->field_C8)) != 0)
      {
        ((RecoveredFields_800C3088_arg0 *) arg0)->field_418 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_418 + 1);
        if (((f32) ((RecoveredFields_800C3088_arg0 *) arg0)->field_418) >= lbl_805D9FD4)
        {
          ((RecoveredFields_800C3088_arg0 *) arg0)->field_414 = 1;
          ((RecoveredFields_800C3088_arg0 *) arg0)->field_C8 = (f32) lbl_805D9FAC;
        }
      }
      else
        if (objInBand__FP7GameObjf((void *) arg0, (f32) lbl_805D9FC4) != 0)
      {
        if (fn_800B91F4((void *) arg0) != 0)
        {
          temp_r3 = (u8 *) ((RecoveredFields_800C3088_arg0 *) arg0)->field_390;
          if (PSO_VCALL_VObj_18_880cfd_m18(temp_r3, arg0, lbl_805D9FC0) != 0)
          {
            temp_r3_2 = (u8 *) ((RecoveredFields_800C3088_arg0 *) arg0)->field_390;
            PSO_VCALL_VObj_18_880cfd_m20(temp_r3_2, arg0, lbl_805D9FC0);
            temp_r3_3 = (u8 *) ((RecoveredFields_800C3088_arg0 *) arg0)->field_390;
            PSO_VCALL_VObj_18_880cfd_m23(temp_r3_3, arg0, lbl_805D9FD4);
          }
        }
        TBoss3Volopt__sub_8022675C((void *) fn_800C3A60((void *) arg0, (int) 0x4003A814), (void *) (arg0 + 0x38), (int) 0, (int) 0);
        play_effect_if_v2__10TObjPlayerFi((int) (-0x200));
      }
        break;
      case 1:
        ((RecoveredFields_800C3088_arg0 *) arg0)->field_410 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_410 + 1);
        break;
    }
      PSO_VCALL_VObj_18_880cfd_m100(arg0);
      PSO_VCALL_VObj_18_880cfd_m86(arg0);
      noop__9TObjEneDDFv((void *) arg0);
      return;
    case 5:
      ((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 = (int) (((RecoveredFields_800C3088_arg0 *) arg0)->field_3C4 & 0xFFFFFFFD);
      break;
  }
}

void fn_800C32DC(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800C32DC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800C32DC, spC) == 0x4) ? 1 : -1];
    Stack_800C32DC stack;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((VObj_18_9e83f9 *)(arg0))->m94();
        set_child_flags__16TObjEneRe2FlowerFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFF7);
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (3));
        M2C_FIELD(arg0, u32 *, 0x428) = 0U;
        break;
    case 3:
        if ((check_hit_flag__16TObjEneRe2FlowerFPv((void *) (arg0)) == 0) && (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0)) {
            transition_enemy_state((void *) (arg0), (int) (3));
            break;
        }
    case 1:
        break;
    case 0:
        advance_animation_playback((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x428) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x428) = TBoss4Type2__sub_800874F4((void *) (arg0 + 0x3E8), (int) (0xD1));
            temp_r3 = M2C_FIELD(arg0, u32 *, 0x428);
            if (temp_r3 != 0U) {
                enable__13TParticleCtrlFPv((int) (temp_r3));
            }
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x428);
        if (temp_r3_2 != 0U) {
            if (M2C_FIELD(arg0, f32 *, 0xC0) < lbl_805D9FD8) {
                copy_pos__11TNowLoadingFPvPv((int) (temp_r3_2), (void *) (arg0 + 0x3E8));
            } else {
                enable__13TParticleCtrlFPv((int) (temp_r3_2));
            }
        }
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9FDC)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x3DC));
            stack.spC = lbl_805D9FDC + M2C_FIELD(arg0, f32 *, 0x3C);
            if ((get_flag_11__16TObjEneRe2FlowerFPv((void *) (arg0)) != 0) || (check_v2_mode__9TObjEneDDFv() != 0)) {
                create_ex__9TTecMegidFiiii((void *) (arg0), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (clamp_frame_index__9TObjEneDDFi((int) (M2C_FIELD(lbl_805D5170, s32 *, 0x18)))));
            } else {
                temp_r3_3 = __nw__7TObjectFUl((int) (0x104));
                if (temp_r3_3 != 0U) {
                    TObjPlayer__sub_800C4A5C((int) (temp_r3_3), (void *) (arg0), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
                }
            }
            TBoss3Volopt__sub_8022675C((void *) (fn_800C3A60((void *) (arg0), (int) (0x4003A10E))), (void *) (arg0 + 0x3DC), (int) (0), (int) (0));
        }
        ((VObj_18_9e83f9 *)(arg0))->m100();
        ((VObj_18_9e83f9 *)(arg0))->m86();
        noop__9TObjEneDDFv((void *) (arg0));
        break;
    case 5:
        temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x428);
        if (temp_r3_4 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3_4));
            M2C_FIELD(arg0, u32 *, 0x428) = 0U;
        }
        break;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    virtual void m86();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m94();
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

extern "C" {

s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK fn_800B98C0(void *);
M2C_UNK clear_child_flags__16TObjEneRe2FlowerFPv(void *);
extern const f32 lbl_805D9FF0;

s32 get_field_0c__10TObjPlayerFPv(int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
u16 set_squared_value__9TObjEneDDFf(void *, f32);
u16 TBoss8Dragon__sub_800BB664(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
s32 TObjEneEpsilon__sub_800BBE64(void *, void *, int);
M2C_UNK noop__9TObjEneDDFv(void *);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
M2C_UNK set_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 TObjPlayer__sub_80141F84(int, int);
s32 TObjPlayer__sub_801423A4(int, int, void *);
extern const f64 lbl_8043BBD8;
extern const f32 lbl_805D9FE0;
extern const f32 lbl_805D9FE4;
extern const f32 lbl_805D9FE8;
extern const f32 lbl_805D9FEC;

void TObjEneDD__sub_800C34FC(u8 *arg0, s32 arg1) {
    f32 d;
    s32 t;
    u16 idx;

    switch (arg1) {
    case 5:
        break;
    case 4:
        if (M2C_FIELD(arg0, s16 *, 0x326) == 2) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        }
        ((VObj_18 *)(arg0))->m94();
        set_child_flags__16TObjEneRe2FlowerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C4) &= ~8;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x414) = 0;
        M2C_FIELD(arg0, s32 *, 0x420) = 0;
        if (get_flag_11__16TObjEneRe2FlowerFPv(arg0) != 0) {
            TBoss3Volopt__sub_8022675C((void *)0x4003A840, arg0 + 0x38, 0, 0);
        }
        break;
    case 3:
        if (((s32 (*)())check_hit_flag__16TObjEneRe2FlowerFPv)() == 0) {
            d = M2C_FIELD(arg0, f32 *, 0x3AC);
            if (d > lbl_805D9FE0 || M2C_FIELD(arg0, void **, 0x390) == NULL) {
                transition_enemy_state(arg0, 2);
            } else if (d < lbl_805D9FE4) {
                t = TObjPlayer__sub_80141F84(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x420));
                if (t < get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318))) {
                    transition_enemy_state(arg0, 5);
                }
            } else if ((f32)M2C_FIELD(arg0, s32 *, 0x414) > lbl_805D9FE8) {
                transition_enemy_state(arg0, 4);
            }
        }
        break;
    case 0:
        ((M2C_UNK (*)())advance_animation_playback)();
        idx = 0xFFFF;
        if (TObjEneEpsilon__sub_800BBE64(arg0, arg0 + 0x3D0, 0x14) != 0) {
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805D9FEC) {
                if (((VObj_18 *)(arg0))->m97() != 0) {
                    idx = set_squared_value__9TObjEneDDFf(arg0, M2C_FIELD(arg0, f32 *, 0x3AC) - lbl_805D9FEC);
                }
                if (idx == 0xFFFF) {
                    idx = TBoss8Dragon__sub_800BB664(arg0, M2C_FIELD(arg0, f32 *, 0x3AC) - lbl_805D9FEC);
                }
                if (idx != 0xFFFF) {
                    TBoss8Dragon__sub_800B9958(arg0, idx);
                }
            }
        } else if (update_death_check__14TObjEneEpsilonFPv(arg0) == 0) {
            break;
        }
        TObjEneEpsilon__sub_800B96A4(arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x414)++;
        M2C_FIELD(arg0, s32 *, 0x420) = (s32)(lbl_8043BBD8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8)));
        M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x420), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), void **, 8));
        M2C_FIELD(arg0, s32 *, 0x60) = (s16)M2C_FIELD(arg0, s32 *, 0x60);
        ((VObj_18 *)(arg0))->m100();
        ((VObj_18 *)(arg0))->m86();
        noop__9TObjEneDDFv(arg0);
        break;
    }
}

void handle_flower_state_change(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((V_A *) arg0)->m94();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFF7);
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        fn_800B98C0(arg0);
        return;
    case 3:
        if ((((s32 (*)())check_hit_flag__16TObjEneRe2FlowerFPv)() == 0) && (update_linked_position__14TObjEneEpsilonFPv(arg0, lbl_805D9FF0) != 0)) {
            transition_enemy_state(arg0, 3);
        }
    case 5:
    case 1:
        return;
    case 0:
        ((M2C_UNK (*)())advance_animation_playback)();
        ((V_A *) arg0)->m100();
        ((V_A *) arg0)->m86();
        break;
    }
}

}
