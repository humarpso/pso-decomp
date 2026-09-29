#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022FE84_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_8022FE84_lbl_804CC55C
{
  const f32 value;
  u8 remaining[0x94];
};

struct RecoveredFields_8022FE84_arg0
{
  u8 unknown_0[0x64];
  f32 field_64;
  u8 unknown_68[0x8];
  f32 field_70;
  u8 unknown_74[0x50];
  s16 field_C4;
  u8 unknown_C6[0x6];
  f32 field_CC;
  f32 field_D0;
  f32 field_D4;
  u8 unknown_D8[0x18];
  s16 field_F0;
};

struct Dmg_80230004 { s32 kind; f32 amount; };

struct Base_80230004 { u8 pad[0x18]; };

struct Target_80230004 : Base_80230004 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void receive(s32 owner, Dmg_80230004 d, s32 x, s32 y, s32 z);
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
};

struct Tec_80230004 { u8 pad[0x1C]; s32 owner; u8 pad20[0xCC - 0x20]; f32 power; u8 padd0[0xF8 - 0xD0]; s32 f8; };

struct TTecFoieData_80230144 { u8 pad[4]; u32 count; };

struct TTecFoie_80230144 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1c[0xC6 - 0x1C];
    s16 band;
    u8 padc8[0x130 - 0xC8];
    void **emitters;
};

extern "C" {
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
s32 TTecCtrl__sub_8022EF78(int);
extern RecoveredGlobal_8022FE84_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_8022FE84_lbl_804CC55C lbl_804CC55C;
void TTecFoie__sub_8022FE84(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32 id, void *pos, s32 a, s32 b);
void queue_destruction__7TObjectFv(void *self);
void TTecFoie__vt6(Tec_80230004 *self, Target_80230004 *target);
void queue_destruction__7TObjectFv(void *self);
void free__11TOBoss4RockFUi(void **);
void __dl__7TObjectFPv(void *);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, s16);
extern TTecFoieData_80230144 TTecFoie__data_8044D13C[];
extern void *__vt__8TTecFoie[];
TTecFoie_80230144 *__dt__8TTecFoieFv(TTecFoie_80230144 *self, s16 deleting);
}

extern "C" {

void TTecFoie__vt4(s32 arg0);
void create__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
void *TTecFoie__ct(void *, void *, void *, void *, void *);
void *TTecFoie__sub_802302A0(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

typedef struct RecoveredFields_8022FE84_arg0 RecoveredFields_8022FE84_arg0;
typedef struct RecoveredGlobal_8022FE84_lbl_804CC510 RecoveredGlobal_8022FE84_lbl_804CC510;
typedef struct RecoveredGlobal_8022FE84_lbl_804CC55C RecoveredGlobal_8022FE84_lbl_804CC55C;
typedef char RecoveredGlobal_8022FE84_lbl_804CC510_size[((sizeof(RecoveredGlobal_8022FE84_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_8022FE84_lbl_804CC55C_size[((sizeof(RecoveredGlobal_8022FE84_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecFoie__sub_8022FE84(u8 *arg0) {
  s32 new_var;
  new_var = TTecCtrl__sub_8022DBC4((int) 0, (int) ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), (int) new_var);
  if ((((s16) ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 2))) * ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4));
  }
  else
  {
    ((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC + ((f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_F0 * ((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4)));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      ((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_CC * lbl_804CC55C.value);
    }
  }
  ((RecoveredFields_8022FE84_arg0 *) arg0)->field_64 = (f32) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_D0 + ((f32) TTecCtrl__sub_8022EF78((int) (((RecoveredFields_8022FE84_arg0 *) arg0)->field_C4 - 4))));
  ((RecoveredFields_8022FE84_arg0 *) arg0)->field_70 = (f32) ((RecoveredFields_8022FE84_arg0 *) arg0)->field_D4;
}

void TTecFoie__vt4(s32 arg0) {
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DC);
    TObjEneDellBiter__sub_80087350(arg0 + 0x20, 0x1DD);
}

void TTecFoie__vt6(Tec_80230004 *self, Target_80230004 *target) {
    Dmg_80230004 d;
    d.kind = 1;
    d.amount = self->power;
    target->receive(self->owner, d, self->f8, 0, -1);
    TBoss3Volopt__sub_8022675C(0x4002A828, target->pos, 0, 0);
    queue_destruction__7TObjectFv(self);
}

void create_ex__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x134);
    if (o != NULL) {
        TTecFoie__sub_802302A0(o, arg0, arg1, arg2, arg3);
    }
}

void create__8TTecFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x134);
    if (o != NULL) {
        TTecFoie__ct(o, arg0, arg1, arg2, arg3);
    }
}
TTecFoie_80230144 *__dt__8TTecFoieFv(TTecFoie_80230144 *self, s16 deleting) {
    if (self) {
        self->vtable = __vt__8TTecFoie;
        for (u32 i = 0; i < TTecFoie__data_8044D13C[self->band].count; ++i) {
            queue_destruction__7TObjectFv(self->emitters[i]);
        }
        free__11TOBoss4RockFUi(self->emitters);
        destroy_technique_effect_resources__10TObjPlayerFPvs(self, 0);
        if (deleting > 0) __dl__7TObjectFPv(self);
    }
    return self;
}

}
