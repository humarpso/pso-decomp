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

struct Entry_8023C1B8 { u16 id; u8 pad[6]; };

struct Self_8023C1B8 {
    u8 pad0[0x1C];
    u32 target;
    u8 pad1[0xB4 - 0x20];
    u16 owner;
    u8 pad2[0xEC - 0xB6];
    s32 flag;
    s32 count;
    struct Entry_8023C1B8 entries[1];
};

struct Vec_8023C420 { f32 x, y, z; };

struct Eff_8023C420 { u8 pad[0xc]; f32 scale; };

struct Holder_8023C420 { u8 pad[0xa4]; Eff_8023C420 *eff; };

struct Zarua_8023C420 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    void *source;
    Vec_8023C420 pos;
    u8 pad2c[0x7a - 0x2c];
    s16 level;
    Vec_8023C420 src_pos;
    u8 pad88[0x90 - 0x88];
    f32 range;
    u8 pad94[0xb4 - 0x94];
    s16 field_b4;
    u8 padb6[0xe8 - 0xb6];
    Holder_8023C420 *holder;
    s32 fec;
    u8 sub[4];
};

typedef s32 M2C_UNK;
struct Vec_8023C420;
struct Vec_8023C2D0 { f32 x, y, z; };

struct Eff_8023C2D0 { u8 pad[0xc]; f32 scale; };

struct Holder_8023C2D0 { u8 pad[0xa4]; Eff_8023C2D0 *eff; };

struct Zarua_8023C2D0 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    void *source;
    Vec_8023C2D0 pos;
    u8 pad2c[0x7a - 0x2c];
    s16 level;
    u8 pad7c[0x90 - 0x7c];
    f32 range;
    u8 pad94[0xb4 - 0x94];
    s16 field_b4;
    u8 padb6[0xe8 - 0xb6];
    Holder_8023C2D0 *holder;
    s32 fec;
    u8 sub[4];
};

extern "C" {
void TTecZarua__vt4(u8 *self, u8 *target);
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 find_entity_by_id(int);
M2C_UNK apply_technique_to_area_targets(void *);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
void run_task__9TTecZaruaFv(struct Self_8023C1B8 *self);
void construct_area_technique_base(void *);
s32 TObjPlayer__sub_8004433C(void *);
extern s32 lbl_805D3830;
extern M2C_UNK __vt__9TTecZarua[];
void calc_range__9TTecZaruaFPv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(Vec_8023C420 *, Vec_8023C420 *);
s32 play_sound_effect(int, void *, int, int);
s32 update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 obj_getField1c(void *);
Zarua_8023C420 *TTecZarua__sub_8023C420(Zarua_8023C420 *self, s32 _w1, s32 _w2, s32 _w3, s32 _w4);
void VecCopy__FP3VecPC3Vec(Vec_8023C420 *, Vec_8023C420 *);
s32 obj_getField1c(void *);
s32 TObjPlayer__sub_8004433C(void *);
s32 update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 play_sound_effect(int, void *, int, int);
void copy_technique_target_list(void *, void *);
void fn_8022C10C(void *, void *, void *, void *);
void calc_range__9TTecZaruaFPv(u8 *arg0);
extern M2C_UNK __vt__9TTecZarua[];
extern s32 lbl_805D3830;
Zarua_8023C2D0 *TTecZarua__ct(Zarua_8023C2D0 *self, void *_w1, void *_w2, void *_w3, void *_w4);
}

extern "C" {

void *__dt__9TTecZaruaFv(void *arg0, s16 arg1);
void calc_range__9TTecZaruaFPv(u8 *arg0);
void create_instance__9TTecZaruaFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void render__9TTecZaruaFv(void);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);
void __dl__7TObjectFPv(void *);
u32 __nw__7TObjectFUl(s32 a0 = 0);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern const f64 lbl_8044DC98;

void calc_range__9TTecZaruaFPv(u8 *arg0) {
    s32 ret;
    struct { s32 v; } tmp;

    ret = TTecCtrl__sub_8022DBC4(0xC, M2C_FIELD(arg0, s16 *, 0x78), 0xFFFF);
    tmp.v = ret;
    TTecAnti__sub_8022B35C(arg0 + 0x88, tmp.v);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, s16 *, 0xAC) * M2C_FIELD(arg0, s16 *, 0x78));
}

