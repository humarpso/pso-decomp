#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
};

#include <stddef.h>
struct Stack_80237194 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80237194_lbl_8044D8EC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct HitInfo_80237900 { s32 type; f32 power; };

struct VBase_80237900 { char pad[0x18]; };

struct VObj_80237900 : VBase_80237900 {
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
    virtual void m21(void *, HitInfo_80237900 *, void *, s32, s32);
};

struct Obj_80237900 {
    u8 pad0[0x1C];
    void *source;
    u8 pad20[0x88 - 0x20];
    f32 power;
    u8 padP[0xB8 - 0x88 - 4];
    void *contact;
    u8 padC[0xF8 - 0xB8 - 4];
    u16 ids[32];
    s32 cursor;
};

struct Owner_80237310
{
  u8 pad[0x30];
  u32 flags;
};

struct Obj_80237310
{
  s32 f0;
  u8 pad4[0x14];
  void *vt;
  Owner_80237310 *owner;
  f32 pos[3];
  f32 f2c;
  f32 f30;
  f32 f34;
  f32 f38;
  f32 f3c;
  f32 f40;
  f32 f44;
  u8 pad48[0x64 - 0x48];
  f32 f64;
  u8 pad68[0x70 - 0x68];
  f32 f70;
  u8 pad74[0xA0 - 0x74];
  s32 fa0;
  s16 level;
  s16 tier;
  u16 fa8;
  u8 padaa[2];
  s32 fac;
  f32 fb0[3];
  f32 fbc;
  f32 fc0;
  s32 fc4;
  s32 fc8;
  u8 padcc[0xDC - 0xCC];
  void *fdc;
};

typedef struct Vec_80237494
{
  f32 x;
  f32 y;
  f32 z;
} Vec_80237494;

typedef struct Emitter_80237494
{
  u32 entry;
  u32 flags;
  f32 scale;
} Emitter_80237494;

typedef struct Profile_80237494
{
  Emitter_80237494 *emitters;
  u32 count;
} Profile_80237494;

typedef struct Rabarta_80237494
{
  u8 pad0[0x1C];
  u8 *source;
  u8 pad20[0x7A - 0x20];
  s16 band;
  u8 pad7c[0xF4 - 0x7C];
  void **emitters;
} Rabarta_80237494;

extern "C" {
void TTecPlayerInfluence__sub_80237258(void* p);
void run_task__19TTecPlayerInfluenceFv(void *arg0);
void queue_destruction__7TObjectFv(void *);
void TTecPlayerInfluence__sub_802371FC(u8 *arg0);
s32 approach_vector_in_place(void *, void *, f32);
s32 TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_80237194_lbl_8044D8EC lbl_8044D8EC;
extern const f32 lbl_805DC8A0;
void render__19TTecPlayerInfluenceFv(u8 *arg0);
u16 obj_getField1c(void *);
void TTecRaBarta__vt4(Obj_80237900 *self, VObj_80237900 *target);
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
void __ct__7TEffectFv(void *);
void init_collision_body_parts(void *, f32 *, s32);
void *TObjPlayer__sub_801569F4(void *, void *);
void *__nw__7TObjectFUl(u32);
int get_level_tier__10TObjPlayerFi(s32);
extern M2C_UNK __vt__19TTecPlayerInfluence[];
extern s32 lbl_805D37F0;
extern const f32 lbl_805DC8A4;
extern const f32 lbl_805DC8A8;
extern const f32 lbl_805DC8AC;
extern const f32 lbl_805DC8B0;
extern const f32 lbl_805DC8B4;
extern const f32 lbl_805DC8B8;
Obj_80237310 *TTecPlayerInfluence__ct(Obj_80237310 *self, Owner_80237310 *owner, void *pos, s32 level);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *TObjFish__sub_8001ED9C(void *, int);
void *get_bml_model(void *, int);
void attach_particle_model(void *, void *, void *, void *, int, f32);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *spawn_particle_effect(void *, int);
void *create_particle_emitter(void *, int);
void **alloc_buffer__11TOBoss4RockFPv(int);
extern Profile_80237494 lbl_8044D9F8[];
extern Emitter_80237494 lbl_8044DA28;
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
extern const f32 lbl_805DC8C0;
extern const f32 lbl_805DC8C4;
void TTecRaBarta__vt6(Rabarta_80237494 *self, void *pos);
}

extern "C" {

void TTecPlayerInfluence__vt5(void);
void TTecRaBarta__vt7(void *arg0);
void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1);
s32 play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

typedef char RecoveredGlobal_80237194_lbl_8044D8EC_size[sizeof(RecoveredGlobal_80237194_lbl_8044D8EC) == 0xC ? 1 : -1];
void render__19TTecPlayerInfluenceFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80237194, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80237194, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80237194, sp10) == 0x8) ? 1 : -1];
    Stack_80237194 stack;
    stack.sp8 = M2C_FIELD(&lbl_8044D8EC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044D8EC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044D8EC.value, s32 *, 8);
    approach_vector_in_place((void *) (arg0 + 0x3C), (void *) (&stack.sp8), (f32) (lbl_805DC8A0));
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x20), (void *) (arg0 + 0x2C), (f32) (M2C_FIELD(arg0, f32 *, 0x3C)));
}

void TTecPlayerInfluence__sub_802371FC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x68) > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void TTecPlayerInfluence__sub_80237258(void* p) { *(f32*)((char*)p + 0xbc) = *(f32*)((char*)p + 0x3c); }

extern M2C_UNK __vt__19TTecPlayerInfluence[];

void run_task__19TTecPlayerInfluenceFv(void *arg0) {
    TTecPlayerInfluence__sub_80237258((void*)(arg0));
    ((VObj_18 *)(arg0))->m4();
}

