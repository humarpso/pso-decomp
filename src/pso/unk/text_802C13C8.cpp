#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_802C1660 { f32 x, y, z; };

struct Entry_802C1660 { s32 a; s32 b; s32 c; f32 d; s32 e; };

struct Obj_802C1660 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C1660 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

extern "C" {
extern u32 lbl_805D67B0;
extern u32 lbl_805D67B4;
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80471978;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804E0848;
void TObjPlayer__sub_802C13C8(void);
void VecCopy__FP3VecPC3Vec(Vec_802C1660 *, Vec_802C1660 *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void TBoss1Dragon__sub_8014220C(Vec_802C1660 *, s32 *, s32 *);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *, s32, s32, Vec_802C1660 *, f32);
f32 TBoss6Type1__sub_803D9370(Vec_802C1660 *, Vec_802C1660 *);
extern Entry_802C1660 lbl_804718CC[];
extern const f64 lbl_80471960[];
extern const f32 lbl_805DE4F8;
s32 TObjPlayer__sub_802C1660(Obj_802C1660 *self);
}

extern "C" {

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void TObjPlayer__sub_802C13C8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804E0848.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D67B0) = var_r0;
    (*(u8 * *)&lbl_805D67B4) = TLanguage__sub_801E4874((s32) &lbl_80471978.value);
}
s32 TObjPlayer__sub_802C1660(Obj_802C1660 *self) {
    Vec_802C1660 a;
    Vec_802C1660 b;
    Vec_802C1660 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &b, lbl_804718CC[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    TBoss6Type1__sub_803D9370(&d, &a);
    TBoss1Dragon__sub_8014220C(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

}
