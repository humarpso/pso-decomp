#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_9c7b63
{
  char pad[0x18];
};

struct VObj_18_9c7b63 : VBase_18_9c7b63 {
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
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Stack_800C2AC4
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct VBase_14_00f1d1
{
  char pad[0x14];
};

struct VObj_14_00f1d1 : VBase_14_00f1d1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual int m4();
};

struct RecoveredFields_800C2AC4_arg0
{
  u8 unknown_0[0x3C];
  f32 field_3C;
  u8 unknown_40[0x20];
  int field_60;
  u8 unknown_64[0x54];
  s16 field_B8;
  u8 unknown_BA[0x30A];
  int field_3C4;
  u8 unknown_3C8[0x48];
  int field_410;
  u8 unknown_414[0x10];
  f32 field_424;
};

extern "C" {
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
s32 TBoss8Dragon__sub_800BB7D4(void *, int);
s32 TObjEneDD__sub_800BBA18(void *, int);
s32 fn_800C3A60(void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 clear_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 TObjEneMe3SinowZoa__sub_800D7524(void *);
s32 request_two_effects__10TObjPlayerFPv(void *);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 apply_effect_variant_a__10TObjPlayerFii(void *, int);
s32 TObjPlayer__sub_800D9290(void *, int);
s32 TBoss1Dragon__sub_80143504(void *);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FC4;
extern const f32 lbl_805D9FC8;
extern const f32 lbl_805D9FCC;
void fn_800C2AC4(u8 *arg0, int arg1);
void queue_destruction__7TObjectFv(void *self);
void fn_800C2A88(void *self, s32 msg);
}

extern "C" {

typedef struct RecoveredFields_800C2AC4_arg0 RecoveredFields_800C2AC4_arg0;
typedef struct Stack_800C2AC4 Stack_800C2AC4;
typedef struct VBase_14_00f1d1 VBase_14_00f1d1;
typedef struct VBase_18_9c7b63 VBase_18_9c7b63;
typedef struct VObj_14_00f1d1 VObj_14_00f1d1;
typedef struct VObj_18_9c7b63 VObj_18_9c7b63;
#define PSO_VCALL_VObj_18_9c7b63_m94(_self) (((VObj_18_9c7b63 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9c7b63_m100(_self) (((VObj_18_9c7b63 *)(_self))->m100())
#define PSO_VCALL_VObj_14_00f1d1_m4(_self) (((VObj_14_00f1d1 *)(_self))->m4())

void fn_800C2A88(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        queue_destruction__7TObjectFv(self);
        return;
    }
}

void fn_800C2AC4(u8 *arg0, int arg1) {
  Stack_800C2AC4 stack;
  f32 temp_f1;
  int temp_r0;
  switch (arg1)
  {
    return;
    case 4:
      ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_B8 = 5;
      PSO_VCALL_VObj_18_9c7b63_m94(arg0);
      clear_child_flags__16TObjEneRe2FlowerFPv((void *) arg0);
      ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_3C4 = (int) (((RecoveredFields_800C2AC4_arg0 *) arg0)->field_3C4 & 0xFFFFFFF7);
      refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) arg0);
      TBoss8Dragon__sub_800BB7D4((void *) arg0, (int) 0xF2);
      ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_410 = 0;
      ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_424 = (f32) lbl_805D9FAC;
      TBoss3Volopt__sub_8022675C((void *) fn_800C3A60((void *) arg0, (int) 0x4003A812), (void *) (arg0 + 0x38), (int) 0, (int) 0);
      play_effect_if_v2__10TObjPlayerFi((int) (-0x200));
      return;
    case 3:
      if (((int) ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_410) == 2)
    {
      TObjEneDD__sub_800BBA18((void *) arg0, (int) 0xB);
    }
    case 5:
      return;
    case 0:
      temp_r0 = ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_410;
      switch (temp_r0)
    {
      case 0:
        TBoss1Dragon__sub_80143504((void *) arg0);
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) arg0) != 0)
      {
        ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_410 = 1;
        temp_f1 = lbl_805D9FC4 * TBoss8Dragon__sub_803D64C0((int) ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_60);
        stack.spC = lbl_805D9FAC;
        stack.sp8 = temp_f1;
        stack.sp10 = lbl_805D9FC4 * TBoss8Dragon__sub_803D64DC((int) ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_60);
        TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 - -0x38));
        if (get_flag_11__16TObjEneRe2FlowerFPv((void *) arg0) != 0)
        {
          apply_effect_variant_a__10TObjPlayerFii((void *) (&stack.sp8), (int) 0x32);
          request_two_effects__10TObjPlayerFPv((void *) (&stack.sp8));
          TObjEneMe3SinowZoa__sub_800D7524((void *) (arg0 + 0x3F4));
        }
        else
        {
          TObjPlayer__sub_800D9290((void *) (&stack.sp8), (int) 0x32);
          spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) 0x46);
        }
      }
        PSO_VCALL_VObj_18_9c7b63_m100(arg0);
        return;
      case 1:
        if (get_flag_11__16TObjEneRe2FlowerFPv((void *) arg0) != 0)
      {
        if (PSO_VCALL_VObj_14_00f1d1_m4(((u8 *) arg0) + 1012) != 0)
        {
          ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_410 = 2;
          return;
        }
      }
      else
      {
        ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_3C = (f32) (((RecoveredFields_800C2AC4_arg0 *) arg0)->field_3C - lbl_805D9FC8);
        ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_424 = (f32) (((RecoveredFields_800C2AC4_arg0 *) arg0)->field_424 + lbl_805D9FC8);
        if (((RecoveredFields_800C2AC4_arg0 *) arg0)->field_424 > lbl_805D9FCC)
        {
          ((RecoveredFields_800C2AC4_arg0 *) arg0)->field_410 = 2;
        }
      }
        break;
    }
      break;
  }
}

}
