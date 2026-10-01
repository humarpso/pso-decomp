#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_802384E0 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802384E0_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };

struct Stack_802385EC {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802385EC_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };

struct RecoveredGlobal_80238D10_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80238D10_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80238D10_arg0
{
  u8 unknown_0[0x78];
  s16 field_78;
  u8 unknown_7A[0xE];
  f32 field_88;
  u8 unknown_8C[0x20];
  s16 field_AC;
};

struct Damage_802386F8 { s32 kind; f32 power; };

struct VBase_802386F8 { char pad[0x18]; };

struct VObj_802386F8 : VBase_802386F8 {
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
    virtual s32 m21(s32, Damage_802386F8, s32, s32, s32, void *);
};

struct VBase_18_4560ce { char pad[0x18]; };

struct VObj_18_4560ce : VBase_18_4560ce {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(u32);
};

struct Entry_802336F0 { u16 id; u8 pad[6]; };

struct Self_802336F0 {
    u8 pad0[0x1C];
    u32 target;
    u8 pad1[0xB4 - 0x20];
    u16 owner;
    u8 pad2[0xEC - 0xB6];
    s32 flag;
    s32 count;
    struct Entry_802336F0 entries[1];
};

struct Vec_80233958 { f32 x, y, z; };

struct Eff_80233958 { u8 pad[0xc]; f32 scale; };

struct Holder_80233958 { u8 pad[0xa4]; Eff_80233958 *eff; };

struct Jelin_80233958 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    void *source;
    Vec_80233958 pos;
    u8 pad2c[0x7a - 0x2c];
    s16 level;
    Vec_80233958 src_pos;
    u8 pad88[0x90 - 0x88];
    f32 range;
    u8 pad94[0xb4 - 0x94];
    s16 field_b4;
    u8 padb6[0xe8 - 0xb6];
    Holder_80233958 *holder;
    s32 fec;
    u8 sub[4];
};

typedef s32 M2C_UNK;
struct Vec_80233958;
struct Vec_80233808 { f32 x, y, z; };

struct Eff_80233808 { u8 pad[0xc]; f32 scale; };

struct Holder_80233808 { u8 pad[0xa4]; Eff_80233808 *eff; };

struct Jelin_80233808 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    void *source;
    Vec_80233808 pos;
    u8 pad2c[0x7a - 0x2c];
    s16 level;
    u8 pad7c[0x90 - 0x7c];
    f32 range;
    u8 pad94[0xb4 - 0x94];
    s16 field_b4;
    u8 padb6[0xe8 - 0xb6];
    Holder_80233808 *holder;
    s32 fec;
    u8 sub[4];
};

extern "C" {
void TTecJelin__vt4(u8 *self, u8 *target);
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK TObjPlayer__sub_8022BD74(void *);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
void run_task__9TTecJelinFv(struct Self_802336F0 *self);
void fn_8022C2A8(void *);
s32 TObjPlayer__sub_8004433C(void *);
extern s32 lbl_805D37D8;
extern M2C_UNK __vt__9TTecJelin[];
void init_tech_params__9TTecJelinFPv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(Vec_80233958 *, Vec_80233958 *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 obj_getField1c(void *);
Jelin_80233958 *TTecJelin__sub_80233958(Jelin_80233958 *self, s32 _w1, s32 _w2, s32 _w3, s32 _w4);
void VecCopy__FP3VecPC3Vec(Vec_80233958 *, Vec_80233958 *);
s32 obj_getField1c(void *);
s32 TObjPlayer__sub_8004433C(void *);
s32 update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TTecAnti__sub_8022B3E8(void *, void *);
void fn_8022C10C(void *, void *, void *, void *);
void init_tech_params__9TTecJelinFPv(u8 *arg0);
extern M2C_UNK __vt__9TTecJelin[];
extern s32 lbl_805D37D8;
Jelin_80233808 *TTecJelin__ct(Jelin_80233808 *self, void *_w1, void *_w2, void *_w3, void *_w4);
}

extern "C" {

void *__dt__9TTecJelinFv(void *arg0, s16 arg1);
void create__9TTecJelinFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void init_tech_params__9TTecJelinFPv(u8 *arg0);
void render__9TTecJelinFv(void);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);
void __dl__7TObjectFPv(void *);
u32 __nw__7TObjectFUl(s32 a0 = 0);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern const f64 lbl_8044D658;

void init_tech_params__9TTecJelinFPv(u8 *arg0) {
    s32 res;
    res = TTecCtrl__sub_8022DBC4(0xB, M2C_FIELD(arg0, s16 *, 0x78), 0xFFFF);
    TTecAnti__sub_8022B35C(arg0 + 0x88, res);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, s16 *, 0xAC) * M2C_FIELD(arg0, s16 *, 0x78));
}

