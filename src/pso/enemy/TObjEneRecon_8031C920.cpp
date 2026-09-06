#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_83f71d
{
  char pad[0x18];
};

struct VObj_18_83f71d : VBase_18_83f71d {
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
    virtual M2C_UNK m87(s32);
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
    virtual void m100();
    virtual void m101();
    virtual s32 m102(f32);
};

extern "C" {
s32 update_death_check__14TObjEneEpsilonFPv(void *);
void update_velocity__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BBA18(void *, s16);
void TBoss1Dragon__sub_80143504(void *);
void spawn_trap_b__12TObjEneReconFi(s32);
void sync_height__12TObjEneReconFPv(void *);
extern const f32 TObjEneRecon__data_805DF3E4;
void TObjEneRecon__sub_8031D380(u8 *arg0, s32 arg1);
}

extern "C" {

typedef struct VBase_18_83f71d VBase_18_83f71d;
typedef struct VObj_18_83f71d VObj_18_83f71d;
#define PSO_VCALL_VObj_18_83f71d_m94(_self) (((VObj_18_83f71d *)(_self))->m94())
#define PSO_VCALL_VObj_18_83f71d_m102(_self, _arg0) (((VObj_18_83f71d *)(_self))->m102((_arg0)))
#define PSO_VCALL_VObj_18_83f71d_m87(_self, _arg0) (((VObj_18_83f71d *)(_self))->m87((_arg0)))
void TObjEneRecon__sub_8031D380(u8 *arg0, s32 arg1) {
  s32 temp_r4;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      PSO_VCALL_VObj_18_83f71d_m94(arg0);
      *((s32 *) (((s8 *) arg0) + 0x444)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x444))) & 0xFFFFFFFE);
      *((s32 *) (((s8 *) arg0) + 0x444)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x444))) | 2);
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x01000000);
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x3B0)))) >= 0x96)
    {
      TObjEneDD__sub_800BBA18(arg0, 5);
    }
    case 5:
      return;
    case 0:
      TBoss1Dragon__sub_80143504(arg0);
      if ((update_death_check__14TObjEneEpsilonFPv(arg0) != 0) || (PSO_VCALL_VObj_18_83f71d_m102(arg0, TObjEneRecon__data_805DF3E4) != 0))
    {
      TObjEneDD__sub_800BBA18(arg0, 4);
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x3B0)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3B0))) + 1);
    }
      sync_height__12TObjEneReconFPv(arg0);
      update_velocity__9TObjEneDDFPv(arg0);
      temp_r4 = *((s32 *) (((s8 *) arg0) + 0x60));
      *((s32 *) (((s8 *) arg0) + 0x60)) = (s32) ((u16) (temp_r4 + 0x400));
      PSO_VCALL_VObj_18_83f71d_m87(arg0, temp_r4);
      spawn_trap_b__12TObjEneReconFi((s32) arg0);
      break;
  }
  return;
}

}
