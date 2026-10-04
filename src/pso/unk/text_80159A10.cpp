#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_48 { u8 bytes[0x48]; };

struct Vec_80159A10 { f32 x, y, z; };

struct VecTbl_80159A10 { Vec_80159A10 v[6]; };

struct Bird_80159A10 {
    s32 f0;
    u8 pad4[0x24 - 0x4];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    u8 *model;
    u8 pad38[0x68 - 0x38];
    f32 f68, f6C, f70;
    u8 pad74[0x84 - 0x74];
    s32 f84;
    s32 f88;
    s32 f8C;
    u8 pad90[0x94 - 0x90];
    f32 f94;
    u8 *motion;
    f32 f9C, fA0, fA4;
    f32 fA8, fAC, fB0;
    s32 fB4;
    s32 count;
    Vec_80159A10 *vecs;
    s32 *angs;
    f32 fC4, fC8, fCC;
    f32 fD0;
    f32 fD4;
    f32 fD8;
    s32 fDC;
    s32 fE0;
    s32 fE4;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
u8 *get_bml_model(s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
void TOBoss4__ct(void *);
s32 rand(void);
f32 sin_table_lookup(s32);
extern VecTbl_80159A10 lbl_80440348[];
extern u8 __vt__11TOBoss4Bird[];
extern s32 lbl_805D2EB4;
extern s32 lbl_805D58A8;
extern const f32 lbl_805DB318;
extern const f32 lbl_805DB31C;
extern const f32 lbl_805DB32C;
extern const f32 lbl_805DB338;
extern const f32 lbl_805DB33C;
extern const f32 lbl_805DB344;
extern const f32 lbl_805DB348;
extern const f32 lbl_805DB34C;
extern const f32 lbl_805DB350;
u8 *TOBoss4Bird__ct(u8 *arg0, s32 arg1);
}

extern "C" {

#pragma push
#pragma fp_contract on
u8 *TOBoss4Bird__ct(u8 *arg0, s32 arg1) {
    Bird_80159A10 *o = (Bird_80159A10 *)arg0;
    s32 i;
    TOBoss4__ct(arg0);
    *(u8 **)(arg0 + 0x18) = __vt__11TOBoss4Bird;
    o->f0 = lbl_805D2EB4;
    ((VObj_18_1a504b *)arg0)->m5(arg1);
    o->model = get_bml_model(lbl_805D58A8, 0);
    o->f94 = *(f32 *)(*(u8 **)(o->model + 4) + 0x14);
    o->f24 = TObjFish__sub_8001EDB0(lbl_805D58A8, 0);
    o->motion = get_bml_motion(lbl_805D58A8, 0);
    o->f9C = (f32)*(u32 *)(o->motion + 4) - lbl_805DB344;
    o->fA0 = lbl_805DB344;
    o->fA4 = lbl_805DB31C;
    o->fA8 = lbl_805DB344 + o->f68;
    o->fAC = lbl_805DB32C + o->f6C;
    o->fB0 = lbl_805DB348 + o->f70;
    o->fB4 = 0;
    o->count = o->f84 + 3;
    if (o->count < 0) {
        o->count = 1;
    } else if (o->count > 6) {
        o->count = 6;
    }
    o->vecs = (Vec_80159A10 *)alloc_buffer__11TOBoss4RockFPv(o->count * 0xC);
    o->angs = (s32 *)alloc_buffer__11TOBoss4RockFPv(o->count * 4);
    {
        VecTbl_80159A10 tbl = lbl_80440348[0];
        for (i = 0; i < o->count; i++) {
            VecCopy__FP3VecPC3Vec(&o->vecs[i], &tbl.v[i]);
            o->angs[i] = 0x8000;
        }
    }
    o->fC4 = o->fC8 = o->fCC = lbl_805DB31C;
    o->fD8 = lbl_805DB34C * (f32)o->f88 + lbl_805DB344;
    o->fDC = (s32)(lbl_805DB338 * (lbl_805DB33C / (lbl_805DB350 / o->fD8)));
    o->fE0 = (s32)(lbl_805DB338 * (lbl_805DB33C * (lbl_805DB318 * (f32)rand())));
    o->fD0 = lbl_805DB34C * (f32)o->f8C + lbl_805DB344;
    o->fD4 = o->fD0 * sin_table_lookup(o->fE0);
    o->fE4 = 0;
    return arg0;
}
#pragma pop

}
