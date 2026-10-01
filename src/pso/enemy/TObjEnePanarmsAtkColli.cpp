#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_beae68
{
  char pad[0x18];
};

struct VObj_18_beae68 : VBase_18_beae68 {
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
    virtual M2C_UNK m92();
};

struct VBase_18_f56c51
{
  char pad[0x18];
};

struct VObj_18_f56c51 : VBase_18_f56c51 {
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
    virtual M2C_UNK m100(f32);
};

struct RecoveredFields_800E3970_arg0
{
  u8 unknown_0[0x30];
  s32 field_30;
  u8 unknown_34[0x8];
  f32 field_3C;
  u8 unknown_40[0x8];
  f32 field_48;
  u8 unknown_4C[0x58];
  u8 *field_A4;
  u8 unknown_A8[0x31C];
  s32 field_3C4;
  u8 unknown_3C8[0x68];
  f32 field_430;
};

struct Vec_800E37E4 { f32 x, y, z; };

struct Obj_800E37E4 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1C[0x1C];
    Vec_800E37E4 pos;
    u8 pad44[0x308 - 0x44];
    Vec_800E37E4 scale;
    u8 pad314[0x374 - 0x314];
    s32 type;
    f32 f378;
    f32 f37C;
    s32 f380;
    s32 f384;
    s32 f388;
    f32 f38C;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_800E3428(void *);
M2C_UNK fn_800E35C8(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
void run_task__22TObjEnePanarmsAtkColliFv(u8 *arg0);
M2C_UNK set_flag_0x100__23TObjEneMe3ShinowaMirageFPv();
extern f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 lbl_805DA5BC;
extern const f32 lbl_805DA5C0;
extern f32 TObjEneMe3ShinowaMirage__data_805DA5C4;
void TObjEneMe3ShinowaMirage__vt113(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *dispatch_shared_handler_a__6TLobbyFPv(int);
void set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
void initialize__9TObjEnemyFPv(void *, void *);
int TBoss3Volopt__sub_8022675C(void *, void *, void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TNpcPlayer__sub_803D97B4(void *);
extern s32 lbl_80495A80[];
extern M2C_UNK __vt__22TObjEnePanarmsAtkColli[];
extern s32 lbl_805D2AC0;
extern const f32 lbl_805DA5A0;
extern const f32 lbl_805DA5A4;
extern const f32 lbl_805DA5A8;
extern const f32 lbl_805DA5AC;
extern const f32 lbl_805DA5B0;
extern const f32 lbl_805DA5B4;
void *TObjEnePanarmsAtkColli__ct(Obj_800E37E4 *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
}

extern "C" {

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1);
void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);

void run_task__22TObjEnePanarmsAtkColliFv(u8 *arg0) {
    s32 temp_r0_2;
    if (--M2C_FIELD(arg0, s32 *, 0x380) < 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    TBoss4Zako__sub_803D8910(arg0 + 0x38, arg0 + 0x308);
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) (M2C_FIELD(arg0, f32 *, 0x378) + M2C_FIELD(arg0, f32 *, 0x37C));
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        fn_800E35C8(arg0);
        return;
    case 1:
        TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BA2A), arg0, arg0 + 0x38, 0, 0);
        fn_800E3428(arg0);
        return;
    }
}

void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TObjEnePanarmsAtkColli__ct((Obj_800E37E4 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
    return o;
}

extern M2C_UNK __vt__22TObjEnePanarmsAtkColli[];

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEnePanarmsAtkColli;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef struct RecoveredFields_800E3970_arg0 RecoveredFields_800E3970_arg0;
typedef struct VBase_18_beae68 VBase_18_beae68;
typedef struct VBase_18_f56c51 VBase_18_f56c51;
typedef struct VObj_18_beae68 VObj_18_beae68;
typedef struct VObj_18_f56c51 VObj_18_f56c51;
#define PSO_VCALL_VObj_18_beae68_m92(_self) (((VObj_18_beae68 *)(_self))->m92())
#define PSO_VCALL_VObj_18_f56c51_m100(_self, _arg0) (((VObj_18_f56c51 *)(_self))->m100((_arg0)))

#define self arg0
void *TObjEnePanarmsAtkColli__ct(Obj_800E37E4 *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 scale;
    initialize__9TObjEnemyFPv(self, arg1);
    self->vt = __vt__22TObjEnePanarmsAtkColli;
    self->f0 = lbl_805D2AC0;
    VecCopy__FP3VecPC3Vec(&self->pos, arg2);
    VecCopy__FP3VecPC3Vec(&self->scale, arg3);
    self->type = (s32)arg4;
    self->f384 = 0;
    self->f388 = 0;
    set_param__12TObjEneLappyFPvi(self, 0x15);
    self->f38C = ((f32 *)dispatch_shared_handler_a__6TLobbyFPv(0x31))[lbl_80495A80[self->type]];
    if (self->f38C < 0.0f) {
        self->f38C = 0.0f;
    }
    self->scale.y = lbl_805DA5A0;
    if (lbl_805DA5A0 == TBoss6Kakusan__sub_803D8BD8(&self->scale)) {
        self->scale.x = lbl_805DA5A4;
    }
    TNpcPlayer__sub_803D97B4(&self->scale);
    switch (self->type) {
    case 0:
        TBoss3Volopt__sub_8022675C((void *)copy_target_state__14TObjEnePanarmsFPvPv(self, 0x4003BC2B), &self->pos, 0, 0);
        self->f378 = lbl_805DA5B0;
        self->f37C = lbl_805DA5B4;
        self->f380 = 0xC;
        scale = lbl_805DA5AC;
        break;
    case 1:
        self->f378 = lbl_805DA5B0;
        self->f37C = lbl_805DA5A0;
        self->f380 = 0xC;
        scale = lbl_805DA5A8;
        break;
    }
    self->scale.x *= scale;
    self->scale.z *= scale;
    return arg0;
}
#undef self

void TObjEneMe3ShinowaMirage__vt113(u8 *arg0, s32 arg1) {
  f32 temp_f1;
  long new_var;
  switch (arg1)
  {
    case 4:
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 = (s32) (((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 & 0xFFFFFFFC);
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 = (s32) (((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 | 0x200);
      PSO_VCALL_VObj_18_beae68_m92(arg0);
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_430 = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
      return;
    case 3:
      if (((RecoveredFields_800E3970_arg0 *) arg0)->field_430 <= lbl_805DA5BC)
    {
      new_var = ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 & 0xFFFFFDFF;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 = (s32) new_var;
      set_flag_0x100__23TObjEneMe3ShinowaMirageFPv();
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C = (f32) lbl_805DA5C0;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_48 = (f32) lbl_805DA5C0;
      *((f32 *) (((s8 *) ((RecoveredFields_800E3970_arg0 *) arg0)->field_A4) + 0x20)) = (f32) lbl_805DA5C0;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_30 = (s32) (((RecoveredFields_800E3970_arg0 *) arg0)->field_30 | 0x800);
    }
    case 5:
      return;
    case 0:
      temp_f1 = ((RecoveredFields_800E3970_arg0 *) arg0)->field_430;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_430 = (f32) (temp_f1 - TObjEneMe3ShinowaMirage__data_805DA5C4);
      PSO_VCALL_VObj_18_f56c51_m100(arg0, temp_f1);
      break;
  }
  return;
}

}
