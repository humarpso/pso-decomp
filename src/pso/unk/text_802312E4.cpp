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
void TObjPlayer__sub_8022BD74(void *);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
extern const f32 TTecGiFoie__data_805DC81C;
void run_task__10TTecGiFoieFv(u8 *self);
}

extern "C" {

void create__10TTecGiFoieFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TTecGiFoie__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

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
        TObjPlayer__sub_8022BD74(self);
        if (distance >= M2C_FIELD(self, f32 *, 0x90)) {
            queue_destruction__7TObjectFv((int) self);
        }
    }
}

}
