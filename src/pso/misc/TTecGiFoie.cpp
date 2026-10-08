#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct RecoveredGlobal_80230D9C_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80230D9C_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80230D9C_arg0
{
  u8 unknown_0[0x78];
  s16 field_78;
  u8 unknown_7A[0xE];
  f32 field_88;
  u8 unknown_8C[0x20];
  s16 field_AC;
};

typedef struct RecoveredFields_80230D9C_arg0 RecoveredFields_80230D9C_arg0;

typedef struct RecoveredGlobal_80230D9C_lbl_804CC510 RecoveredGlobal_80230D9C_lbl_804CC510;

typedef struct RecoveredGlobal_80230D9C_lbl_804CC55C RecoveredGlobal_80230D9C_lbl_804CC55C;

typedef char RecoveredGlobal_80230D9C_lbl_804CC510_size[((sizeof(RecoveredGlobal_80230D9C_lbl_804CC510)) == 0x4C) ? (1) : (-1)];

typedef char RecoveredGlobal_80230D9C_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80230D9C_lbl_804CC55C)) == 0x98) ? (1) : (-1)];

struct Task_80231224 {
    u8 pad0[0x18];
    void **vt;
    void **emitters;
    u8 pad1[0x44 - 0x20];
    u8 band;
    u8 pad2[2];
    u8 single;
};

struct Profile_80231224 { u32 a; u32 count; };

struct RecoveredGlobal_80231638___vt__10TTecGiFoie
{
  M2C_UNK value;
  u8 remaining[0x24];
};

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

typedef struct RecoveredGlobal_80231638___vt__10TTecGiFoie RecoveredGlobal_80231638___vt__10TTecGiFoie;

typedef char RecoveredGlobal_80231638___vt__10TTecGiFoie_size[((sizeof(RecoveredGlobal_80231638___vt__10TTecGiFoie)) == 0x28) ? (1) : (-1)];

struct Vec_8023179C { f32 x, y, z; };

struct Task_8023179C;

struct GiFoie_8023179C {
    u32 x0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    void *source;
    Vec_8023179C pos;
    u8 pad2c[0x78 - 0x2C];
    s16 level;
    s16 band;
    u8 pad7c[0x90 - 0x7C];
    f32 radius;
    u8 pad94[0xB4 - 0x94];
    u16 fb4;
    u8 padb6[0xE8 - 0xB6];
    u8 *effect;
    Task_8023179C *tasks[3];
    u16 ids[32];
    s32 cursor;
};

struct Task_802312E4;

struct Vec_802312E4;

void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
f32 newton_sqrtf(f32);
M2C_UNK queue_destruction__7TObjectFv(int);
void set_position_xy__10TObjPlayerFPvff(u32, f32, f32);
s32 spawn_particle_effect_with_rotation(void *, void *, s32, s32);
s32 spawn_continuous_particle_with_direction(void *, void *, s32);
f32 horizontal_distance_squared(void *, void *);
void free__11TOBoss4RockFUi(void *);
u32 * alloc_buffer__11TOBoss4RockFPv(s32);
void * find_entity_by_id(u16);
s32 is_technique_ready__8TTecCtrlFv();
s32 update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 play_sound_effect(s32, void *, s32, s32);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __dt__7TObjectFv(void *, int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 copy_params__8TTecAntiFPvPv(void *, int);
void apply_technique_to_area_targets(void *);
u8 * destroy_technique_base__9TTecLukerFPvs(void *, s16);
void construct_area_technique_base(void *, void *, void *, void *, void *);
s32 calc_technique_parameters(int, int, int);
void calc_params__10TTecGiFoieFPv(u8 *arg0);
u8 * gifoie_orbit_dtor(Task_80231224 *task, s16 flag);
Task_802312E4 * construct_orbit__10TTecGiFoieFPvPviUciPvUc(Task_802312E4 *self, Vec_802312E4 *pos, s32 arg2, u8 band, s32 arg4, void *parent, u8 single);
void create__10TTecGiFoieFPvPvPv(void *arg0, void *arg1, void *arg2);
void TTecGiFoie__vt4(Obj_8023154C *self, VObj_8023154C *target);
u8 * __dt__10TTecGiFoieFv(u8 *arg0, s16 arg1);
void run_task__10TTecGiFoieFv(u8 *self);
void * TTecGiFoie__ct(void *self_, void *source, void *origin, void *level);
void render__10TTecGiFoieFv(void);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
void matrix_mult_vec(void *, void *, void *);
void rotate_matrix_y(void *, s32);
void push_matrix_from(void *);
void pop_matrices(s32);

extern const f32 TTecGiFoie__data_805DC81C;
extern RecoveredGlobal_80231638___vt__10TTecGiFoie __vt__10TTecGiFoie;
extern Profile_802312E4 lbl_8044D2F4[];
extern u8 lbl_8044D324[];
extern Vec_8023179C lbl_8044D32C;
extern RecoveredGlobal_80230D9C_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_80230D9C_lbl_804CC55C lbl_804CC55C;
extern void *lbl_804CC800[];
extern u8 lbl_8058D490[];
extern u32 lbl_805D37C0;
extern const f32 lbl_805DC810;
extern const f32 lbl_805DC818;
extern const f32 lbl_805DC820;
extern const f32 lbl_805DC824;
extern s32 tl_07;

void calc_params__10TTecGiFoieFPv(u8 *arg0) {
  int new_var;
 new_var = (int) calc_technique_parameters((int) 1, (int) ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78, (int) 0xFFFF); do { copy_params__8TTecAntiFPvPv((void *) (arg0 + ((0, 0x88))), new_var); if ((((s16) ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0)) { ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 4))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 6))) * ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78)); return; } } while (0);
  ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 + ((f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_AC * ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78)));
  if (is_technique_ready__8TTecCtrlFv())
  {
    ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 8))));
  }
}

