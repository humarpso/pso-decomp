#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022B6FC_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_8022B6FC_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

#include "pso/misc/TTecBarta.h"

struct HitInfo_8022B8F4 { s32 type; f32 power; };

struct VBase_8022B8F4 { char pad[0x18]; };

struct VObj_8022B8F4 : VBase_8022B8F4 {
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
    virtual void m21(void *, HitInfo_8022B8F4 *, void *, s32, s32);
};

struct Obj_8022B8F4 {
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

struct TTecBarta_8022BC10 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vtable;
    void *owner;
    u8 pad20[0xC8 - 0x20];
    s16 fc8;
    u8 padca[0x114 - 0xCA];
    u32 f114;
    u8 pad118[0x134 - 0x118];
    u16 slots[32];
    s32 f174;
};

struct Obj_8022BCB8 {
    u8 pad0[0x18];
    void *vt;
    void *source;
    u8 pad20[0x134 - 0x20];
    u16 ids[32];
};

struct Vec_8022BA98 { f32 x; f32 y; f32 z; };

struct List_8022BD74 { u32 ids[16]; s32 vals[16]; s32 count; };

struct VBase_8022BD74 { u8 pad[0x18]; };

struct VObj_8022BD74 : VBase_8022BD74 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(u32 target);
};

struct Tec_8022BD74 {
    u8 pad0[0x1C];
    void *owner;
    u8 pad20[0xB8 - 0x20];
    s32 fb8;
    u8 padbc[0xE8 - 0xBC];
    u32 fe8;
};

