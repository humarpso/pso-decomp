#include "types.h"

#include <stddef.h>
#include "pso/misc/TTecPlayerInfluence.h"
#include "pso/misc/TTecAnti.h"
#include "pso/misc/TTecRaFoie.h"
#include "pso/player/TObjPlayer.h"
struct Stack_80237194 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80237194_lbl_8044D8EC {
    s32 value;
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

struct Params_802377FC { u8 pad[0x14]; s16 base; s16 per_level; };

struct Scale_802377FC { u8 pad[0x28]; f32 boost; };

struct RaBarta_802377FC {
    u8 pad[0x78];
    s16 level;
    u8 pad7a[0x88 - 0x7a];
    f32 amount;
    u8 pad8c[0xac - 0x8c];
    s16 per_level;
};

extern "C" {
void sub_80237258__19TTecPlayerInfluenceFv(void* p);
void queue_destruction__7TObjectFv(void *);
s32 approach_vector_in_place(void *, void *, f32);
s32 TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_80237194_lbl_8044D8EC lbl_8044D8EC;
u16 obj_getField1c(void *);
void TTecRaBarta__vt4(Obj_80237900 *self, VObj_80237900 *target);
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
void __ct__7TEffectFv(void *);
void init_collision_body_parts(void *, f32 *, s32);
void *construct_collider_proxy__13TUnk_804AF8A0Fv(void *, void *);
void *__nw__7TObjectFUl(u32);
extern s32 __vt__19TTecPlayerInfluence[];
extern s32 lbl_805D37F0;
Obj_80237310 *TTecPlayerInfluence__ct(Obj_80237310 *self, Owner_80237310 *owner, void *pos, s32 level);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *get_bml_motion(void *, int);
void *get_bml_model(void *, int);
void attach_particle_model(void *, void *, void *, void *, int, f32);
void *spawn_particle_effect(void *, int);
void *create_particle_emitter(void *, int);
void **mem_alloc(int);
extern Profile_80237494 rabarta_band_emitter_table[];
extern Emitter_80237494 lbl_8044DA28;
extern void *technique_effect_bml;
extern void *lbl_805D63B0;
extern const f32 lbl_805DC8C0;
extern const f32 lbl_805DC8C4;
void TTecRaBarta__vt6(Rabarta_80237494 *self, void *pos);
s32 is_technique_ready__8TTecCtrlFv();
s32 calc_technique_parameters(s32, s32, s32);
extern Params_802377FC tech_high_level_linear_power_table;
extern Scale_802377FC lbl_804CC55C;
void calc_parameters__11TTecRaBartaFv(RaBarta_802377FC *self);
}

extern "C" {

void vfunc_7__19TTecPlayerInfluenceFPv(void);
void TTecRaBarta__vt7(void *arg0);
void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1);
s32 play_sound_effect(s32, s32, s32, s32);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);

typedef char RecoveredGlobal_80237194_lbl_8044D8EC_size[sizeof(RecoveredGlobal_80237194_lbl_8044D8EC) == 0xC ? 1 : -1];
void TTecPlayerInfluence::render() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_80237194, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80237194, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80237194, sp10) == 0x8) ? 1 : -1];
    Stack_80237194 stack;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_8044D8EC.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_8044D8EC.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_8044D8EC.value) + 8);
    approach_vector_in_place((void *) (arg0 + 0x3C), (void *) (&stack.sp8), (f32) ((2.7f)));
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x20), (void *) (arg0 + 0x2C), (f32) (*(f32 *)((s8 *)arg0 + 0x3C)));
}

void TTecPlayerInfluence::tick_lifetime() {
    u8 *arg0 = (u8 *)this;
    this->age = (s32) (this->age + 1);
    if ((f32) this->age > *(f32 *)&this->unk_70) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void TTecPlayerInfluence::sub_80237258() { *(f32*)((char*)this + 0xbc) = *(f32*)((char*)this + 0x3c); }

extern s32 __vt__19TTecPlayerInfluence[];

void TTecPlayerInfluence::run_task() {
    sub_80237258__19TTecPlayerInfluenceFv((void*)(this));
    this->tick_lifetime();
}

void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TTecPlayerInfluence;
        if (*(void **)((s8 *)arg0 + 0xDC) != NULL) { free_collision_body_parts(*(void **)((s8 *)arg0 + 0xDC)); }
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
  self->tier = TObjPlayer::get_level_tier(self->level);
  self->f64 = (3.0f);
  self->f70 = (9e+01f);
  self->f3c = (1.0f);
  self->f40 = (1.0f);
  self->f44 = (1.0f);
  self->owner = owner;
  self->f2c = (0.2f);
  self->f30 = (1.0f);
  self->f34 = (1.0f);
  self->f38 = (1.0f);
  self->fa0 = 0;
  self->fb0[0] = (0.0f);
  self->fb0[1] = (0.0f);
  self->fb0[2] = (0.0f);
  self->fbc = 10.0f;
  self->fc0 = (1.0f);
  self->fc4 = 0;
  self->fc8 = 0x40107;
  p = __nw__7TObjectFUl(0xAC);
  if (p != 0)
  {
    p = construct_collider_proxy__13TUnk_804AF8A0Fv(p, self);
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

void TTecPlayerInfluence::vfunc_7(void *) {  }

typedef struct Emitter_80237494 Emitter_80237494;
typedef struct Profile_80237494 Profile_80237494;
typedef struct Rabarta_80237494 Rabarta_80237494;
typedef struct Vec_80237494 Vec_80237494;
void TTecRaBarta__vt6(Rabarta_80237494 *self, void *pos);

void TTecRaBarta__vt7(void *arg0);

void calc_parameters__11TTecRaBartaFv(RaBarta_802377FC *self);

void TTecRaBarta__vt4(Obj_80237900 *self, VObj_80237900 *target);

}
