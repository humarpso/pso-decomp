#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80239C48___vt__9TTecResta {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802394B0_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct Vec_8023967C { f32 x, y, z; };

struct Row_8023967C { s32 delay; s32 duration; s32 entry; u32 flags; };

struct Resta_8023967C { u8 pad[0x18]; s32 *vt; void *emitters[3]; s32 owner; s32 x2c; };

struct VBase_802399F8 { u8 pad[0x18]; };

struct VObj_802399F8 : VBase_802399F8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(u32 target);
};

struct Target_802399F8 { u16 id; u8 pad[6]; };

struct Resta_802399F8 {
    u8 pad0[0x1C];
    u32 source;
    u8 pad1[0xA4 - 0x20];
    s16 level;
    u8 pad2[0xA8 - 0xA6];
    u16 source_id;
    u8 pad3[0xE0 - 0xAA];
    s32 count;
    Target_802399F8 targets[11];
    s32 captured;
};

extern "C" {
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
s32 fn_802393D0(void *);
int init_cast__9TTecRestaFPv(void* p);
void TTecResta__sub_80239548(u8 *arg0);
s32 TTecAnti__sub_8022B35C(void *, int);
extern M2C_UNK __vt__9TTecResta[];
extern s32 lbl_805D3810;
extern const f32 TTecResta__data_805DC908;
u8 *TTecResta__sub_80239C48(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
f32 *TTecCtrl__sub_8022DBC4(M2C_UNK, s32, M2C_UNK);
s32 is_technique_ready__8TTecCtrlFv(int);
extern RecoveredGlobal_802394B0_lbl_804CC55C lbl_804CC55C;
f32 TTecResta__sub_802394B0(s32 arg0);
extern M2C_UNK lbl_804CCBC0[];
extern Row_8023967C lbl_804CCB90[];
extern const f32 TTecResta__data_805DC908;
void __ct__7TObjectFP7TObject(void *, void *);
Vec_8023967C *VecCopy__FP3VecPC3Vec(Vec_8023967C *, const Vec_8023967C *);
void *TObjPlayer__sub_800868C4(void *pos, s32 id, s32 a, s32 b, s32 c);
s32 obj_getField1c(int);
void TObjPlayer__sub_80087638(void *, s32);
Resta_8023967C *TTecResta__sub_8023967C(Resta_8023967C *self, Vec_8023967C *pos, s32 owner, void *parent);
M2C_UNK queue_destruction__7TObjectFv();
u32 TPhotonMylla__sub_80154CB4(int);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
void fn_802370D8(void *);
void run_task__9TTecRestaFv(Resta_802399F8 *self);
}

extern "C" {

void *__dt__9TTecRestaFPvs(void *arg0, s16 arg1);
void *__dt__9TTecRestaFv(void *arg0, s16 arg1);
void create__9TTecRestaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create__9TTecRestaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
int init_cast__9TTecRestaFPv(void* p);
void render__9TTecRestaFv(void);
void tick_lifetime__9TTecRestaFPv(void *arg0);
void *TTecResta__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);
M2C_UNK queue_destruction__7TObjectFv();

int init_cast__9TTecRestaFPv(void* p) { return fn_80236EE8(p); }

typedef struct RecoveredGlobal_802394B0_lbl_804CC55C RecoveredGlobal_802394B0_lbl_804CC55C;
typedef char RecoveredGlobal_802394B0_lbl_804CC55C_size[((sizeof(RecoveredGlobal_802394B0_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
f32 TTecResta__sub_802394B0(s32 arg0) {
  f32 *temp_r3;
  f32 var_f31;
  temp_r3 = (f32 *) TTecCtrl__sub_8022DBC4(0xF, arg0, 0xFFFF);
  var_f31 = *((f32 *) (((s8 *) temp_r3) + 0));
  var_f31 = var_f31 + ((f32) (arg0 * 5));
  if (is_technique_ready__8TTecCtrlFv((int) temp_r3) != 0)
  {
    var_f31 *= *((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x78));
  }
  return var_f31;
}

void TTecResta__sub_80239548(u8 *arg0) {
  int new_var;
  new_var = (int) TTecCtrl__sub_8022DBC4((int) 0xF, (int) (*((s16 *) (((s8 *) arg0) + 0xA4))), (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0x74), new_var);
  *((f32 *) (((s8 *) arg0) + 0x74)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x74))) + ((f32) ((*((s16 *) (((s8 *) arg0) + 0x98))) * (*((s16 *) (((s8 *) arg0) + 0xA4))))));
  if (((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() != 0)
  {
    *((f32 *) (((s8 *) arg0) + 0x74)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x74))) * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x78))));
  }
}

