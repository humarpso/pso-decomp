#include "types.h"
#include "pso/unk/TUnk_804CCA78.h"
#include "pso/misc/TTecMegid.h"
#include "pso/misc/TNowLoading.h"
#include "pso/misc/TTecAnti.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80235348_lbl_804CC510
{
  s32 value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80235348_lbl_804CC55C
{
  s32 value;
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
  s32 value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_802308A0_lbl_804CC55C
{
  s32 value;
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

struct HitInfo_80235490 { s32 type; f32 power; };

struct VBase_80235490 { char pad[0x18]; };

struct VObj_80235490 : VBase_80235490 {
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
    virtual void m21(void *, HitInfo_80235490 *, void *, s32, s32);
};

struct Obj_80235490 {
    u8 pad0[0x1C];
    void *source;
    u8 pad20[0xC8 - 0x20];
    u16 fc8;
    u8 padCA[0xCC - 0xCA];
    f32 power;
    u8 padD0[0xF8 - 0xD0];
    void *contact;
    u8 padFC[0x134 - 0xFC];
    u16 ids[32];
    s32 cursor;
};

struct TTecGiBartaData_80230B48;
struct Vec_80235740 { f32 x; f32 y; f32 z; };

struct Row_80235740 { u32 entry; u32 flags; f32 scale; };

struct Data_80235740 { Row_80235740 *rows; u32 count; };

struct Obj_80235740 {
    u8 pad0[0x1C];
    void *source;
    Vec_80235740 pos;
    u8 pad2c[0x58 - 0x2C];
    s32 f58;
    u8 pad5c[0xC6 - 0x5C];
    s16 band;
    u16 sourceId;
    u8 padca[0x130 - 0xCA];
    void **emitters;
};

struct Row_802351B4
{
  u32 entry;
  u32 flags;
  f32 scale;
};

struct Data_802351B4
{
  Row_802351B4 *rows;
  u32 count;
};

struct Vec_802351B4
{
  f32 x;
  f32 y;
  f32 z;
};

struct Arg_802351B4
{
  s32 a;
  s32 b;
  s32 c;
};

struct Obj_802351B4
{
  u8 pad0[0x20];
  Vec_802351B4 pos;
  u8 pad2c[0x54 - 0x2C];
  s32 f54;
  s32 f58;
  s32 f5c;
  u8 pad60[0xC6 - 0x60];
  s16 band;
  u8 padc8[0x130 - 0xC8];
  void **emitters;
};

extern "C" {
s32 calc_technique_parameters(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
extern RecoveredGlobal_80235348_lbl_804CC510 tech_high_level_linear_power_table;
extern RecoveredGlobal_80235348_lbl_804CC55C lbl_804CC55C;
s32 queue_destruction__7TObjectFv(void *);
void mem_free(void **);
void __dl__7TObjectFPv(void *);
extern TTecGiBartaData_80230B48 TTecMegid__emitter_bands[];
extern void *__vt__9TTecMegid[];
TTecGiBarta_80230B48 *__dt__9TTecMegidFv(TTecGiBarta_80230B48 *self, s16 deleting);
u16 obj_getField1c(void *);
void construct_aimed_technique_projectile();
extern void *__vt__9TTecMegid[];
extern s32 lbl_805D37E8;
extern const f32 lbl_805DC884;
u8 *TTecMegid__ct(u8 *arg0, s32 _w1, s32 _w2, s32 _w3, s32 _w4);
u16 obj_getField1c(void *);
void construct_facing_technique__10TObjPlayerFPviPvii();
extern void *__vt__9TTecMegid[];
extern s32 lbl_805D37E8;
extern const f32 lbl_805DC884;
u16 obj_getField1c(void *);
s32 obj_isState3_324(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 play_sound_effect(s32, s32, s32, s32);
s32 get_technique_caster_flags(s32, u16);
void TTecMegid__vt6(Obj_80235490 *self, VObj_80235490 *target);
s32 queue_destruction__7TObjectFv(void *);
extern TTecGiBartaData_80230B48 TTecMegid__emitter_bands[];
void *find_entity_by_id(u16);
void push_matrix_from(void *);
void rotate_matrix_y(s32, s32);
void matrix_mult_vec(s32, Vec_80235740 *, Vec_80235740 *);
void pop_matrices(s32);
void move_technique_projectile(Obj_80235740 *);
void advance_lifetime_or_destroy__13TUnk_804CCC68Fv(Obj_80235740 *);
void dispatch_technique_contact__13TUnk_804CCC68Fv(Obj_80235740 *, s32);
extern Vec_80235740 tec_megid_offset_vec;
extern u8 identity_matrix[];
void run_task__9TTecMegidFv(Obj_80235740 *self);
void *get_bml_model(s32, u32);
s32 attach_particle_model(void *, void *, s32, int, int, f32);
void *spawn_particle_effect_with_rotation(void *, void *, u32, u16);
void *spawn_continuous_particle_effect_with_flags(void *, u32, u16);
void **mem_alloc(u32, s32);
extern TTecGiBartaData_80230B48 TTecMegid__emitter_bands[];
extern s32 technique_effect_bml;
extern s32 lbl_805D63B0;
extern const f32 lbl_805DC880;
}

extern "C" {

void run_task__13TUnk_804CCA78Fv(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
u32 __nw__7TObjectFUl(s32 a0 = 0);
s32 update_technique_slot__10TTecRaFoieFl(s32, s32, s32);

void TTecMegid::update_by_state() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = play_sound_effect(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFl(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        play_sound_effect(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = play_sound_effect(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFl(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = play_sound_effect(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFl(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = play_sound_effect(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFl(temp_r3, -0x100, 0);
        }
        break;
    }
}

typedef struct RecoveredFields_80235348_arg0 RecoveredFields_80235348_arg0;
typedef struct RecoveredGlobal_80235348_lbl_804CC510 RecoveredGlobal_80235348_lbl_804CC510;
typedef struct RecoveredGlobal_80235348_lbl_804CC55C RecoveredGlobal_80235348_lbl_804CC55C;
typedef char RecoveredGlobal_80235348_lbl_804CC510_size[((sizeof(RecoveredGlobal_80235348_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80235348_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80235348_lbl_804CC55C)) == 0x98) ? (1) : (-1)];

typedef struct Arg_802351B4 Arg_802351B4;
typedef struct Data_802351B4 Data_802351B4;
typedef struct Obj_802351B4 Obj_802351B4;
typedef struct Row_802351B4 Row_802351B4;
typedef struct TTecGiBartaData_80230B48 TTecGiBartaData_80230B48;
typedef struct Vec_802351B4 Vec_802351B4;
void TTecMegid::spawn_particle_emitters() {
  Obj_802351B4 *self = (Obj_802351B4 *) this;
  u32 fl;
  u32 flags;
  Row_802351B4 *row;
  u32 i;
  long long new_var;
  s32 mode;
  Arg_802351B4 sp8;
  sp8.a = self->f54;
  sp8.b = 0;
  sp8.c = self->f5c;
  self->emitters = mem_alloc(TTecMegid__emitter_bands[self->band].count * 4, self->f54);
  for (i = 0; i < ((Data_802351B4 *) TTecMegid__emitter_bands)[self->band].count; i++)
  {
    mode = 0;
    row = &((Data_802351B4 *) TTecMegid__emitter_bands)[self->band].rows[i];
    flags = row->flags;
    if (flags & 0x1000)
    {
      mode = 0x2000;
    }
    if (flags & 2)
    {
      self->emitters[i] = spawn_particle_effect_with_rotation(&self->pos, &sp8, row->entry, mode | 0x1000);
    }
    else
    {
      self->emitters[i] = spawn_continuous_particle_effect_with_flags(&self->pos, row->entry, mode | 0x1000);
    }
    if (self->emitters[i] != 0)
    {
      row = &((Data_802351B4 *) TTecMegid__emitter_bands)[self->band].rows[i];
      if (row->flags & 0x40)
      {
        ((TObjPlayer *)(self->emitters[i]))->set_position_xy(row->scale, row->scale);
      }
      if (((Data_802351B4 *) TTecMegid__emitter_bands)[self->band].rows[i].flags & 0x20)
      {
        new_var = ((Data_802351B4 *) TTecMegid__emitter_bands)[self->band].rows[i].flags >> 16;
        attach_particle_model(self->emitters[i], get_bml_model(technique_effect_bml, new_var), lbl_805D63B0, 0, 1, lbl_805DC880);
      }
    }
  }
}

void TTecMegid::init_parameters() {
    u8 *arg0 = (u8 *)this;
  s32 new_var;
  new_var = calc_technique_parameters((int) 0x12, (int) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  ((TTecAnti *)(arg0 + 0xCC))->copy_params((u8 *)new_var);
  if ((((s16) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_80235348_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&tech_high_level_linear_power_table.value)) + 0x48))) + ((*((s16 *) (((s8 *) (&tech_high_level_linear_power_table.value)) + 0x4A))) * ((RecoveredFields_80235348_arg0 *) arg0)->field_C4));
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

void TTecMegid__vt6(Obj_80235490 *self, VObj_80235490 *target) {
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
        HitInfo_80235490 tmp;
        tmp.type = 5;
        tmp.power = self->power;
        if (obj_getField1c(target) < 4 && obj_isState3_324(target) != 0) {
            return;
        }
        HitInfo_80235490 info = tmp;
        target->m21(self->source, &info, self->contact, 0x12, -1);
        play_sound_effect(0x4002AD29, (s32)((u8 *)target + 0x38), 0, 0);
        if (self->fc8 < 12) {
            if ((get_technique_caster_flags(0x12, self->fc8) & 1) == 0) {
                queue_destruction__7TObjectFv(self);
            }
        }
    }
}

void TTecMegid::create(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        TTecMegid__ct((u8 *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void TTecMegid::create_ex(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        ((TTecMegid *)obj)->construct_facing((s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void TTecMegid::render() {  }

typedef struct RecoveredFields_802308A0_arg0 RecoveredFields_802308A0_arg0;
typedef struct RecoveredGlobal_802308A0_lbl_804CC510 RecoveredGlobal_802308A0_lbl_804CC510;
typedef struct RecoveredGlobal_802308A0_lbl_804CC55C RecoveredGlobal_802308A0_lbl_804CC55C;
typedef char RecoveredGlobal_802308A0_lbl_804CC510_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_802308A0_lbl_804CC55C_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
TTecGiBarta_80230B48 *__dt__9TTecMegidFv(TTecGiBarta_80230B48 *self, s16 deleting) {
    if (self) {
        self->vtable = __vt__9TTecMegid;
        for (u32 i = 0; i < TTecMegid__emitter_bands[self->band].count; ++i) {
            if (self->emitters[i]) {
                queue_destruction__7TObjectFv((void *)(self->emitters[i]));
            }
        }
        mem_free(self->emitters);
        ((TObjPlayer *)self)->destroy_technique_effect_resources(0);
        if (deleting > 0) __dl__7TObjectFPv(self);
    }
    return self;
}

void run_task__9TTecMegidFv(Obj_80235740 *self) {
    u32 i;
    self->source = find_entity_by_id(self->sourceId);
    if (self->source == NULL) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    for (i = 0; i < ((Data_80235740 *)TTecMegid__emitter_bands)[self->band].count; i++) {
        if (((Data_80235740 *)TTecMegid__emitter_bands)[self->band].rows[i].flags & 4) {
            Vec_80235740 off = tec_megid_offset_vec;
            Vec_80235740 p;
            push_matrix_from(identity_matrix);
            rotate_matrix_y(0, self->f58);
            matrix_mult_vec(0, &off, &off);
            pop_matrices(1);
            p.x = self->pos.x + off.x;
            p.y = self->pos.y + off.y;
            p.z = self->pos.z + off.z;
            ((TNowLoading *)(self->emitters[i]))->copy_pos(&p);
        } else {
            ((TNowLoading *)(self->emitters[i]))->copy_pos(&self->pos);
        }
    }
    move_technique_projectile(self);
    advance_lifetime_or_destroy__13TUnk_804CCC68Fv(self);
    dispatch_technique_contact__13TUnk_804CCC68Fv(self, 1);
}

u8 *TTecMegid__ct(u8 *arg0, s32 _w1, s32 _w2, s32 _w3, s32 _w4) {
    s32 i;
    construct_aimed_technique_projectile();
    *(void **)((s8 *)arg0 + 0x18) = __vt__9TTecMegid;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D37E8;
    ((TTecMegid *)arg0)->init_parameters();
    *(f32 *)((s8 *)arg0 + 0x178) = lbl_805DC884;
    for (i = 0; i < 0x20; i++) {
        ((Obj_8023589C *)arg0)->ids[i] = 0xFFFF;
    }
    *(s32 *)((s8 *)arg0 + 0x174) = 0;
    ((TTecMegid *)arg0)->spawn_particle_emitters();
    ((TTecMegid *)arg0)->update_by_state();
    if (*(void **)((s8 *)arg0 + 0x1C) != 0) {
        *(s16 *)((s8 *)arg0 + 0xC8) = obj_getField1c(*(void **)((s8 *)arg0 + 0x1C));
    }
    return arg0;
}

u8 *TTecMegid::construct_facing(s32 _w1, s32 _w2, s32 _w3, s32 _w4) {
    u8 *arg0 = (u8 *)this;
    s32 i;
    construct_facing_technique__10TObjPlayerFPviPvii();
    *(void **)((s8 *)arg0 + 0x18) = __vt__9TTecMegid;
    *(s32 *)&this->m_1c = lbl_805D37E8;
    init_parameters();
    *(f32 *)((s8 *)arg0 + 0x178) = lbl_805DC884;
    for (i = 0; i < 0x20; i++) {
        ((Obj_80235940 *)arg0)->ids[i] = 0xFFFF;
    }
    *(s32 *)((s8 *)arg0 + 0x174) = 0;
    spawn_particle_emitters();
    update_by_state();
    if (*(void **)((s8 *)arg0 + 0x1C) != 0) {
        *(s16 *)((s8 *)arg0 + 0xC8) = obj_getField1c(*(void **)((s8 *)arg0 + 0x1C));
    }
    return arg0;
}

void TUnk_804CCA78::run_task() {
    this->m_1e = (s16) (this->m_1e + 1);
    if ((s16) this->m_1e > (s16) *(s16 *)((s8 *)this + 0x1C)) {
        queue_destruction__7TObjectFv((void *)((void *)(this)));
    }
}

}
