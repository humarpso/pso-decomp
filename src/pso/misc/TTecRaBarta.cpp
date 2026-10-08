#include "types.h"
#pragma readonly_strings on
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
void TTecPlayerInfluence__sub_80237258(void* p);
void run_task__19TTecPlayerInfluenceFv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
#define queue_destruction__7TObjectFv ((void (*)(void *))queue_destruction__7TObjectFv)
void tick_lifetime__19TTecPlayerInfluenceFPv(u8 *arg0);
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
void *construct_collider_proxy__10TObjPlayerFPv(void *, void *);
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
void *get_bml_motion(void *, int);
void *get_bml_model(void *, int);
void attach_particle_model(void *, void *, void *, int, int, f32);
#define attach_particle_model ((void (*)(void *, void *, void *, void *, int, f32))attach_particle_model)
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *spawn_particle_effect(void *, int);

void *create_particle_emitter(void *, int);
void **alloc_buffer__11TOBoss4RockFPv(int);
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
void TTecRaBarta__vt6(Rabarta_80237494 *self, void *pos);
s32 is_technique_ready__8TTecCtrlFv();
void copy_params__8TTecAntiFPvPv(void *, s32);
s32 calc_technique_parameters(s32, s32, s32);
extern Params_802377FC tech_high_level_linear_power_table;
extern Scale_802377FC lbl_804CC55C;
void calc_parameters__11TTecRaBartaFv(RaBarta_802377FC *self);

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
void render__19TTecPlayerInfluenceFv(u8 *arg0);

void tick_lifetime__19TTecPlayerInfluenceFPv(u8 *arg0);

void TTecPlayerInfluence__sub_80237258(void* p);

extern M2C_UNK __vt__19TTecPlayerInfluence[];

void run_task__19TTecPlayerInfluenceFv(void *arg0);

void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1);

typedef struct Obj_80237310 Obj_80237310;
typedef struct Owner_80237310 Owner_80237310;
Obj_80237310 *TTecPlayerInfluence__ct(Obj_80237310 *self, Owner_80237310 *owner, void *pos, s32 level);

void TTecPlayerInfluence__vt5(void);

