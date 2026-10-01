#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802C1B9C_lbl_80471990 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802C1B9C_lbl_804E081C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_802C1E34 { f32 x, y, z; };

struct Entry_802C1E34 { s32 a; s32 b; s32 c; f32 d; s32 e; };

struct Obj_802C1E34 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C1E34 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_802C1B9C_lbl_80471990 lbl_80471990;
extern RecoveredGlobal_802C1B9C_lbl_804E081C lbl_804E081C;
extern s32 lbl_805D67A8;
extern u8 *lbl_805D67AC;
void TObjPlayer__sub_802C1B9C(void);
void VecCopy__FP3VecPC3Vec(Vec_802C1E34 *, Vec_802C1E34 *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void TBoss1Dragon__sub_8014220C(Vec_802C1E34 *, s32 *, s32 *);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *, s32, s32, Vec_802C1E34 *, f32);
f32 TBoss6Type1__sub_803D9370(Vec_802C1E34 *, Vec_802C1E34 *);
extern Entry_802C1E34 lbl_80471890[];
extern const f64 lbl_80471960[];
extern const f32 lbl_805DE4F8;
s32 TObjPlayer__sub_802C1E34(Obj_802C1E34 *self);
}

extern "C" {

typedef char RecoveredGlobal_802C1B9C_lbl_80471990_size[sizeof(RecoveredGlobal_802C1B9C_lbl_80471990) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802C1B9C_lbl_804E081C_size[sizeof(RecoveredGlobal_802C1B9C_lbl_804E081C) == 0x10 ? 1 : -1];
void TObjPlayer__sub_802C1B9C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804E081C.value, 0, 0, 0));
    }
    lbl_805D67A8 = var_r0;
    lbl_805D67AC = TLanguage__sub_801E4874((s32) &lbl_80471990.value);
}
s32 TObjPlayer__sub_802C1E34(Obj_802C1E34 *self) {
    Vec_802C1E34 a;
    Vec_802C1E34 b;
    Vec_802C1E34 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &b, lbl_80471890[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    TBoss6Type1__sub_803D9370(&d, &a);
    TBoss1Dragon__sub_8014220C(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

}
