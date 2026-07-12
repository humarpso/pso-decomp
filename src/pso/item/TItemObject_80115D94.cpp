#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemObject__vt12(void *arg0);
s32 TItemObject__sub_80101A1C();
M2C_UNK refresh_if_current_player__20TWindowSubStatusDispFPv(void *);

struct Base_80115D94 { char pad[0x18]; };
struct VObj_80115D94 : Base_80115D94 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual void m31(); virtual void m32(); virtual void m33();
    virtual s32 m34();
};

void TItemObject__vt12(void *arg0) {
    s32 temp_r31;

    temp_r31 = TItemObject__sub_80101A1C();
    if (((VObj_80115D94 *)arg0)->m34() > temp_r31) {
        refresh_if_current_player__20TWindowSubStatusDispFPv(arg0);
    }
}

}
