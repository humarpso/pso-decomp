#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT_800CCC4C { char pad[0x18]; };
struct VObj_CE_800CCC4C : Base_VT_800CCC4C {
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
    PADV
    virtual void m87();
    PADV4
    PADV
    PADV
    virtual void m95();
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

struct VBase_18_7b3d65
{
  char pad[0x18];
};

struct VObj_18_7b3d65 : VBase_18_7b3d65 {
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
    virtual M2C_UNK m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

extern "C" {
void TObjEneEpsilon__sub_800B96A4(void *);
void fn_800B98C0(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_flag__16TObjEneBm5GibonUFPv(void *);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
u8 *TPhotonMylla__sub_80154CB4(u16);
void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
extern const f32 lbl_805DA1A8;
void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1);
s32 objInBand__FP7GameObjf(void *, f32);
int TObjEneBm5GibonU__sub_800CCC6C(void *, void *);
extern const f32 TObjEneBm5GibonU__data_805DA170;
extern const f32 TObjEneBm5GibonU__data_805DA174;
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0);
s32 objInBand__FP7GameObjf(void *, f32);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
extern const f32 TObjEneBm5GibonU__data_805DA178;
void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0);
s32 objInBand__FP7GameObjf(void *, f32);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
extern const f32 TObjEneBm5GibonU__data_805DA174;
extern const f32 lbl_805DA17C;
void TObjEneBm5GibonU__sub_800CCE28(u8 *arg0);
}

extern "C" {

void TObjEneBm5GibonU__sub_800CFE30(void);
void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2);
void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
void advance_anim_frame__16TObjEneBm5GibonUFv(void);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
void update_state__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D086C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D08E4(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
M2C_UNK TObjEneBm5GibonU__sub_800D10A0(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
M2C_UNK TObjEneBm5GibonU__sub_800D184C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D187C(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 get_target_info__9TObjEneDDFPv();
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_center_position__16TObjEneBm5GibonUFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1) { return TObjEneBm5GibonU__sub_800CCC6C((void *)(p), (void *)(_w1)); }

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA170) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA174) != 0)) {
        TObjEneBm5GibonU__sub_800CCC6C((void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)));
    }
}
#pragma pop

void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
        get_attack_state__16TObjEneBm5GibonUFPv((void*)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)));
    }
}

void TObjEneBm5GibonU__sub_800CCE28(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA17C) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA174) != 0)) {
        get_attack_state__16TObjEneBm5GibonUFPv((void*)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)));
    }
}

void update_state__16TObjEneBm5GibonUFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x464);
        TObjEneBm5GibonU__sub_800D10A0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x464)) {
            if (temp_r31 != 0) {
                TObjEneBm5GibonU__sub_800D184C(arg0);
            } else {
                TObjEneBm5GibonU__sub_800D187C(arg0);
            }
        }
        update_center_position__16TObjEneBm5GibonUFPv(arg0);
    }
}

extern s32 TObjEneBm5GibonU__data_805D51D4;
extern s32 TObjEneBm5GibonU__data_805D51D8;

void advance_anim_frame__16TObjEneBm5GibonUFv(void) {
    if (((s32) TObjEneBm5GibonU__data_805D51D4 >= 0x30) && ((s32) TObjEneBm5GibonU__data_805D51D4 < 0x32)) {
        TObjPlayer__sub_803D9214(0, TObjEneBm5GibonU__data_805D51D8);
    }
    TObjEneBm5GibonU__data_805D51D4 += 1;
}

extern const f32 TObjEneBm5GibonU__data_805DA178;

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        ((VObj_CE_800CCC4C *)arg0)->m95();
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        TObjEneBm5GibonU__sub_800D17E8(M2C_FIELD(arg0, s32 *, 0x46C));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 8);
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504(arg0);
        TObjEneBm5GibonU__sub_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
            TBoss3Volopt__sub_8022675C((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA22), arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
        if (temp_r0 == 0x1E) {
            TObjEneBm5GibonU__sub_800D08E4(arg0);
        } else if (temp_r0 == 0x28) {
            TObjEneBm5GibonU__sub_800D086C(arg0);
        }
        ((VObj_CE_800CCC4C *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

void TObjEneBm5GibonU__sub_800CFE30(void) {  }

typedef struct VBase_18_9e83f9 VBase_18_9e83f9;
typedef struct VObj_18_9e83f9 VObj_18_9e83f9;
#define PSO_VCALL_VObj_18_9e83f9_m94(_self) (((VObj_18_9e83f9 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9e83f9_m100(_self) (((VObj_18_9e83f9 *)(_self))->m100())
#define PSO_VCALL_VObj_18_9e83f9_m86(_self) (((VObj_18_9e83f9 *)(_self))->m86())

typedef struct VBase_18_7b3d65 VBase_18_7b3d65;
typedef struct VObj_18_7b3d65 VObj_18_7b3d65;
#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())
void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) - -0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(5));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) (((s32) (lbl_805DA1A8 * calc_boss4_scale__10TObjPlayerFi((s32) arg0))) + 0xA);
      return;
      return;
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) (((s32) (lbl_805DA1A8 * calc_boss4_scale__10TObjPlayerFi((s32) arg0))) + 0xA);
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x518)))) <= 0)
    {
      set_anim_by_state__16TObjEneBm5GibonUFPv(arg0);
    }
    case 5:
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x518))) - 1);
      play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
      TBoss1Dragon__sub_80143504((void *) arg0);
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1) {
  u8 *temp_r3;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
      PSO_VCALL_VObj_18_9e83f9_m94(arg0);
      fn_800B98C0(arg0);
      *((s32 *) (((s8 *) arg0) + 0x478)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 0xFFFFFFFE);
      return;
    case 3:
      if ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 1)
    {
      TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(5));
      return;
    }
      if (((u32) (*((u32 *) (((s8 *) arg0) + 0x390)))) != 0U)
    {
      TObjEneEpsilon__sub_800B96A4(arg0);
      set_anim_by_state__16TObjEneBm5GibonUFPv(arg0);
      temp_r3 = (u8 *) TPhotonMylla__sub_80154CB4(*((u16 *) (((s8 *) arg0) + 0x474)));
      if (temp_r3 != 0)
      {
        set_flag__16TObjEneBm5GibonUFPv(temp_r3);
      }
    }
      return;
    case 0:
      play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
      TBoss1Dragon__sub_80143504(arg0);
      PSO_VCALL_VObj_18_9e83f9_m100(arg0);
      PSO_VCALL_VObj_18_9e83f9_m86(arg0);
      return;
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 0xFFFFFFFE);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x510) = arg1;
    M2C_FIELD(arg0, s16 *, 0x514) = arg2;
}

}