extern "C" {
extern const Emitter_80237494 lbl_8044D920[3] = {{473, 0, 0.0f}, {475, 0, 0.0f}, {479, 0x20060, 1.0f}};
extern const Emitter_80237494 lbl_8044D944[3] = {{473, 0, 0.0f}, {475, 0x40, 1.2f}, {404, 0x20060, 1.2f}};
extern const Emitter_80237494 lbl_8044D968[3] = {{473, 0, 0.0f}, {475, 0x40, 1.2f}, {405, 0x20060, 1.4f}};
extern const Emitter_80237494 lbl_8044D98C[3] = {{473, 0, 0.0f}, {406, 0, 0.0f}, {409, 0x30060, 1.6f}};
extern const Emitter_80237494 lbl_8044D9B0[3] = {{473, 0, 0.0f}, {406, 0x40, 1.2f}, {410, 0x30060, 1.8f}};
extern const Emitter_80237494 lbl_8044D9D4[3] = {{473, 0, 0.0f}, {407, 0, 0.0f}, {411, 0x40060, 1.0f}};
extern const Profile_80237494 rabarta_band_emitter_table[6] = {
    {(Emitter_80237494 *)lbl_8044D920, 3}, {(Emitter_80237494 *)lbl_8044D944, 3}, {(Emitter_80237494 *)lbl_8044D968, 3},
    {(Emitter_80237494 *)lbl_8044D98C, 3}, {(Emitter_80237494 *)lbl_8044D9B0, 3}, {(Emitter_80237494 *)lbl_8044D9D4, 3},
};
extern const Emitter_80237494 lbl_8044DA28 = {470, 0x10828, 0.0f};
const char *TTecRaBarta_class_name = "TTecRaBarta";
__declspec(section ".sdata2") extern const f32 lbl_805DC8C4;
}
typedef struct Emitter_80237494 Emitter_80237494;
typedef struct Profile_80237494 Profile_80237494;
typedef struct Rabarta_80237494 Rabarta_80237494;
typedef struct Vec_80237494 Vec_80237494;
void TTecRaBarta__vt6(Rabarta_80237494 *self, void *pos) {
  u32 i;
  Vec_80237494 point;
  Emitter_80237494 *binding;
  self->emitters = alloc_buffer__11TOBoss4RockFPv(rabarta_band_emitter_table[self->band].count * 4);
  for (i = 0; i < rabarta_band_emitter_table[self->band].count; i++)
  {
    VecCopy__FP3VecPC3Vec(&point, self->source + 0x38);
    if (pos != 0)
    {
      VecCopy__FP3VecPC3Vec(&point, pos);
    }
    self->emitters[i] = create_particle_emitter(&point, rabarta_band_emitter_table[self->band].emitters[i].entry);
    binding = &rabarta_band_emitter_table[self->band].emitters[i];
    if ((binding->flags & 0x40) && (self->emitters[i] != 0))
    {
      set_position_xy__10TObjPlayerFPvff(self->emitters[i], binding->scale, binding->scale);
    }
    if (rabarta_band_emitter_table[self->band].emitters[i].flags & 0x20)
    {
      u32 mid = rabarta_band_emitter_table[self->band].emitters[i].flags >> 16;
      if (self && self)
      {
      }
      attach_particle_model(self->emitters[i], get_bml_model(lbl_805D63AC, mid), lbl_805D63B0, 0, 0, (1.0f));
    }
  }
  if (self->band == 5)
  {
    Vec_80237494 point2;
    Emitter_80237494 *b2 = (Emitter_80237494 *)&lbl_8044DA28;
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
      attach_particle_model(emitter, get_bml_model(lbl_805D63AC, id), lbl_805D63B0, get_bml_motion(lbl_805D63AC, 1), 0, (1.0f));
    }
  }
}

extern const f32 lbl_805DC8C4 = 5.0f;

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

void calc_parameters__11TTecRaBartaFv(RaBarta_802377FC *self) {
    s32 res = calc_technique_parameters(5, self->level, 0xFFFF);
    copy_params__8TTecAntiFPvPv(&self->amount, res);
    if (self->level >= 0xF && is_technique_ready__8TTecCtrlFv() == 0) {
        self->amount = tech_high_level_linear_power_table.base + tech_high_level_linear_power_table.per_level * self->level;
        return;
    }
    self->amount = self->amount + (f32)(self->per_level * self->level);
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        self->amount = self->amount * lbl_804CC55C.boost;
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

#undef queue_destruction__7TObjectFv

#undef attach_particle_model

#define TTecRaBarta_class_name ((u32)TTecRaBarta_class_name)
#define __nw__7TObjectFUl ((void * (*)(int))__nw__7TObjectFUl)
#define rabarta_band_emitter_table ((struct Profile_80237A94 *)rabarta_band_emitter_table)
#define __dl__7TObjectFPv ((M2C_UNK (*)(void *))__dl__7TObjectFPv)
#define spawn_particle_effect ((void * (*)(Vec_80237FB8 *, int))spawn_particle_effect)
#define calc_parameters__11TTecRaBartaFv ((void (*)(void *))calc_parameters__11TTecRaBartaFv)

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_80237DAC { f32 x, y, z; };
#define VecCopy__FP3VecPC3Vec ((void (*)(Vec_80237DAC *, const Vec_80237DAC *))VecCopy__FP3VecPC3Vec)

struct RafoieBurst_80237DAC { s32 entry; s32 flags; f32 scale; };

struct RafoieBursts_80237DAC { RafoieBurst_80237DAC *entries; u32 count; };

struct Obj_80237DAC {
    u8 pad0[0x20];
    u16 band;
    u8 pad22[0x28 - 0x22];
    Vec_80237DAC position;
};

struct VBase_18_80237CCC { char pad[0x18]; };

struct VObj_18_80237CCC : VBase_18_80237CCC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
    virtual void m7();
};

