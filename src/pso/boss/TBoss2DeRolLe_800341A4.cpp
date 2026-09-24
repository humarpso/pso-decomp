#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_800341F0 { char pad[0x18]; };

struct V_800341F0 : VBase_800341F0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5();
    virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41();
    virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53();
    virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65();
    virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77();
    virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Obj_800341F0 : V_800341F0 {
    u8 pad1c[0x5e0 - 0x1c];
    V_800341F0 *parts[10];
};

struct B_80034258 { u8 pad[0x18]; };

struct V_80034258 : B_80034258 {
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
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
};

struct Obj_80034258 : V_80034258 {
    u8 pad2[0x5e0 - 0x1c];
    V_80034258 *parts[10];
};

extern "C" {
void TBoss2DeRolLe__sub_800341F0(Obj_800341F0 *self);
void TBoss2DeRolLe__sub_80034258(Obj_80034258 *self);
}

extern "C" {

void update_check__13TBoss2DeRolLeFPv(void *arg0);
M2C_UNK clear_play_flags__13TBoss2DeRolLeFPv(void *);
M2C_UNK TObjEneDD__vt90();
s32 check_v2_mode__9TObjEneDDFv();

void update_check__13TBoss2DeRolLeFPv(void *arg0) {
    TObjEneDD__vt90();
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 8) || (check_v2_mode__9TObjEneDDFv() != 0)) {
        clear_play_flags__13TBoss2DeRolLeFPv(arg0);
    }
}
void TBoss2DeRolLe__sub_800341F0(Obj_800341F0 *self) {
    s32 i;
    self->m94();
    for (i = 0; i < 10; i++) {
        self->parts[i]->m94();
    }
}
void TBoss2DeRolLe__sub_80034258(Obj_80034258 *self) {
    s32 i;
    self->m93();
    for (i = 0; i < 10; i++) {
        self->parts[i]->m93();
    }
}

}
