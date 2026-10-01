#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct VBase_18_c44252 { char pad[0x18]; };

struct VObj_18_c44252 : VBase_18_c44252 {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

struct Stack_800E7324 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800E7324_lbl_8043CF94 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec_800E75AC { f32 x; f32 y; f32 z; };

struct Node_800E75AC { u8 pad[0x2c]; void *child; };

struct Obj_800E75AC { u8 pad[0x34]; Node_800E75AC *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

struct Sub_800E750C { f32 f0; u8 pad4[4]; f32 f8; f32 fC; f32 f10; s32 f14; s32 f18; };

struct Obj_800E750C { u8 pad0[0x60]; s32 f60; u8 pad1[0xA4 - 0x64]; Sub_800E750C *fA4; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
f32 get_random_float__8TObjFishFv(f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
extern const f32 TObjEneMe3SinowZoa__data_805DF320;
extern const f32 lbl_805DF350;
bool TObjEneMe3SinowZoa__sub_8031A820(u8 *arg0);
s32 TObjPlayer__sub_803D97F0(void *);
void TObjPlayer__sub_803D7B68(s32, f32);
s32 TObjPlayer__sub_803D7CA4(void *);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 TObjPlayer__sub_803D9B78();
extern u8 lbl_8058D490[];
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;
f32 TObjEneMe3SinowZoa__sub_8031A9A0(Obj_800E75AC *self);
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;
void fn_8002B630(void *, void *, s32);
void TObjPlayer__sub_801564A0(void *, s32, f32, f32);
extern u8 lbl_804E87C4[];
extern const f32 lbl_805DF304;
extern const f32 TObjEneMe3SinowZoa__data_805DF2FC;
u8 TObjEneMe3SinowZoa__sub_8031A900(Obj_800E750C *arg0, s32 arg1, f32 farg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
bool TObjEneMe3SinowZoa__sub_8031A820(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (get_random_float__8TObjFishFv(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C)) >= TObjEneMe3SinowZoa__data_805DF320) {
        if (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= M2C_FIELD(arg0, f32 *, 0x3F4)) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (0xC));
            goto block_4;
        }
        return 0;
    }
block_4:
    if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805DF350) {
        return 0;
    }
    temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x3A8) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f31 = (M2C_FIELD(arg0, f32 *, 0x3A0) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60))) + temp_f31_2;
    return (temp_f31 < TBoss8Dragon__sub_803D64DC(0x1E00)) == 0;
}
#pragma pop

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800E7324_lbl_8043CF94_size[sizeof(RecoveredGlobal_800E7324_lbl_8043CF94) == 0xC ? 1 : -1];

#pragma push
#pragma fp_contract on
u8 TObjEneMe3SinowZoa__sub_8031A900(Obj_800E750C *arg0, s32 arg1, f32 farg0) {
    f32 f2 = farg0 * lbl_805DF304;
    Sub_800E750C *s = arg0->fA4;
    u8 res;
    s32 a = arg0->f60;
    s32 b = s->f18;
    s->f0 = TObjEneMe3SinowZoa__data_805DF31C;
    s->f8 = f2;
    s->fC = f2;
    s->f10 = TObjEneMe3SinowZoa__data_805DF2FC;
    s->f14 = 1;
    s->f18 = 0x9D01;
    arg0->f60 = arg1;
    TObjPlayer__sub_801564A0(arg0, arg1, TObjEneMe3SinowZoa__data_805DF31C, f2);
    res = (s->f18 & 0x380000) != 0;
    fn_8002B630(s, lbl_804E87C4, s->f18 & 0x380000);
    s->f18 = b;
    arg0->f60 = a;
    return res;
}
#pragma pop

f32 TObjEneMe3SinowZoa__sub_8031A9A0(Obj_800E75AC *self) {
    Vec_800E75AC v;
    Node_800E75AC *node;
    v.x = TObjEneMe3SinowZoa__data_805DF31C;
    v.y = TObjEneMe3SinowZoa__data_805DF31C;
    v.z = TObjEneMe3SinowZoa__data_805DF31C;
    TObjPlayer__sub_803D97F0(lbl_8058D490);
    TObjPlayer__sub_803D7B68(self->ff8, self->fc0);
    node = self->node;
    TObjPlayer__sub_803D7CA4(node);
    TObjPlayer__sub_803D7CA4(node->child);
    TCameraCtrl__sub_803D8934(0, &v, &v);
    TObjPlayer__sub_803D9B78();
    return v.y;
}
#pragma pop

}
