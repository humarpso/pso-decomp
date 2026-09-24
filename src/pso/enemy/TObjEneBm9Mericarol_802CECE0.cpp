#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_802cf040_802CECE0 { char pad[0x18]; };
struct V_A_802cf040_802CECE0 : Base_A_802cf040_802CECE0 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
    virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43();
    virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47();
    virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51();
    virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55();
    virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59();
    virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63();
    virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67();
    virtual void p68(); virtual void p69(); virtual void p70(); virtual void p71();
    virtual void p72(); virtual void p73(); virtual void p74(); virtual void p75();
    virtual void p76(); virtual void p77(); virtual void p78(); virtual void p79();
    virtual void p80(); virtual void p81(); virtual void p82(); virtual void p83();
    virtual void p84(); virtual void p85();
    virtual void m86();
    virtual void p87(); virtual void p88(); virtual void p89(); virtual void p90();
    virtual void p91(); virtual void p92(); virtual void p93();
    virtual void m94();
    virtual void p95(); virtual void p96(); virtual void p97(); virtual void p98();
    virtual void p99();
    virtual void m100();
};

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

struct Stack_802CF1B4
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct VBase_18_9e83f9
{
  char pad[0x18];
};

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

struct VBase_18_3b55b6
{
  char pad[0x18];
};

struct VObj_18_3b55b6 : VBase_18_3b55b6 {
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
    virtual M2C_UNK m89();
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
    virtual M2C_UNK m100(s32);
};

extern "C" {
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 spawn_dead_spot_here__10TObjPlayerFii(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805DE70C;
extern const f32 lbl_805DE710;
extern const f32 lbl_805DE714;
extern const f32 lbl_805DE718;
void TObjEneBm9Mericarol__sub_802CF1B4(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss8Dragon__sub_800BB780();
s32 TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
extern const f32 lbl_805DE71C;
void TObjEneBm9Mericarol__sub_802CF368(u8 *arg0, s32 arg1);
s32 is_alive__9TObjEneDDFPv(int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 set_facing__10TObjPlayerFPvs(int, int);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(int);
M2C_UNK TObjEneBm9Mericarol__sub_802D073C(void *);
s32 TObjEneBm9Mericarol__sub_802D0854(void *);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
s32 construct__19TObjEneBm9MericarolFPvii(int, void *, int);
void TObjEneBm9Mericarol__sub_802CF4F8(u8 *arg0, s32 arg1);
void queue_destruction__7TObjectFv(void *self);
void TObjEneBm9Mericarol__sub_802CF178(void *self, s32 msg);
}

extern "C" {

void TObjEneBm9Mericarol__sub_802CED3C(void);
void TObjEneBm9Mericarol__sub_802CED40(void* p);
void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1);
void update_particle_effect__19TObjEneBm9MericarolFv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 objInBand__FP7GameObjf(f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);

extern s32 lbl_805D686C;

void update_particle_effect__19TObjEneBm9MericarolFv(void) {
    switch (lbl_805D686C) {
    case 0x21:
    case 0x2B:
    case 0x64:
        begin_effect_render__13TParticleCtrlFv();
        break;
    default:
        end_effect_render__13TParticleCtrlFv();
        break;
    }
    lbl_805D686C += 1;
}

void TObjEneBm9Mericarol__sub_802CED3C(void) {  }
void TObjEneBm9Mericarol__sub_802CED40(void* p) { *(u32*)((char*)p + 0x438) |= 0x2; }

extern const f32 lbl_805DE6F4;

void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        ((V_A_802cf040_802CECE0 *) arg0)->m94();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r5 & ~0x28);
        set_field_378__9TObjEneDDFPvi(arg0, 3, temp_r5);
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AD0F), arg0 + 0x38, 0, 0);
        return;
    case 3:
        if (objInBand__FP7GameObjf(M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DE6F4) != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        ((V_A_802cf040_802CECE0 *) arg0)->m100();
        ((V_A_802cf040_802CECE0 *) arg0)->m86();
        return;
    case 0:
        TBoss1Dragon__sub_80143504((void *)((void *)(arg0)));
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x490);
        M2C_FIELD(arg0, s32 *, 0x490) = (s32) (temp_r4 + 1);
        TObjEneBm9Mericarol__sub_802D073C((void *)((void *)(arg0)));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFFD);
    case 1:
        return;
    }
}
typedef struct Stack_802CF1B4 Stack_802CF1B4;
typedef struct VBase_18_9c7b63 VBase_18_9c7b63;
typedef struct VObj_18_9c7b63 VObj_18_9c7b63;
#define PSO_VCALL_VObj_18_9c7b63_m94(_self) (((VObj_18_9c7b63 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9c7b63_m100(_self) (((VObj_18_9c7b63 *)(_self))->m100())

