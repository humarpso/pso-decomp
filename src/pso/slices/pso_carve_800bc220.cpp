#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VPad800BC220 { char pad[0x18]; };
struct VObj800BC220 : VPad800BC220 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(void*, void*, s32);
};

extern "C" {

void fn_800BC220(void *arg0, void *arg1, void *arg2) {
    ((VObj800BC220*)arg0)->m12(arg1, arg2, 0);
}

}
