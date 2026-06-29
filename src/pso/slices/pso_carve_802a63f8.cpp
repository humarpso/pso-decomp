#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_802A63F8 { char pad[0x18]; };
struct VObj_802A63F8 : Base_802A63F8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
};

extern "C" {

M2C_UNK fn_80175134(void *);

void TObjSeabedSuisoBrakable__vt2(void *arg0) {
    struct VObj_802A63F8 *o = (struct VObj_802A63F8 *)arg0;
    o->m12();
    fn_80175134(arg0);
}

}