void tick_lifetime__9TTecRestaFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r4 + 1);
    if (temp_r4 > 0xB4) {
        queue_destruction__7TObjectFv();
    }
}

extern M2C_UNK lbl_804CCBC0[];

void *__dt__9TTecRestaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCBC0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
Resta_8023967C *TTecResta__sub_8023967C(Resta_8023967C *self, Vec_8023967C *pos, s32 owner, void *parent) {
    Vec_8023967C v;
    s32 i;
    Row_8023967C *row;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = ((s32 *)&lbl_804CCBC0);
    self->x2c = 0;
    for (i = 0; i < 3; i++) {
        self->emitters[i] = 0;
    }
    self->owner = owner;
    for (i = 0; i < 3; i++) {
        VecCopy__FP3VecPC3Vec(&v, pos);
        row = &lbl_804CCB90[i];
        if (row->flags & 1) {
            v.y -= TTecResta__data_805DC908;
        }
        if (i == 2) {
            self->emitters[i] = TObjPlayer__sub_800868C4(&v, row->entry, row->delay, row->duration, 0x30);
        } else {
            self->emitters[i] = TObjPlayer__sub_800868C4(&v, row->entry, row->delay, row->duration, 0x10);
        }
        if (self->emitters[i] != 0) {
            TObjPlayer__sub_80087638(self->emitters[i], obj_getField1c(self->owner));
        }
    }
    return self;
}
#pragma pop

void create__9TTecRestaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecResta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create__9TTecRestaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecResta__sub_80239C48((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
}

void render__9TTecRestaFv(void) {  }

extern M2C_UNK __vt__9TTecResta[];

void run_task__9TTecRestaFv(Resta_802399F8 *self) {
    u32 target;
    s32 i;
    self->source = TPhotonMylla__sub_80154CB4(self->source_id);
    if (is_parents_unqueued__9TTecLukerFUi(self->source) == 0) {
        ((void (*)(void *))queue_destruction__7TObjectFv)(self);
        return;
    }
    if (self->captured != 0) {
        if (self->level <= 1) {
            ((VObj_802399F8 *)self)->m5(self->source);
        } else {
            ((VObj_802399F8 *)self)->m5(self->source);
            if (self->count != 0) {
                for (i = 0; i < self->count; i++) {
                    target = TPhotonMylla__sub_80154CB4(self->targets[i].id);
                    if (is_parents_unqueued__9TTecLukerFUi(target) != 0) {
                        ((VObj_802399F8 *)self)->m5(target);
                    }
                }
            }
        }
    } else if (self->level <= 1) {
        ((VObj_802399F8 *)self)->m5(self->source);
    } else {
        fn_802370D8(self);
    }
    ((void (*)(void *))queue_destruction__7TObjectFv)(self);
}

void *__dt__9TTecRestaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecResta;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80239C48___vt__9TTecResta_size[sizeof(RecoveredGlobal_80239C48___vt__9TTecResta) == 0x20 ? 1 : -1];
u8 *TTecResta__sub_80239C48(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80239C48___vt__9TTecResta *)&__vt__9TTecResta).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xE0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3810;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    TTecResta__sub_80239548((u8 *) (arg0));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xDC));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (TTecResta__data_805DC908 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        init_cast__9TTecRestaFPv((void*)((void *) (arg0)));
        fn_802393D0((void *) (arg0));
    }
    return arg0;
}

}
