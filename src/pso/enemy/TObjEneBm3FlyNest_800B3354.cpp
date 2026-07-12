#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B3354 { char pad[0x18]; };
struct VObj_800B3354 : Base_800B3354 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93();
    virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98();
    virtual void m99();
    virtual void m100();
};
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_800B3428 { char pad[0x18]; };
struct VObj_800B3428 : Base_800B3428 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m94();
VA
VA
VA
VA
VA
    virtual void m100();
};

extern "C" {

void TObjEneBm3FlyNest__sub_800B3354(void *arg0, s32 arg1);
void TObjEneBm3FlyNest__sub_800B3428(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjEneBm3FlyNest__sub_800B39CC(void *);
s32 TObjEneBm3FlyNest__sub_800B3AC8();
M2C_UNK TObjEneBm3FlyNest__sub_800B3ADC(void *);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805D9D04;
extern const f32 lbl_805D9D30;

void TObjEneBm3FlyNest__sub_800B3354(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_800B3354 *)arg0)->m94();
        TObjEneDD__sub_800BBA04(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9D04;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjEneDD__sub_800BBA18(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (objInBand__FP7GameObjf(arg0, lbl_805D9D30) != 0) {
            TObjEneBm3FlyNest__sub_800B39CC(arg0);
            M2C_FIELD(arg0, s32 *, 0x4B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B8) - 1);
        }
        ((VObj_800B3354 *)arg0)->m100();
        break;
    }
}

extern const f32 lbl_805D9D04;

void TObjEneBm3FlyNest__sub_800B3428(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((struct VObj_800B3428 *)arg0)->m94();
        TObjEneDD__sub_800BBA04(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9D04;
        M2C_FIELD(arg0, s32 *, 0x4C0) = 1;
        M2C_FIELD(arg0, s32 *, 0x4C4) = 0x96;
        return;
    case 3:
        if (TObjEneBm3FlyNest__sub_800B3AC8() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        TObjEneBm3FlyNest__sub_800B3ADC(arg0);
        ((struct VObj_800B3428 *)arg0)->m100();
        break;
    }
}

}
