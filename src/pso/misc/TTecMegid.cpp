#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80235348_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80235348_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80235348_arg0
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

struct RecoveredGlobal_802308A0_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_802308A0_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_802308A0_arg0
{
  u8 unknown_0[0x70];
  f32 field_70;
  u8 unknown_74[0x50];
  s16 field_C4;
  u8 unknown_C6[0x6];
  f32 field_CC;
  u8 unknown_D0[0x4];
  f32 field_D4;
  u8 unknown_D8[0x18];
  s16 field_F0;
};

struct HitInfo_802309AC { s32 type; f32 power; };

struct VBase_802309AC { char pad[0x18]; };

struct VObj_802309AC : VBase_802309AC {
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
    virtual void m21(void *, HitInfo_802309AC *, void *, s32, s32);
};

struct Obj_802309AC {
    u8 pad0[0x1C];
    void *source;
    u8 pad20[0xCC - 0x20];
    f32 power;
    u8 padD0[0xF8 - 0xD0];
    void *contact;
    u8 padFC[0x134 - 0xFC];
    u16 ids[32];
    s32 cursor;
};

struct TTecGiBartaData_80230B48 { u8 pad[4]; u32 count; };

struct TTecGiBarta_80230B48 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1c[0xC6 - 0x1C];
    s16 band;
    u8 padc8[0x130 - 0xC8];
    void **emitters;
};

struct TTecGiBarta_80230C58 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vtable;
    void *owner;
    u8 pad20[0xC8 - 0x20];
    s16 fc8;
    u8 padca[0x12C - 0xCA];
    f32 f12c;
    u8 pad130[4];
    u16 slots[32];
    s32 f174;
};

struct Obj_8023589C {
    u8 pad0[0x134];
    u16 ids[32];
};

struct Obj_80235940 {
    u8 pad0[0x134];
    u16 ids[32];
};

extern "C" {
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_80235348_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_80235348_lbl_804CC55C lbl_804CC55C;
void TTecMegid__sub_80235348(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
void free__11TOBoss4RockFUi(void **);
void __dl__7TObjectFPv(void *);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, s16);
extern TTecGiBartaData_80230B48 TTecMegid__data_8044D874[];
extern void *__vt__9TTecMegid[];
TTecGiBarta_80230B48 *__dt__9TTecMegidFv(TTecGiBarta_80230B48 *self, s16 deleting);
u16 obj_getField1c(void *);
void update_by_state__9TTecMegidFPv(u8 *arg0);
void TTecMegid__sub_802351B4(void *);
void TTecMegid__sub_80235348(u8 *arg0);
void TObjPlayer__sub_8023A7B4();
extern void *__vt__9TTecMegid[];
extern s32 lbl_805D37E8;
extern const f32 lbl_805DC884;
u8 *TTecMegid__ct(u8 *arg0, s32 _w1, s32 _w2, s32 _w3, s32 _w4);
u16 obj_getField1c(void *);
void update_by_state__9TTecMegidFPv(u8 *arg0);
void TTecMegid__sub_802351B4(void *);
void TTecMegid__sub_80235348(u8 *arg0);
void TObjPlayer__sub_8023AA4C();
extern void *__vt__9TTecMegid[];
extern s32 lbl_805D37E8;
extern const f32 lbl_805DC884;
u8 *TTecMegid__sub_80235940(u8 *arg0, s32 _w1, s32 _w2, s32 _w3, s32 _w4);
}

