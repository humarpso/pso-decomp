#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TBoss2Joint__vt42(void);
void TBoss2Joint__vt43(void);
void TBoss2Joint__vt44(void);
void TBoss2Joint__vt45(void);
void TBoss2Joint__vt46(void);
void TBoss2Joint__vt47(void);
void TBoss2Joint__vt48(void);

void TBoss2Joint__vt42(void) {  }
void TBoss2Joint__vt43(void) {  }
void TBoss2Joint__vt44(void) {  }
void TBoss2Joint__vt45(void) {  }
void TBoss2Joint__vt46(void) {  }
void TBoss2Joint__vt47(void) {  }
void TBoss2Joint__vt48(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8003691C
#include "types.h"

extern "C" {

int call_36A90_with_1__11TBoss2JointFPv(void* p);
int TBoss2Joint__sub_80036A90(void*, int);

int call_36A90_with_1__11TBoss2JointFPv(void* p) { return TBoss2Joint__sub_80036A90(p, 1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036B70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Joint__vt91(void *arg0);

M2C_UNK TObjEneDD__vt91(void *);
M2C_UNK TObjEneDD__vt90(void *);

void TBoss2Joint__vt91(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 6) {
        TObjEneDD__vt90(arg0);
        return;
    }
    TObjEneDD__vt91(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036C4C
#include "types.h"

extern "C" {

void update_position_history__11TBoss2JointFi(s32 arg0);
void TBoss2Joint__vt59(void);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void update_position_history__11TBoss2JointFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss2Joint__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036C90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Joint__vt60(u8 *arg0);
M2C_UNK TBoss2Joint__sub_80036A90(void *, s32);
M2C_UNK TBoss2DeRolLe__sub_800339BC(void *, f32, f32);
M2C_UNK TBoss2DeRolLe__sub_80034134(s32, s32, u16);
M2C_UNK TBoss8Dragon__sub_800BB780(void *);

extern const f32 lbl_805D8484;
extern const f32 lbl_805D8488;

}

struct TBJ { char pad[0x18]; };
struct VTbj : TBJ {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100(); virtual void m101();
    virtual void m102();
};

extern "C" {

void TBoss2Joint__vt60(u8 *arg0) {
    s32 temp_r31;
    struct TBJ *self = (struct TBJ *)arg0;

    temp_r31 = M2C_FIELD(self, s16 *, 0x2B8) - M2C_FIELD(self, s16 *, 0x32C);
    if (!(M2C_FIELD(self, s32 *, 0x38C) & 1)) {
        TBoss2Joint__sub_80036A90(self, 0);
        M2C_FIELD(self, s32 *, 0x394) = (s32) (M2C_FIELD(self, s32 *, 0x394) - temp_r31);
        if ((s32) M2C_FIELD(self, s32 *, 0x394) <= 0) {
            M2C_FIELD(self, s32 *, 0x394) = 0;
            ((VTbj *)self)->m102();
        }
    } else {
        TBoss2DeRolLe__sub_800339BC(arg0 + 0x38, lbl_805D8484, lbl_805D8488);
        TBoss2DeRolLe__sub_80034134(M2C_FIELD(self, s32 *, 0x10), temp_r31, M2C_FIELD(self, u16 *, 0x2D4));
    }
    M2C_FIELD(self, s16 *, 0x32C) = (s16) M2C_FIELD(self, s16 *, 0x2B8);
    TBoss8Dragon__sub_800BB780(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036D40
#include "types.h"

extern "C" {

void TBoss2Joint__vt26(void);
void TBoss2Joint__vt61(void* p);

void TBoss2Joint__vt61(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffff7ff; }
void TBoss2Joint__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036E48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TBoss2JointFv(void *arg0, s16 arg1);
void TObjEneDD__vt0(void *, int);
void __dl__7TObjectFPv(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__11TBoss2Joint[];

void *__dt__11TBoss2JointFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBoss2Joint;
        TObjEneGibbles__sub_80156720(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