u8 *gifoie_orbit_dtor(Task_80231224 *task, s16 flag) {
    u32 i;
    if (task != NULL) {
        task->vt = lbl_804CC800;
        if (task->single != 0) {
            ((void (*)(void *))queue_destruction__7TObjectFv)(task->emitters[0]);
        } else {
            for (i = 0; i < ((Profile_80231224 *)&lbl_8044D2F4)[task->band].count; i++) {
                ((void (*)(void *))queue_destruction__7TObjectFv)(task->emitters[i]);
            }
        }
        free__11TOBoss4RockFUi(task->emitters);
        __dt__7TObjectFv(task, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(task);
        }
    }
    return (u8 *)task;
}

Task_802312E4 *construct_orbit__10TTecGiFoieFPvPviUciPvUc(Task_802312E4 *self, Vec_802312E4 *pos, s32 arg2, u8 band, s32 arg4, void *parent, u8 single) {
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

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
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
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
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
      ((M2C_UNK (*)(void *))__dl__7TObjectFPv)((void *) arg0);
    }
  }
  return arg0;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
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
#pragma pop

void *TTecGiFoie__ct(void *self_, void *source, void *origin, void *level) {
#define self ((GiFoie_8023179C *)self_)
    s32 i;
    s32 j;
    s32 k;
    s32 r;
    construct_area_technique_base(self_, source, origin, origin, level);
    self->vt = &__vt__10TTecGiFoie.value;
    self->x0 = lbl_805D37C0;
    ((void (*)(void *))calc_params__10TTecGiFoieFPv)(self_);
    if (self->effect != NULL) {
        M2C_FIELD(M2C_FIELD(self->effect, u8 **, 0xA4), f32 *, 0xC) = TTecGiFoie__data_805DC81C + self->radius;
    }
    for (i = 0; i < 32; i++) {
        self->ids[i] = 0xFFFF;
    }
    for (j = 0; j < 3; j++) {
        self->tasks[j] = 0;
    }
    self->cursor = 0;
    for (k = 0; k < lbl_8044D324[self->band]; k++) {
        Vec_8023179C v = lbl_8044D32C;
        Vec_8023179C p;
        s32 angle;
        s32 step;
        void *o;
        step = (s32)(lbl_805DC818 * (f32)(360 / lbl_8044D324[self->band]));
        angle = step * k + 0x4000;
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, angle);
        matrix_mult_vec(0, &v, &v);
        pop_matrices(1);
        p.x = self->pos.x + v.x;
        p.y = self->pos.y + v.y;
        p.z = self->pos.z + v.z;
        o = __nw__7TObjectFUl(0x4C);
        if (o != NULL) {
            o = ((Task_8023179C *(*)(void *, Vec_8023179C *, s32, s32, s32, void *, u8))construct_orbit__10TTecGiFoieFPvPviUciPvUc)(o, &p, angle, self->band, self->level, (void *)tl_07, 0);
        }
        self->tasks[k] = (Task_8023179C *)o;
    }
    switch (self->band) {
    case 0:
        r = play_sound_effect(0x4002A801, (u8 *)self_ + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
        }
        break;
    case 1:
        play_sound_effect(0x4002A801, (u8 *)self_ + 0x20, 0, 0);
        break;
    case 2:
    case 3:
        r = play_sound_effect(0x4002A801, (u8 *)self_ + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, -0x180, 0);
        }
        break;
    case 4:
        r = play_sound_effect(0x4002A801, (u8 *)self_ + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, -0x250, 0);
        }
        break;
    case 5:
        r = play_sound_effect(0x4002A801, (u8 *)self_ + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, -0x100, 0);
        }
        break;
    default:
        play_sound_effect(0x4002A801, (u8 *)self_ + 0x20, 0, 0);
        break;
    }
    if (self->source != NULL) {
        self->fb4 = obj_getField1c(self->source);
    }
    return self_;
#undef self
}

void render__10TTecGiFoieFv(void) {  }

}