extern "C" {

void create__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void create_ex__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802359E4(void *arg0);
void render__9TTecMegidFv(void);
void update_by_state__9TTecMegidFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(s32 a0 = 0);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void update_by_state__9TTecMegidFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

typedef struct RecoveredFields_80235348_arg0 RecoveredFields_80235348_arg0;
typedef struct RecoveredGlobal_80235348_lbl_804CC510 RecoveredGlobal_80235348_lbl_804CC510;
typedef struct RecoveredGlobal_80235348_lbl_804CC55C RecoveredGlobal_80235348_lbl_804CC55C;
typedef char RecoveredGlobal_80235348_lbl_804CC510_size[((sizeof(RecoveredGlobal_80235348_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80235348_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80235348_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecMegid__sub_80235348(u8 *arg0) {
  s32 new_var;
  new_var = TTecCtrl__sub_8022DBC4((int) 0x12, (int) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), (int) new_var);
  if ((((s16) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_80235348_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x48))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x4A))) * ((RecoveredFields_80235348_arg0 *) arg0)->field_C4));
  }
  else
  {
    ((RecoveredFields_80235348_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_CC + ((f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_F0 * ((RecoveredFields_80235348_arg0 *) arg0)->field_C4)));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      ((RecoveredFields_80235348_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_CC * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x90))));
    }
  }
  ((RecoveredFields_80235348_arg0 *) arg0)->field_64 = (f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_D0 + ((f32) ((((s16) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4) / 5) * 2)));
  ((RecoveredFields_80235348_arg0 *) arg0)->field_70 = (f32) ((RecoveredFields_80235348_arg0 *) arg0)->field_D4;
}

void create__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        TTecMegid__ct((u8 *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void create_ex__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        TTecMegid__sub_80235940((u8 *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void render__9TTecMegidFv(void) {  }

typedef struct RecoveredFields_802308A0_arg0 RecoveredFields_802308A0_arg0;
typedef struct RecoveredGlobal_802308A0_lbl_804CC510 RecoveredGlobal_802308A0_lbl_804CC510;
typedef struct RecoveredGlobal_802308A0_lbl_804CC55C RecoveredGlobal_802308A0_lbl_804CC55C;
typedef char RecoveredGlobal_802308A0_lbl_804CC510_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_802308A0_lbl_804CC55C_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
TTecGiBarta_80230B48 *__dt__9TTecMegidFv(TTecGiBarta_80230B48 *self, s16 deleting) {
    if (self) {
        self->vtable = __vt__9TTecMegid;
        for (u32 i = 0; i < TTecMegid__data_8044D874[self->band].count; ++i) {
            if (self->emitters[i]) {
                queue_destruction__7TObjectFv((void *)(self->emitters[i]));
            }
        }
        free__11TOBoss4RockFUi(self->emitters);
        destroy_technique_effect_resources__10TObjPlayerFPvs(self, 0);
        if (deleting > 0) __dl__7TObjectFPv(self);
    }
    return self;
}

u8 *TTecMegid__ct(u8 *arg0, s32 _w1, s32 _w2, s32 _w3, s32 _w4) {
    s32 i;
    TObjPlayer__sub_8023A7B4();
    M2C_FIELD(arg0, void **, 0x18) = __vt__9TTecMegid;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D37E8;
    TTecMegid__sub_80235348(arg0);
    M2C_FIELD(arg0, f32 *, 0x178) = lbl_805DC884;
    for (i = 0; i < 0x20; i++) {
        ((Obj_8023589C *)arg0)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    TTecMegid__sub_802351B4(arg0);
    update_by_state__9TTecMegidFPv(arg0);
    if (M2C_FIELD(arg0, void **, 0x1C) != 0) {
        M2C_FIELD(arg0, s16 *, 0xC8) = obj_getField1c(M2C_FIELD(arg0, void **, 0x1C));
    }
    return arg0;
}

u8 *TTecMegid__sub_80235940(u8 *arg0, s32 _w1, s32 _w2, s32 _w3, s32 _w4) {
    s32 i;
    TObjPlayer__sub_8023AA4C();
    M2C_FIELD(arg0, void **, 0x18) = __vt__9TTecMegid;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D37E8;
    TTecMegid__sub_80235348(arg0);
    M2C_FIELD(arg0, f32 *, 0x178) = lbl_805DC884;
    for (i = 0; i < 0x20; i++) {
        ((Obj_80235940 *)arg0)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    TTecMegid__sub_802351B4(arg0);
    update_by_state__9TTecMegidFPv(arg0);
    if (M2C_FIELD(arg0, void **, 0x1C) != 0) {
        M2C_FIELD(arg0, s16 *, 0xC8) = obj_getField1c(M2C_FIELD(arg0, void **, 0x1C));
    }
    return arg0;
}

void fn_802359E4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1E) > (s16) M2C_FIELD(arg0, s16 *, 0x1C)) {
        queue_destruction__7TObjectFv((void *)((void *)(arg0)));
    }
}

}