typedef char RecoveredGlobal_802384E0_lbl_804CCB28_size[sizeof(RecoveredGlobal_802384E0_lbl_804CCB28) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_802385EC_lbl_804CCB28_size[sizeof(RecoveredGlobal_802385EC_lbl_804CCB28) == 0x18 ? 1 : -1];
void TTecZarua__vt4(u8 *self, u8 *target) {
    Damage_802386F8 d;
    d.kind = 0xc;
    d.power = *(f32 *)(self + 0x88);
    ((VObj_802386F8 *)target)->m21(*(s32 *)(self + 0x1C), d, *(s32 *)(self + 0xB8), 0xc, -1, self);
}
typedef struct RecoveredFields_80238D10_arg0 RecoveredFields_80238D10_arg0;
typedef struct RecoveredGlobal_80238D10_lbl_804CC510 RecoveredGlobal_80238D10_lbl_804CC510;
typedef struct RecoveredGlobal_80238D10_lbl_804CC55C RecoveredGlobal_80238D10_lbl_804CC55C;
typedef char RecoveredGlobal_80238D10_lbl_804CC510_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80238D10_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC55C)) == 0x98) ? (1) : (-1)];

void create_instance__9TTecZaruaFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x14C);
    if (obj != 0U) {
        TTecZarua__sub_8023C420((Zarua_8023C420 *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void render__9TTecZaruaFv(void) {  }

extern M2C_UNK __vt__9TTecZarua[];

void run_task__9TTecZaruaFv(struct Self_8023C1B8 *self) {
    s32 i;
    u32 id;
    self->target = find_entity_by_id(self->owner);
    if (self->target == 0) {
        queue_destruction__7TObjectFv((void *) (self));
        return;
    }
    if (self->flag != 0) {
        for (i = 0; i < self->count; i++) {
            id = find_entity_by_id(self->entries[i].id);
            if (is_parents_unqueued__9TTecLukerFUi(id) != 0) {
                ((VObj_18_4560ce *)(self))->m4(id);
            }
        }
    } else {
        apply_technique_to_area_targets((void *) (self));
    }
    queue_destruction__7TObjectFv((void *) (self));
}

void *__dt__9TTecZaruaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecZarua;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Zarua_8023C2D0 *TTecZarua__ct(Zarua_8023C2D0 *self, void *_w1, void *_w2, void *_w3, void *_w4) {
    s32 r;
    fn_8022C10C(self, _w1, _w2, _w4);
    self->vt = __vt__9TTecZarua;
    TObjPlayer__sub_8004433C(self->sub);
    self->f0 = lbl_805D3830;
    self->fec = 1;
    copy_technique_target_list(self->sub, _w3);
    calc_range__9TTecZaruaFPv((u8 *)self);
    VecCopy__FP3VecPC3Vec((Vec_8023C420 *)&self->pos, (Vec_8023C420 *)_w2);
    if (self->holder != 0) {
        self->holder->eff->scale = self->range;
    }
    switch (self->level) {
    case 0:
    case 1:
        r = play_sound_effect(0x4002A817, &self->pos, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        play_sound_effect(0x4002A817, &self->pos, 0, 0);
        break;
    case 4:
    case 5:
        r = play_sound_effect(0x4002A817, &self->pos, 0, 0);
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

Zarua_8023C420 *TTecZarua__sub_8023C420(Zarua_8023C420 *self, s32 _w1, s32 _w2, s32 _w3, s32 _w4) {
    s32 r;
    construct_area_technique_base(self);
    self->vt = ((s32 *)&__vt__9TTecZarua);
    TObjPlayer__sub_8004433C(self->sub);
    self->f0 = lbl_805D3830;
    self->fec = 0;
    calc_range__9TTecZaruaFPv((u8 *)self);
    VecCopy__FP3VecPC3Vec(&self->pos, &self->src_pos);
    if (self->holder != 0) {
        self->holder->eff->scale = self->range;
    }
    switch (self->level) {
    case 0:
    case 1:
        r = play_sound_effect(0x4002A817, &self->pos, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        play_sound_effect(0x4002A817, &self->pos, 0, 0);
        break;
    case 4:
    case 5:
        r = play_sound_effect(0x4002A817, &self->pos, 0, 0);
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