extern "C" {
s32 calc_technique_parameters(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_8022B6FC_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_8022B6FC_lbl_804CC55C lbl_804CC55C;
void init_parameters__9TTecBartaFPv(u8 *arg0);
extern TechniqueContactVtable __vt__9TTecBarta;
extern TechniqueEmitterSourceTable TTecBarta__data_8044CD98[];
void queue_destruction__7TObjectFv(TechniqueParticleEmitter*);
void free__11TOBoss4RockFUi(TechniqueParticleEmitter**);
void destroy_technique_effect_resources__10TObjPlayerFPvs(TTecBarta*,s16);
void __dl__7TObjectFPv(TTecBarta*);
TTecBarta* __dt__9TTecBartaFv(TTecBarta* self,s16 deleting);
u16 obj_getField1c(void *);
void TTecBarta__vt6(Obj_8022B8F4 *self, VObj_8022B8F4 *target);
u16 obj_getField1c(void *);
void update_technique_by_state__9TTecBartaFPv(u8 *arg0);
void init_parameters__9TTecBartaFPv(u8 *arg0);
void construct_aimed_technique_projectile();
extern TechniqueContactVtable __vt__9TTecBarta;
extern s32 lbl_805D3798;
TTecBarta_8022BC10 *TTecBarta__ct(TTecBarta_8022BC10 *self, void * _w1, void * _w2, void * _w3, void * _w4);
u16 obj_getField1c(void *);
void update_technique_by_state__9TTecBartaFPv(u8 *arg0);
void init_parameters__9TTecBartaFPv(u8 *arg0);
void TObjPlayer__sub_8023AA4C();
extern TechniqueContactVtable __vt__9TTecBarta;
extern s32 lbl_805D3798;
extern const f32 lbl_805DC7A8;
u8 *construct_tec_barta_facing(u8 *arg0, void * _w1, void * _w2, void * _w3, void * _w4);
void queue_destruction__7TObjectFv(TechniqueParticleEmitter*);
extern TechniqueEmitterSourceTable TTecBarta__data_8044CD98[];
s32 get_bml_model(s32, s32);
void attach_particle_model(TechniqueParticleEmitter *, s32, s32, s32, s32, f32);
TechniqueParticleEmitter *create_timed_particle_emitter(f32 *, s32, s32, s32);
void copy_pos__11TNowLoadingFPvPv(TechniqueParticleEmitter *, Vec_8022BA98 *);
TechniqueHitRecipient *find_entity_by_id(u16);
void dispatch_all_technique_contacts(TTecBarta *);
void advance_lifetime_or_destroy(TTecBarta *);
void move_ground_technique_projectile(TTecBarta *);
extern s32 lbl_805D63AC;
extern s32 lbl_805D63B0;
extern const f32 lbl_805DC7A0;
extern const f32 lbl_805DC7A4;
void run_task__9TTecBartaFv(TTecBarta *self);
s32 get_bml_motion(s32, s32);
s32 get_bml_model(s32, s32);
void attach_particle_model(TechniqueParticleEmitter *, s32, s32, s32, s32, f32);
void set_position_xy__10TObjPlayerFPvff(TechniqueParticleEmitter *, f32, f32);
TechniqueParticleEmitter *spawn_continuous_particle_with_direction(f32 *, s32 *, u32);
TechniqueParticleEmitter *create_particle_emitter(f32 *, u32);
TechniqueParticleEmitter **alloc_buffer__11TOBoss4RockFPv(u32);
extern TechniqueEmitterSourceTable TTecBarta__data_8044CD98[];
extern s32 lbl_805D63AC;
extern s32 lbl_805D63B0;
extern const f32 lbl_805DC7A0;
void create_particle_emitters__9TTecBartaFPv(void *arg);
void queue_destruction__7TObjectFv(TechniqueParticleEmitter*);
u16 obj_getField1c(void *);
s32 get_type__10TObjPlayerFPv(void *);
s32 is_valid_and_active__10TObjPlayerFUi(u32);
List_8022BD74 *TObjPlayer__sub_80236728(Tec_8022BD74 *, void *);
List_8022BD74 *TObjPlayer__sub_80236754(Tec_8022BD74 *, void *);
void apply_technique_to_area_targets(Tec_8022BD74 *self);
}

extern "C" {

void TObjPlayer__sub_8022BD70(void);
void create__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__9TTecBartaFv(void);
void update_technique_by_state__9TTecBartaFPv(u8 *arg0);
s32 play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void update_technique_by_state__9TTecBartaFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = play_sound_effect(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        play_sound_effect(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = play_sound_effect(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = play_sound_effect(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = play_sound_effect(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

typedef struct RecoveredGlobal_8022B6FC_lbl_804CC510 RecoveredGlobal_8022B6FC_lbl_804CC510;
typedef struct RecoveredGlobal_8022B6FC_lbl_804CC55C RecoveredGlobal_8022B6FC_lbl_804CC55C;
typedef char RecoveredGlobal_8022B6FC_lbl_804CC510_size[((sizeof(RecoveredGlobal_8022B6FC_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_8022B6FC_lbl_804CC55C_size[((sizeof(RecoveredGlobal_8022B6FC_lbl_804CC55C)) == 0x98) ? (1) : (-1)];

void create_particle_emitters__9TTecBartaFPv(void *arg) {
#define self ((TTecBarta *)arg)
    s32 angles[3];
    s32 reverse[3];
    u32 i;
    TechniqueEmitterSourceRow *row;
    u32 flags;
    s32 base = (s32)arg;
    angles[0] = self->angles[0];
    angles[1] = 0;
    angles[2] = self->angles[2];
    self->emitters = alloc_buffer__11TOBoss4RockFPv(TTecBarta__data_8044CD98[self->band].count * 4);
    for (i = 0; i < TTecBarta__data_8044CD98[self->band].count; i++) {
        row = &TTecBarta__data_8044CD98[self->band].rows[i];
        flags = row->flags;
        if (flags & 2) {
            self->emitters[i] = spawn_continuous_particle_with_direction((f32 *)(base + 0x20), angles, row->entry);
        } else if (flags & 1) {
            reverse[0] = self->angles[0] + 0x8000;
            reverse[1] = 0;
            reverse[2] = self->angles[2];
            self->emitters[i] = spawn_continuous_particle_with_direction((f32 *)(base + 0x20), reverse, TTecBarta__data_8044CD98[self->band].rows[i].entry);
        } else {
            self->emitters[i] = create_particle_emitter((f32 *)(base + 0x20), row->entry);
        }
        if (self->emitters[i] != NULL) {
            row = &TTecBarta__data_8044CD98[self->band].rows[i];
            if (row->flags & 0x20) {
                attach_particle_model(self->emitters[i], get_bml_model(lbl_805D63AC, 0), lbl_805D63B0, get_bml_motion(lbl_805D63AC, 0), 0, lbl_805DC7A0);
            } else {
                set_position_xy__10TObjPlayerFPvff(self->emitters[i], row->scale, row->scale);
            }
        }
    }
#undef self
}

void init_parameters__9TTecBartaFPv(u8 *arg0) {
  int new_var;
  new_var = (int) calc_technique_parameters((int) 3, (int) (*((s16 *) (((s8 *) arg0) + 0xC4))), (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), new_var);
  if ((((s16) (*((s16 *) (((s8 *) arg0) + 0xC4)))) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0xC))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0xE))) * (*((s16 *) (((s8 *) arg0) + 0xC4)))));
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xCC))) + ((f32) ((*((s16 *) (((s8 *) arg0) + 0xF0))) * (*((s16 *) (((s8 *) arg0) + 0xC4))))));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xCC))) * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x18))));
    }
  }
  *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xD0))) + ((f32) ((((s16) (*((s16 *) (((s8 *) arg0) + 0xC4)))) / 5) * 2)));
  *((f32 *) (((s8 *) arg0) + 0x70)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xD4)));
}

