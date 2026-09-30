#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Vec_8005C6E4 { f32 x, y, z; };

struct Obj_8005C6E4 {
    u8 pad0[0x38];
    Vec_8005C6E4 pos;
    u8 pad44[0x378 - 0x44];
    void *f378;
};

struct Vec_8005C858 { f32 x, y, z; };

struct Ctl_8005C858 {
    u8 pad0[0x18];
    s32 flags;
};

struct Obj_8005C858 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1c[0x38 - 0x1c];
    Vec_8005C858 pos;
    u8 pad44[0x374 - 0x44];
    s32 f374;
    u8 pad378[0x384 - 0x378];
    Ctl_8005C858 *f384;
    s32 f388;
    Vec_8005C858 dir;
    f32 f398;
    u8 pad39c[0x3c4 - 0x39c];
    f32 f3c4;
    f32 f3c8;
    f32 f3cc;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 get_instance__14TBoss4DarkFalzFv();
s32 get_position_ptr__10TObjPlayerFPv();
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CDC;
extern const f32 lbl_805D8CE0;
extern const f32 lbl_805D8D00;
void TBoss4Uro__sub_8005C6E4(Obj_8005C6E4 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 TBoss4Zako__ct(s32, s32, s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern M2C_UNK __vt__9TBoss4Uro[];
extern s32 lbl_805D27EC;
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CE0;
extern const f32 lbl_805D8D00;
extern const f32 lbl_805D8D04;
extern const f32 lbl_805D8D08;
s32 TBoss4Uro__ct(s32 a0, s32 a1, s32 a2);
}

extern "C" {

void TBoss4Uro__vt61(void* p);
void *__dt__9TBoss4UroFv(void *arg0, s16 arg1);
s32 create__9TBoss4UroFi(s32 arg0);
int TBoss4Uro__sub_8005D6D4(void*);
s32 TObjControl__ct(s32, s32);
int TObjPlayer__sub_800F6B68(void*);
void __dl__7TObjectFPv(void *);
void __dt__10TBoss4ZakoFPvs(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);

#pragma push
#pragma fp_contract on
void TBoss4Uro__sub_8005C6E4(Obj_8005C6E4 *arg0) {
    Vec_8005C6E4 target;
    Vec_8005C6E4 d;
    f32 len;
    if (arg0->f378 == 0) {
        return;
    }
    if (get_instance__14TBoss4DarkFalzFv() == 0) {
        return;
    }
    VecCopy__FP3VecPC3Vec(&target, (void *)get_position_ptr__10TObjPlayerFPv());
    VecCopy__FP3VecPC3Vec(&d, &arg0->pos);
    TBoss6Type1__sub_803D9370(&d, &target);
    d.y = lbl_805D8CBC;
    len = TBoss6Kakusan__sub_803D8BD8(&d);
    if (len >= lbl_805D8CDC) {
        return;
    }
    if (len > lbl_805D8D00) {
        TNpcPlayer__sub_803D97B4(&d);
    } else {
        d.x = lbl_805D8CE0;
        d.z = lbl_805D8CBC;
    }
    arg0->pos.x = lbl_805D8CDC * d.x + target.x;
    arg0->pos.z = lbl_805D8CDC * d.z + target.z;
}
#pragma pop

void TBoss4Uro__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TObjPlayer__sub_800F6B68(p); TBoss4Uro__sub_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

extern M2C_UNK __vt__9TBoss4Uro[];

void *__dt__9TBoss4UroFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TBoss4Uro;
        __dt__10TBoss4ZakoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

#pragma push
#pragma fp_contract on
s32 TBoss4Uro__ct(s32 a0, s32 a1, s32 a2) {
    Obj_8005C858 *o = (Obj_8005C858 *)a0;
    TBoss4Zako__ct(a0, a1, a2);
    o->vt = __vt__9TBoss4Uro;
    o->f0 = lbl_805D27EC;
    o->dir.x = -o->pos.x;
    o->dir.y = lbl_805D8CBC;
    o->dir.z = -o->pos.z;
    if (TBoss6Kakusan__sub_803D8BD8(&o->dir) < lbl_805D8D00) {
        o->dir.x = lbl_805D8CE0;
        o->dir.z = lbl_805D8CBC;
    }
    TNpcPlayer__sub_803D97B4(&o->dir);
    o->f398 = lbl_805D8D08 * calc_boss4_scale__10TObjPlayerFi(o) + lbl_805D8D04;
    o->dir.x = o->dir.x * o->f398;
    o->dir.z = o->dir.z * o->f398;
    o->f388 = 0xFFFF;
    o->f3c4 = lbl_805D8CBC;
    o->f3c8 = lbl_805D8CBC;
    o->f3cc = lbl_805D8CBC;
    o->f374 = 4;
    o->f384->flags |= 1;
    return a0;
}
#pragma pop

s32 create__9TBoss4UroFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3D0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Uro__ct((s32)(var_r31), (s32)(var_r4), (s32)(arg0));
    }
    return var_r31;
}

}
