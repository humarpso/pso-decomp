#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80118334 { char pad[0x18]; };
struct VObj_80118334 : Base_80118334 {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m51();
};

extern "C" {

void TItemProShield__vt14(void *arg0);
M2C_UNK TObjPlayer__sub_8010069C(void *);
M2C_UNK TItemEquipBase__sub_8010A78C(void *);
M2C_UNK TItemEquipBase__sub_8010A89C(void *, s32);

void TItemProShield__vt14(void *arg0) {
    ((VObj_80118334 *)arg0)->m51();
    TItemEquipBase__sub_8010A89C(arg0, M2C_FIELD(arg0, s32 *, 0x194));
    if (M2C_FIELD(arg0, s32 *, 0x19C) & 4) {
        TObjPlayer__sub_8010069C(arg0);
    }
    TItemEquipBase__sub_8010A78C(arg0);
}

}
