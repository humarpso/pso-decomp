#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8011620C { char pad[0x18]; };
struct VObj_8011620C : Base_8011620C {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m35();
    virtual s32 m36();
};

extern "C" {

M2C_UNK TItemObject__sub_80115D6C(void *, s32);

s32 TItemObject__vt35(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = ((VObj_8011620C *)arg0)->m36();
    if (arg1 <= temp_r3) {
        TItemObject__sub_80115D6C(arg0, temp_r3 - arg1);
        return 1;
    }
    return 0;
}

}