typedef struct Ids_80237CCC { u8 pad[0xF8]; u16 ids[32]; } Ids_80237CCC;

typedef struct Vec_80237FB8 { f32 x, y, z; } Vec_80237FB8;

typedef struct TTecRaFoie_80237FB8 {
    u8 pad0[0x7C];
    Vec_80237FB8 target;
    u8 pad1[0xEC - 0x88];
    s32 target_count;
    u16 first_id;
    u8 pad2[0x148 - 0xF2];
    s32 explicit_position;
} TTecRaFoie_80237FB8;

typedef struct TObjPlayer_80237FB8 {
    u8 pad0[0x2FC];
    Vec_80237FB8 pos;
} TObjPlayer_80237FB8;

struct VBase_18_80237BD8 { char pad[0x18]; };

struct VObj_18_80237BD8 : VBase_18_80237BD8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
    virtual void m7();
};

struct Eff_80237BD8 { u8 pad[0xc]; f32 scale; };

struct Holder_80237BD8 { u8 pad[0xa4]; Eff_80237BD8 *eff; };

struct Self_80237BD8 {
    u32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    void *source;
    u8 pos[0xc];
    u8 pad2c[0x7c - 0x2c];
    u8 src_pos[0xc];
    u8 pad88[0x90 - 0x88];
    f32 range;
    u8 pad94[0xb4 - 0x94];
    u16 fb4;
    u8 padb6[0xe8 - 0xb6];
    Holder_80237BD8 *holder;
    u8 padec[4];
    s32 ff0;
    u8 padf4[4];
    u16 ids[32];
    s32 f138;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 find_entity_by_id(int);
M2C_UNK apply_technique_to_area_targets(void *, int);
void run_task__11TTecRaBartaFv(u8 *arg0);

void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *spawn_particle_effect_with_flags(Vec_80237DAC *, s32, s32);
extern RafoieBursts_80237DAC rafoie_burst_table[];
extern const f32 lbl_805DC8C8;
void spawn_rafoie_explosion_bursts(Obj_80237DAC *self);
u16 obj_getField1c(void *);
void construct_area_technique_base(void *, void *, void *, void *, void *);

extern M2C_UNK __vt__11TTecRaBarta[];
void *construct_area__11TTecRaBartaFPvPvPvPv(void *self, void *source, void *origin, void *level);
s32 is_split_screen();
void *get_bml_model(void *, int);
void attach_particle_model(void *, void *, void *, int, int, f32);
u32 find_entity_by_id(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(TObjPlayer_80237FB8 *);
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
extern const f32 TTecRaFoie__data_805DC8CC;
void TTecRaFoie__vt6(TTecRaFoie_80237FB8 *self);
struct Profile_80237A94 { void *entries; u32 count; };
struct Self_80237A94 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1[0x7A - 0x1C];
    s16 band;
    u8 pad2[0xEC - 0x7C];
    void *emitters;
    u8 pad3[0xF4 - 0xF0];
    void **objs;
};

M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK stop_sound_request(void *);
M2C_UNK destroy_technique_base__9TTecLukerFPvs(void *, int);

u16 obj_getField1c(void *);
void construct_area_technique_base(void *, void *, void *, void *, void *);

extern M2C_UNK __vt__11TTecRaBarta[];
void *TTecRaBarta__ct(void *self_, void *source, void *origin, void *pos, void *level);
}