void create__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecBarta__ct((TTecBarta_8022BC10 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void create_ex__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        construct_tec_barta_facing((u8 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void TTecBarta__vt6(Obj_8022B8F4 *self, VObj_8022B8F4 *target) {
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
        HitInfo_8022B8F4 tmp;
        tmp.type = 19;
        tmp.power = self->power;
        HitInfo_8022B8F4 info = tmp;
        target->m21(self->source, &info, self->contact, 3, -1);
    }
}

TTecBarta* __dt__9TTecBartaFv(TTecBarta* self,s16 deleting) {
    if(self) {
        self->vtable=&__vt__9TTecBarta;
        for(u32 i=0;i<TTecBarta__data_8044CD98[self->band].count;++i) {
            if(self->emitters[i]) {
                queue_destruction__7TObjectFv(self->emitters[i]);
                self->emitters[i]=0;
            }
        }
        free__11TOBoss4RockFUi(self->emitters);
        destroy_technique_effect_resources__10TObjPlayerFPvs(self,0);
        if(deleting>0)__dl__7TObjectFPv(self);
    }
    return self;
}

void run_task__9TTecBartaFv(TTecBarta *self) {
    s32 i;
    self->source = find_entity_by_id(self->sourceId);
    if (self->source == NULL) {
        queue_destruction__7TObjectFv((TechniqueParticleEmitter *)self);
        return;
    }
    for (i = 0; i < TTecBarta__data_8044CD98[self->band].count; i++) {
        Vec_8022BA98 pos = *(Vec_8022BA98 *)self->position;
        if (TTecBarta__data_8044CD98[self->band].rows[i].flags & 0x20) {
            pos.y -= lbl_805DC7A4;
        }
        if (self->emitters[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(self->emitters[i], &pos);
        }
        if (self->band == 5 && i == 5 && self->emitters[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(self->emitters[i], &pos);
        }
    }
    if (self->band == 5) {
        TechniqueParticleEmitter *e = create_timed_particle_emitter(self->position, 0x18A, 0x14, 1);
        if (e != NULL) {
            attach_particle_model(e, get_bml_model(lbl_805D63AC, 5), lbl_805D63B0, 0, 0, lbl_805DC7A0);
        }
    }
    move_ground_technique_projectile(self);
    advance_lifetime_or_destroy(self);
    dispatch_all_technique_contacts(self);
}

void render__9TTecBartaFv(void) {  }

TTecBarta_8022BC10 *TTecBarta__ct(TTecBarta_8022BC10 *self, void * _w1, void * _w2, void * _w3, void * _w4) {
    s32 i;
    construct_aimed_technique_projectile();
    self->vtable = ((void * *)&__vt__9TTecBarta);
    self->f0 = lbl_805D3798;
    init_parameters__9TTecBartaFPv((u8 *)self);
    self->f114 = 0x40003;
    for (i = 0; i < 32; i++) {
        self->slots[i] = 0xFFFF;
    }
    self->f174 = 0;
    create_particle_emitters__9TTecBartaFPv((void *)(self));
    update_technique_by_state__9TTecBartaFPv((u8 *)self);
    if (self->owner) {
        self->fc8 = ((s16)obj_getField1c(self->owner));
    }
    return self;
}

u8 *construct_tec_barta_facing(u8 *arg0, void * _w1, void * _w2, void * _w3, void * _w4) {
    s32 i;
    TObjPlayer__sub_8023AA4C();
    M2C_FIELD(arg0, void **, 0x18) = ((u8 *)&__vt__9TTecBarta);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3798;
    init_parameters__9TTecBartaFPv((u8 *)(arg0));
    for (i = 0; i < 0x20; i++) {
        ((Obj_8022BCB8 *)arg0)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x114) = 0x40003;
    M2C_FIELD(arg0, f32 *, 0x24) = M2C_FIELD(arg0, f32 *, 0x24) + lbl_805DC7A8;
    create_particle_emitters__9TTecBartaFPv((void *)(arg0));
    update_technique_by_state__9TTecBartaFPv((u8 *)(arg0));
    if (M2C_FIELD(arg0, void **, 0x1C) != 0) {
        M2C_FIELD(arg0, s16 *, 0xC8) = obj_getField1c(M2C_FIELD(arg0, void **, 0x1C));
    }
    return arg0;
}

void TObjPlayer__sub_8022BD70(void) {  }
struct TechniqueParticleEmitter;
void apply_technique_to_area_targets(Tec_8022BD74 *self) {
    List_8022BD74 *list;
    s32 i;
    u32 id;
    if (self->fe8 == 0) {
        queue_destruction__7TObjectFv((TechniqueParticleEmitter *)self);
        return;
    }
    if (obj_getField1c(self->owner) < 4) {
        if (get_type__10TObjPlayerFPv((u8 *)self->owner + 0x828) != 0) {
            list = TObjPlayer__sub_80236754(self, self->owner);
        } else {
            list = TObjPlayer__sub_80236728(self, self->owner);
        }
    } else {
        list = TObjPlayer__sub_80236754(self, self->owner);
    }
    for (i = 0; i < list->count; i++) {
        if (is_valid_and_active__10TObjPlayerFUi(list->ids[i]) != 0) {
            id = list->ids[i];
            self->fb8 = list->vals[i];
            ((VObj_8022BD74 *)self)->m4(id);
        }
    }
}

}