void TObjEneBm9Mericarol__sub_802CF178(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        queue_destruction__7TObjectFv(self);
        return;
    }
}

void TObjEneBm9Mericarol__sub_802CF1B4(u8 *arg0, s32 arg1) {
  f32 temp_f1;
  Stack_802CF1B4 stack;
  s32 temp_r0;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 6;
      PSO_VCALL_VObj_18_9c7b63_m94(arg0);
      TObjEneBm9Mericarol__sub_802D093C((void *) arg0);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & (~0x28));
      refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) arg0);
      TBoss8Dragon__sub_800BB7D4((void *) arg0, (int) 0xF2);
      *((s32 *) (((s8 *) arg0) + 0x490)) = 0;
      *((f32 *) (((s8 *) arg0) + 0x4A4)) = (f32) lbl_805DE70C;
      TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3AA0B)))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
      return;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x490)))) == 2)
    {
      TObjEneDD__sub_800BBA18((void *)((void *) arg0), (M2C_UNK)((int) 0xC));
    }
    case 5:
      return;
    case 0:
      temp_r0 = *((s32 *) (((s8 *) arg0) + 0x490));
      switch (temp_r0)
    {
      case 0:
        ((s32)TBoss1Dragon__sub_80143504((void *)((void *)((void *) arg0))));
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) arg0) != 0)
      {
        *((s32 *) (((s8 *) arg0) + 0x490)) = 1;
        temp_f1 = lbl_805DE710 * TBoss8Dragon__sub_803D64C0((int) (*((s32 *) (((s8 *) arg0) + 0x60))));
        stack.spC = lbl_805DE70C;
        stack.sp8 = temp_f1;
        stack.sp10 = lbl_805DE710 * TBoss8Dragon__sub_803D64DC((int) (*((s32 *) (((s8 *) arg0) + 0x60))));
        TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        spawn_dead_spot_here__10TObjPlayerFii((void *) (&stack.sp8), (int) 0x32);
        spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) 0x46);
      }
        PSO_VCALL_VObj_18_9c7b63_m100(arg0);
        return;
      case 1:
        *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3C))) - lbl_805DE714);
        *((f32 *) (((s8 *) arg0) + 0x4A4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x4A4))) + lbl_805DE714);
        if ((*((f32 *) (((s8 *) arg0) + 0x4A4))) > lbl_805DE718)
      {
        *((s32 *) (((s8 *) arg0) + 0x490)) = 2;
      }
        break;
    }
      break;
  }
}
typedef struct VBase_18_9e83f9 VBase_18_9e83f9;
typedef struct VObj_18_9e83f9 VObj_18_9e83f9;
#define PSO_VCALL_VObj_18_9e83f9_m94(_self) (((VObj_18_9e83f9 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9e83f9_m100(_self) (((VObj_18_9e83f9 *)(_self))->m100())
#define PSO_VCALL_VObj_18_9e83f9_m86(_self) (((VObj_18_9e83f9 *)(_self))->m86())
void TObjEneBm9Mericarol__sub_802CF368(u8 *arg0, s32 arg1) {
  s16 temp_r3;
  s16 temp_r4;
  s32 temp_r5;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 5;
      PSO_VCALL_VObj_18_9e83f9_m94(arg0);
      TObjEneBm9Mericarol__sub_802D093C((void *) arg0);
      temp_r5 = *((s32 *) (((s8 *) arg0) + 0x438));
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) (temp_r5 & (~0x28));
      TBoss8Dragon__sub_800BB7D4((void *)((void *) arg0), (int)((int) 0xF2));
      TBoss3Volopt__sub_8022675C((M2C_UNK)(((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3AA0C)))), (void *)((u32) (arg0 + 0x38)), (M2C_UNK)(0), (M2C_UNK)(0));
      return;
    case 3:
      if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0)
    {
      temp_r3 = *((s16 *) (((s8 *) arg0) + 0x2B8));
      temp_r4 = *((s16 *) (((s8 *) arg0) + 0x32C));
      if (((temp_r4 <= ((s32) (temp_r3 / 2))) && (temp_r4 >= ((s32) (temp_r3 / 5)))) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= (*((f32 *) (((s8 *) arg0) + 0x440)))))
      {
        TObjEneDD__sub_800BBA18((void *)((void *) arg0), (M2C_UNK)((int) 6));
        return;
      }
      if (calc_boss4_scale__10TObjPlayerFi((s32) arg0) < lbl_805DE71C)
      {
        TObjEneDD__sub_800BBA18((void *)((void *) arg0), (M2C_UNK)((int) 7));
        return;
      }
      TObjEneDD__sub_800BBA18((void *)((void *) arg0), (M2C_UNK)((int) (*((s32 *) (((s8 *) arg0) + 0x378)))));
    }
      return;
    return;
    case 0:
      TBoss1Dragon__sub_80143504((void *)(arg0));
      PSO_VCALL_VObj_18_9e83f9_m100(arg0);
      PSO_VCALL_VObj_18_9e83f9_m86(arg0);
      TObjEneBm9Mericarol__sub_802D073C((void *)((void *)((void *) arg0)));
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFFDFF);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & 0xFFFFFFFD);
      TBoss8Dragon__sub_800BB780();
      break;
  }
}
typedef struct VBase_18_3b55b6 VBase_18_3b55b6;
typedef struct VObj_18_3b55b6 VObj_18_3b55b6;
#define PSO_VCALL_VObj_18_3b55b6_m94(_self) (((VObj_18_3b55b6 *)(_self))->m94())
#define PSO_VCALL_VObj_18_3b55b6_m89(_self) (((VObj_18_3b55b6 *)(_self))->m89())
#define PSO_VCALL_VObj_18_3b55b6_m100(_self, _arg0) (((VObj_18_3b55b6 *)(_self))->m100((_arg0)))
#define PSO_VCALL_VObj_18_3b55b6_m86(_self) (((VObj_18_3b55b6 *)(_self))->m86())
void TObjEneBm9Mericarol__sub_802CF4F8(u8 *arg0, s32 arg1) {
  s32 temp_r0;
  s32 temp_r3;
  s32 temp_r4;
  u32 temp_r3_2;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 2;
      PSO_VCALL_VObj_18_3b55b6_m94(arg0);
      PSO_VCALL_VObj_18_3b55b6_m89(arg0);
      TObjEneBm9Mericarol__sub_802D093C((void *) arg0);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & 0xFFFFFFF7);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) | 0x20);
      *((s32 *) (((s8 *) arg0) + 0x490)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x494)) = 0;
      return;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x490)))) >= 0x1E)
    {
      TObjEneDD__sub_800BBA18((void *)((void *) arg0), (M2C_UNK)((int) 3));
    }
      return;
    case 0:
      ((s32)TBoss1Dragon__sub_80143504((void *) arg0));
      temp_r0 = *((s32 *) (((s8 *) arg0) + 0x490));
      if (temp_r0 == 6)
    {
      temp_r3 = TObjEneBm9Mericarol__sub_802D0854((void *) arg0);
      if (temp_r3 != 0)
      {
        temp_r3_2 = __nw__7TObjectFUl((int) 0x28);
        if (temp_r3_2 != 0U)
        {
          construct__19TObjEneBm9MericarolFPvii((int) temp_r3_2, (void *) arg0, (int) temp_r3);
        }
        *((s32 *) (((s8 *) arg0) + 0x390)) = temp_r3;
        *((s32 *) (((s8 *) arg0) + 0x494)) = 1;
        TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3A808)))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
      }
    }
    else
      if (((temp_r0 == 0x19) && (((s32) (*((s32 *) (((s8 *) arg0) + 0x494)))) != 0)) && (is_alive__9TObjEneDDFPv((int) (*((s32 *) (((s8 *) arg0) + 0x390)))) != 0))
    {
      set_facing__10TObjPlayerFPvs((int) (*((s32 *) (((s8 *) arg0) + 0x390))), (int) 0);
    }
      temp_r4 = *((s32 *) (((s8 *) arg0) + 0x490));
      *((s32 *) (((s8 *) arg0) + 0x490)) = (s32) (temp_r4 + 1);
      PSO_VCALL_VObj_18_3b55b6_m100(arg0, temp_r4);
      PSO_VCALL_VObj_18_3b55b6_m86(arg0);
      TObjEneBm9Mericarol__sub_802D073C((void *)((void *) arg0));
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFBFFFFFF);
      *((s32 *) (((s8 *) arg0) + 0x438)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x438))) & 0xFFFFFFFD);
      break;
  }
}

}