extern "C" {

void TTecRaFoie__vt7(u8 *arg0);
void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__11TTecRaBartaFv(void);
s32 play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecRaBarta__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        construct_area__11TTecRaBartaFPvPvPvPv((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
}

struct Self_80237A94 *__dt__11TTecRaBartaFv(struct Self_80237A94 *self, s16 arg1) {
    u32 i;
    void *obj;

    if (self != NULL) {
        self->vtable = __vt__11TTecRaBarta;
        for (i = 0; i < rabarta_band_emitter_table[self->band].count; i++) {
            obj = self->objs[i];
            if (obj != NULL) {
                queue_destruction__7TObjectFv(obj);
            }
        }
        stop_sound_request(self->emitters);
        free__11TOBoss4RockFUi(self->objs);
        destroy_technique_base__9TTecLukerFPvs((void *) (self), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (self));
        }
    }
    return self;
}

void render__11TTecRaBartaFv(void) {  }

void run_task__11TTecRaBartaFv(u8 *arg0) {
    s32 temp_r4;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r4 + 1);
    apply_technique_to_area_targets((void *) (arg0), (int) (temp_r4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) > (s16) M2C_FIELD(arg0, s16 *, 0xA8)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

#pragma push
#pragma opt_common_subs off
struct Vec_80237DAC;
typedef s32 M2C_UNK;
#define self ((Self_80237BD8 *)self_)
void *TTecRaBarta__ct(void *self_, void *source, void *origin, void *pos, void *level) {
    s32 i;
    typedef Vec_80237DAC *(*VecCopyFn_80237BD8)(void *, void *);
    construct_area_technique_base(self_, source, origin, pos, level);
    self->vt = __vt__11TTecRaBarta;
    self->f0 = TTecRaBarta_class_name;
    calc_parameters__11TTecRaBartaFv(self);
    self->ff0 = 1;
    ((VecCopyFn_80237BD8)VecCopy__FP3VecPC3Vec)(self->pos, ((VecCopyFn_80237BD8)VecCopy__FP3VecPC3Vec)(self->src_pos, pos));
    if (self->holder != 0) {
        self->holder->eff->scale = self->range;
    }
    for (i = 0; i < 32; i++) {
        self->ids[i] = 0xFFFF;
    }
    self->f138 = 0;
    ((VObj_18_80237BD8 *)self)->m6((s32)self->pos);
    ((VObj_18_80237BD8 *)self)->m7();
    if (self->source != 0) {
        self->fb4 = obj_getField1c(self->source);
    }
    return self_;
}
#undef self
#pragma pop

void *construct_area__11TTecRaBartaFPvPvPvPv(void *self, void *source, void *origin, void *level) {
    s32 i;
    construct_area_technique_base(self, source, origin, origin, level);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__11TTecRaBarta;
    M2C_FIELD(self, u32 *, 0) = TTecRaBarta_class_name;
    M2C_FIELD(self, s32 *, 0xF0) = 0;
    calc_parameters__11TTecRaBartaFv(self);
    if (M2C_FIELD(self, u8 **, 0xE8) != NULL) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(self, u8 **, 0xE8), u8 **, 0xA4), f32 *, 0xC) = M2C_FIELD(self, f32 *, 0x90);
    }
    for (i = 0; i < 32; i++) {
        ((Ids_80237CCC *) self)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(self, s32 *, 0x138) = 0;
    ((VObj_18_80237CCC *) self)->m6(0);
    ((VObj_18_80237CCC *) self)->m7();
    if (M2C_FIELD(self, void **, 0x1C) != NULL) {
        M2C_FIELD(self, u16 *, 0xB4) = obj_getField1c(M2C_FIELD(self, void **, 0x1C));
    }
    return self;
}

void spawn_rafoie_explosion_bursts(Obj_80237DAC *self);

void TTecRaFoie__vt7(u8 *arg0);
void TTecRaFoie__vt6(TTecRaFoie_80237FB8 *self);

}
#undef VecCopy__FP3VecPC3Vec

#undef calc_parameters__11TTecRaBartaFv

#undef spawn_particle_effect
#undef __dl__7TObjectFPv
#undef rabarta_band_emitter_table
#undef __nw__7TObjectFUl
#undef TTecRaBarta_class_name
