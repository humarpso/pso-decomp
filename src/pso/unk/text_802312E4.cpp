#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_80231638___vt__10TTecGiFoie
{
  M2C_UNK value;
  u8 remaining[0x24];
};

#define M2C_BITWISE(type, expr) ((type)(expr))
struct HitInfo_8023154C { s32 type; f32 power; };

struct VBase_8023154C { char pad[0x18]; };

struct VObj_8023154C : VBase_8023154C {
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
    virtual void m21(void *, HitInfo_8023154C *, void *, s32, s32);
};

struct Obj_8023154C {
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

typedef s32 M2C_UNK;
struct Vec_802312E4 { f32 x, y, z; };

struct Rot_802312E4 { s32 x, y, z; };

struct Part_802312E4 { s32 id; u32 flags; u8 pad8[4]; };

struct Profile_802312E4 { Part_802312E4 *parts; u32 count; };

struct Task_802312E4 {
    u8 pad0[0x18];
    void **vt;
    u32 *emitters;
    Vec_802312E4 pos;
    Vec_802312E4 pos2;
    f32 x38;
    s32 x3c;
    s32 x40;
    u8 band;
    s8 x45;
    u8 x46;
    u8 single;
};

extern "C" {
u8 *destroy_technique_base__9TTecLukerFPvs(void *, s16);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
M2C_UNK queue_destruction__7TObjectFv(int);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80231638___vt__10TTecGiFoie __vt__10TTecGiFoie;
u8 *__dt__10TTecGiFoieFv(u8 *arg0, s16 arg1);
u16 obj_getField1c(void *);
void TTecGiFoie__vt4(Obj_8023154C *self, VObj_8023154C *target);
f32 newton_sqrtf(f32);
M2C_UNK queue_destruction__7TObjectFv(int);
f32 horizontal_distance_squared(void *, void *);
void *find_entity_by_id(u16);
void apply_technique_to_area_targets(void *);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
extern const f32 TTecGiFoie__data_805DC81C;
void run_task__10TTecGiFoieFv(u8 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
void set_position_xy__10TObjPlayerFPvff(u32, f32, f32);
s32 spawn_particle_effect_with_rotation(void *, void *, s32, s32);
s32 spawn_continuous_particle_with_direction(void *, void *, s32);
u32 *alloc_buffer__11TOBoss4RockFPv(s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern Profile_802312E4 lbl_8044D2F4[];
extern void *lbl_804CC800[];
extern const f32 lbl_805DC810;
extern const f32 TTecGiFoie__data_805DC81C;
extern const f32 lbl_805DC820;
extern const f32 lbl_805DC824;
Task_802312E4 *TTecGiFoie__sub_802312E4(Task_802312E4 *self, Vec_802312E4 *pos, s32 arg2, u8 band, s32 arg4, void *parent, u8 single);
}

extern "C" {

void create__10TTecGiFoieFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TTecGiFoie__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

Task_802312E4 *TTecGiFoie__sub_802312E4(Task_802312E4 *self, Vec_802312E4 *pos, s32 arg2, u8 band, s32 arg4, void *parent, u8 single) {
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = lbl_804CC800;
    self->x46 = 0;
    self->pos.x = pos->x;
    self->pos.y = pos->y;
    self->pos.z = pos->z;
    self->band = band;
    self->x45 = arg4;
    VecCopy__FP3VecPC3Vec(&self->pos2, &self->pos);
    self->x3c = arg2;
    self->x38 = lbl_805DC810;
    self->x40 = 0;
    self->single = single;
    if (self->single != 0) {
        Rot_802312E4 r;
        self->emitters = alloc_buffer__11TOBoss4RockFPv(4);
        r.x = 0;
        r.y = 0;
        r.z = 0x4000;
        self->emitters[0] = spawn_continuous_particle_with_direction(&self->pos, &r, 0x19D);
        self->x38 = TTecGiFoie__data_805DC81C;
    } else {
        s32 i;
        self->emitters = alloc_buffer__11TOBoss4RockFPv(lbl_8044D2F4[self->band].count * 4);
        for (i = 0; i < lbl_8044D2F4[self->band].count; i++) {
            Rot_802312E4 r;
            Part_802312E4 *p;
            r.x = 0;
            r.y = 0;
            r.z = 0x4000;
            p = &lbl_8044D2F4[self->band].parts[i];
            self->emitters[i] = spawn_particle_effect_with_rotation(&self->pos, &r, p->id, (p->flags & 0x1000) ? 0x2000 : 0);
            if (self->band == 2) {
                if (arg4 >= 0xF && arg4 < 0x19) {
                    if (i <= 1 && self->emitters[i] != 0) {
                        set_position_xy__10TObjPlayerFPvff(self->emitters[i], lbl_805DC820, lbl_805DC820);
                    }
                } else if (arg4 >= 0x19 && arg4 < 0x1E) {
                    if (i <= 1 && self->emitters[i] != 0) {
                        set_position_xy__10TObjPlayerFPvff(self->emitters[i], lbl_805DC820, lbl_805DC824);
                    }
                }
            }
        }
    }
    return self;
}

void create__10TTecGiFoieFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecGiFoie__ct(o, arg0, arg1, arg2);
    }
}
typedef struct RecoveredGlobal_80231638___vt__10TTecGiFoie RecoveredGlobal_80231638___vt__10TTecGiFoie;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_80231638___vt__10TTecGiFoie_size[((sizeof(RecoveredGlobal_80231638___vt__10TTecGiFoie)) == 0x28) ? (1) : (-1)];

void TTecGiFoie__vt4(Obj_8023154C *self, VObj_8023154C *target) {
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
        HitInfo_8023154C tmp;
        tmp.type = 1;
        tmp.power = self->power;
        HitInfo_8023154C info = tmp;
        target->m21(self->source, &info, self->contact, 1, -1);
    }
}

u8 *__dt__10TTecGiFoieFv(u8 *arg0, s16 arg1) {
  s32 temp_r30;
  s32 var_r29;
  s32 var_r31;
  if (arg0 != 0)
  {
    var_r31 = 0;
    var_r29 = var_r31;
    var_r31 = 0;
    *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &__vt__10TTecGiFoie.value;
    do
    {
      temp_r30 = var_r31 + 0xEC;
      if (is_parents_unqueued__9TTecLukerFUi(*((M2C_UNK *) (((s8 *) arg0) + temp_r30))) != 0)
      {
        queue_destruction__7TObjectFv((int) (*((M2C_UNK *) (((s8 *) arg0) + temp_r30))));
      }
      var_r29 += 1;
      var_r31 += 4;
    }
    while (var_r29 < 3);
    destroy_technique_base__9TTecLukerFPvs(arg0, 0);
    if (arg1 > 0)
    {
      __dl__7TObjectFPv((void *) arg0);
    }
  }
  return arg0;
}
void run_task__10TTecGiFoieFv(u8 *self) {
    f32 distance;
    if (M2C_FIELD(self, void **, 0xE8) == NULL) {
        queue_destruction__7TObjectFv((int) self);
        return;
    }
    M2C_FIELD(self, void **, 0x1C) = find_entity_by_id(M2C_FIELD(self, u16 *, 0xB4));
    if (M2C_FIELD(self, void **, 0x1C) == NULL) {
        queue_destruction__7TObjectFv((int) self);
        return;
    }
    if (is_parents_unqueued__9TTecLukerFUi(M2C_FIELD(self, u32 *, 0xEC)) != 0) {
        distance = newton_sqrtf(horizontal_distance_squared(M2C_FIELD(self, u8 **, 0xEC) + 0x2C, self + 0x20));
        if (M2C_FIELD(self, u8 **, 0xE8) != NULL) {
            M2C_FIELD(M2C_FIELD(M2C_FIELD(self, u8 **, 0xE8), u8 **, 0xA4), f32 *, 0xC) = TTecGiFoie__data_805DC81C + distance;
        }
        apply_technique_to_area_targets(self);
        if (distance >= M2C_FIELD(self, f32 *, 0x90)) {
            queue_destruction__7TObjectFv((int) self);
        }
    }
}

}
