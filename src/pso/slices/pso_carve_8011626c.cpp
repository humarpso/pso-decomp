#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8011626C { char pad[0x18]; };
struct VObj_8011626C : Base_8011626C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42();
};

extern "C" {

M2C_UNK fn_80099EF8(void *);
s32 fn_800FFE1C();
M2C_UNK TItemObject__sub_800FFE4C(void *);
M2C_UNK fn_80100508(void *, M2C_UNK);
M2C_UNK fn_80100564(void *, M2C_UNK);
M2C_UNK fn_80100824();
s32 fn_80116578(void *);

void TItemObject__vt29(void *arg0) {
    struct VObj_8011626C *o = (struct VObj_8011626C *)arg0;
    if (fn_800FFE1C() != 0) {
        TItemObject__sub_800FFE4C(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        M2C_FIELD(arg0, u8 *, 0x101) = 0U;
        o->m42();
        if ((u8) M2C_FIELD(arg0, u8 *, 0x101) == 0) {
            fn_80100564(arg0, 0x1AF);
            fn_80100508(arg0, 0x5B211);
        }
        if (fn_80116578(arg0) & 0x10) {
            fn_80099EF8(arg0);
            fn_80100824();
        }
    }
}

}
