#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VPad800BC050_800bc050 { char pad[0x18]; };
struct VObj800BC050_800bc050 : VPad800BC050_800bc050 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(void*, s32);
};

extern "C" {

void dispatch_vt15__10TObjPlayerFPvPv(void *arg0, void *arg1);

void dispatch_vt15__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    ((VObj800BC050_800bc050*)arg0)->m15(arg1, 0);
}

}