typedef char RecoveredGlobal_802384E0_lbl_804CCB28_size[sizeof(RecoveredGlobal_802384E0_lbl_804CCB28) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_802385EC_lbl_804CCB28_size[sizeof(RecoveredGlobal_802385EC_lbl_804CCB28) == 0x18 ? 1 : -1];
void TTecJelin__vt4(u8 *self, u8 *target) {
    Damage_802386F8 d;
    d.kind = 0xb;
    d.power = *(f32 *)(self + 0x88);
    ((VObj_802386F8 *)target)->m21(*(s32 *)(self + 0x1C), d, *(s32 *)(self + 0xB8), 0xb, -1, self);
}
typedef struct RecoveredFields_80238D10_arg0 RecoveredFields_80238D10_arg0;
typedef struct RecoveredGlobal_80238D10_lbl_804CC510 RecoveredGlobal_80238D10_lbl_804CC510;
typedef struct RecoveredGlobal_80238D10_lbl_804CC55C RecoveredGlobal_80238D10_lbl_804CC55C;
typedef char RecoveredGlobal_80238D10_lbl_804CC510_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80238D10_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC55C)) == 0x98) ? (1) : (-1)];

void create__9TTecJelinFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x14C);
    if (obj != 0U) {
        TTecJelin__sub_80233958((Jelin_80233958 *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void render__9TTecJelinFv(void) {  }

extern M2C_UNK __vt__9TTecJelin[];

void run_task__9TTecJelinFv(struct Self_802336F0 *self) {
    s32 i;
    u32 id;
    self->target = TPhotonMylla__sub_80154CB4(self->owner);
    if (self->target == 0) {
        queue_destruction__7TObjectFv((void *) (self));
        return;
    }
    if (self->flag != 0) {
        for (i = 0; i < self->count; i++) {
            id = TPhotonMylla__sub_80154CB4(self->entries[i].id);
            if (is_parents_unqueued__9TTecLukerFUi(id) != 0) {
                ((VObj_18_4560ce *)(self))->m4(id);
            }
        }
    } else {
        TObjPlayer__sub_8022BD74((void *) (self));
    }
    queue_destruction__7TObjectFv((void *) (self));
}

void *__dt__9TTecJelinFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecJelin;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Jelin_80233808 *TTecJelin__ct(Jelin_80233808 *self, void *_w1, void *_w2, void *_w3, void *_w4) {
    s32 r;
    fn_8022C10C(self, _w1, _w2, _w4);
    self->vt = __vt__9TTecJelin;
    TObjPlayer__sub_8004433C(self->sub);
    self->f0 = lbl_805D37D8;
    self->fec = 1;
    TTecAnti__sub_8022B3E8(self->sub, _w3);
    init_tech_params__9TTecJelinFPv((u8 *)self);
    VecCopy__FP3VecPC3Vec((Vec_80233958 *)&self->pos, (Vec_80233958 *)_w2);
    if (self->holder != 0) {
        self->holder->eff->scale = self->range;
    }
    switch (self->level) {
    case 0:
    case 1:
        r = TBoss3Volopt__sub_8022675C(0x4002A315, &self->pos, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        TBoss3Volopt__sub_8022675C(0x4002A315, &self->pos, 0, 0);
        break;
    case 4:
    case 5:
        r = TBoss3Volopt__sub_8022675C(0x4002A315, &self->pos, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, -0x100, 0);
        }
        break;
    }
    if (self->source != 0) {
        self->field_b4 = obj_getField1c(self->source);
    }
    return self;
}

Jelin_80233958 *TTecJelin__sub_80233958(Jelin_80233958 *self, s32 _w1, s32 _w2, s32 _w3, s32 _w4) {
    s32 r;
    fn_8022C2A8(self);
    self->vt = ((s32 *)&__vt__9TTecJelin);
    TObjPlayer__sub_8004433C(self->sub);
    self->f0 = lbl_805D37D8;
    self->fec = 0;
    init_tech_params__9TTecJelinFPv((u8 *)self);
    VecCopy__FP3VecPC3Vec(&self->pos, &self->src_pos);
    if (self->holder != 0) {
        self->holder->eff->scale = self->range;
    }
    switch (self->level) {
    case 0:
    case 1:
        r = TBoss3Volopt__sub_8022675C(0x4002A315, &self->pos, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        TBoss3Volopt__sub_8022675C(0x4002A315, &self->pos, 0, 0);
        break;
    case 4:
    case 5:
        r = TBoss3Volopt__sub_8022675C(0x4002A315, &self->pos, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, -0x100, 0);
        }
        break;
    }
    if (self->source != 0) {
        self->field_b4 = obj_getField1c(self->source);
    }
    return self;
}

}