void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TTecPlayerInfluence;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { free_collision_body_parts(M2C_FIELD(arg0, void **, 0xDC)); }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef struct Obj_80237310 Obj_80237310;
typedef struct Owner_80237310 Owner_80237310;
Obj_80237310 *TTecPlayerInfluence__ct(Obj_80237310 *self, Owner_80237310 *owner, void *pos, s32 level) {
  void *p;
  __ct__7TEffectFv(self);
  self->vt = __vt__19TTecPlayerInfluence;
  self->f0 = lbl_805D37F0;
  self->fa8 = 0xFFFF;
  VecCopy__FP3VecPC3Vec(self->pos, pos);
  if (level < 0)
  {
    self->level = 0;
  }
  else
    if (level >= 30)
  {
    self->level = 30;
  }
  else
  {
    self->level = level;
  }
  self->tier = get_level_tier__10TObjPlayerFi(self->level);
  self->f64 = lbl_805DC8A4;
  self->f70 = lbl_805DC8A8;
  self->f3c = lbl_805DC8AC;
  self->f40 = lbl_805DC8AC;
  self->f44 = lbl_805DC8AC;
  self->owner = owner;
  self->f2c = lbl_805DC8B0;
  self->f30 = lbl_805DC8AC;
  self->f34 = lbl_805DC8AC;
  self->f38 = lbl_805DC8AC;
  self->fa0 = 0;
  self->fb0[0] = lbl_805DC8B4;
  self->fb0[1] = lbl_805DC8B4;
  self->fb0[2] = lbl_805DC8B4;
  self->fbc = lbl_805DC8B8;
  self->fc0 = lbl_805DC8AC;
  self->fc4 = 0;
  self->fc8 = 0x40107;
  p = __nw__7TObjectFUl(0xAC);
  if (p != 0)
  {
    p = TObjPlayer__sub_801569F4(p, self);
  }
  self->fdc = p;
  if (self->fdc != 0)
  {
    init_collision_body_parts(self->fdc, self->fb0, 1);
  }
  self->fac = 1;
  if (((self->owner != 0) && (obj_getField1c(self->owner) < 4)) && (self->owner->flags & 0x02000000))
  {
    self->fac = 0;
  }
  return self;
}

void TTecPlayerInfluence__vt5(void) {  }

typedef struct Emitter_80237494 Emitter_80237494;
typedef struct Profile_80237494 Profile_80237494;
typedef struct Rabarta_80237494 Rabarta_80237494;
typedef struct Vec_80237494 Vec_80237494;
void TTecRaBarta__vt6(Rabarta_80237494 *self, void *pos) {
  u32 i;
  Vec_80237494 point;
  Emitter_80237494 *binding;
  self->emitters = alloc_buffer__11TOBoss4RockFPv(lbl_8044D9F8[self->band].count * 4);
  for (i = 0; i < lbl_8044D9F8[self->band].count; i++)
  {
    VecCopy__FP3VecPC3Vec(&point, self->source + 0x38);
    if (pos != 0)
    {
      VecCopy__FP3VecPC3Vec(&point, pos);
    }
    self->emitters[i] = create_particle_emitter(&point, lbl_8044D9F8[self->band].emitters[i].entry);
    binding = &lbl_8044D9F8[self->band].emitters[i];
    if ((binding->flags & 0x40) && (self->emitters[i] != 0))
    {
      set_position_xy__10TObjPlayerFPvff(self->emitters[i], binding->scale, binding->scale);
    }
    if (lbl_8044D9F8[self->band].emitters[i].flags & 0x20)
    {
      u32 mid = lbl_8044D9F8[self->band].emitters[i].flags >> 16;
      if (self && self)
      {
      }
      attach_particle_model(self->emitters[i], get_bml_model(lbl_805D63AC, mid), lbl_805D63B0, 0, 0, lbl_805DC8C0);
    }
  }
  if (self->band == 5)
  {
    Vec_80237494 point2;
    Emitter_80237494 *b2 = &lbl_8044DA28;
    f32 dy = lbl_805DC8C4;
    u32 id;
    void *emitter;
    if (pos != 0)
    {
      VecCopy__FP3VecPC3Vec(&point2, pos);
    }
    else
    {
      VecCopy__FP3VecPC3Vec(&point2, self->source + 0x38);
    }
    point2.y += dy;
    emitter = spawn_particle_effect(&point2, b2->entry);
    id = b2->flags >> 16;
    if (emitter != 0)
    {
      attach_particle_model(emitter, get_bml_model(lbl_805D63AC, id), lbl_805D63B0, TObjFish__sub_8001ED9C(lbl_805D63AC, 1), 0, lbl_805DC8C0);
    }
  }
}

void TTecRaBarta__vt7(void *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x7A);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xEC) = play_sound_effect(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xEC) = play_sound_effect(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        return;
    case 2:
    case 3:
        M2C_FIELD(arg0, s32 *, 0xEC) = play_sound_effect(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0xEC) = play_sound_effect(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0xEC) = play_sound_effect(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}
void TTecRaBarta__vt4(Obj_80237900 *self, VObj_80237900 *target) {
    s32 found = 0;
    s32 i;
    for (i = 0; i < 32; i++) {
        if (self->ids[i] == obj_getField1c(target)) {
            found = 1;
        }
    }
    if (found == 0) {
        self->ids[self->cursor] = obj_getField1c(target);
        self->cursor += 1;
        if (self->cursor >= 32) {
            self->cursor = 31;
        }
        HitInfo_80237900 tmp;
        tmp.type = 2;
        tmp.power = self->power;
        HitInfo_80237900 info = tmp;
        target->m21(self->source, &info, self->contact, 5, -1);
    }
}

}
