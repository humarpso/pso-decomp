#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TPlayerBattleCtrl4P__sub_801BA74C();
void *get_array_entry__20TWindowSubStatusDispFPvi(s32, M2C_UNK);
M2C_UNK TWindowCtrl__sub_8024C818();

struct Base_8026F77C { char pad[0x18]; };
struct VObj_8026F77C : Base_8026F77C {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();virtual void m7();
    virtual void m8();virtual void m9();virtual void m10();virtual void m11();
    virtual void m12();virtual void m13();
    virtual int m14();
};

void TWindowSubStatusDisp__sub_8026F77C(s32 arg0) {
    void *temp_r31;
    VObj_8026F77C *temp_r3;

    TWindowCtrl__sub_8024C818();
    temp_r3 = (VObj_8026F77C *) TPlayerBattleCtrl4P__sub_801BA74C();
    if (temp_r3 != NULL) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        M2C_FIELD(temp_r31, s32 *, 0x20) = temp_r3->m14() + 1;
    }
}

}
