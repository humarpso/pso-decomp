#include "types.h"
typedef struct Pair_80048C04 {
    s32 id;
    f32 val;
} Pair_80048C04;

struct TBase_80048C04 { char pad[0x18]; };

struct Target_80048C04 : TBase_80048C04 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(s32, Pair_80048C04 *, s32, s32, s32);
};

struct SBase_80048C04 { char pad[0x18]; };

struct Self_80048C04 : SBase_80048C04 {
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
    virtual void m60(); virtual void m61();
};

typedef struct Fields_80048C04 {
    u8 pad0[0x10];
    s32 id;
    u8 pad14[0x338 - 0x14];
    u16 target;
    u8 pad33A[0x390 - 0x33A];
    s32 state;
} Fields_80048C04;

extern "C" {
void obj_setFlags30(void *, u32);
s32 TObjVoloptPillar__sub_80048118(s32);
Target_80048C04 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
extern Pair_80048C04 lbl_804366E8[];
void fn_80048C04(Self_80048C04 *self);
}

extern "C" {

void fn_80048C04(Self_80048C04 *self) {
    Fields_80048C04 *f = (Fields_80048C04 *)self;
    Target_80048C04 *t;
    Pair_80048C04 p = lbl_804366E8[0];
    p.val = (f32)TObjVoloptPillar__sub_80048118(2);
    t = TPlayerBattleCtrl4P__sub_801BA74C(f->target);
    if (t != NULL) {
        Pair_80048C04 q = p;
        t->m21(f->id, &q, 0, -1, -1);
    }
    f->state = 0xF;
    obj_setFlags30(self, 0x800);
    self->m61();
}

}
