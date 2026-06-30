#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80182954 { char pad[0x18]; };
struct VObj_80182954 : Base_80182954 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
};

extern "C" {

void fn_80182954(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        ((VObj_80182954 *)arg0)->m13();
        return;
    case 1:
        ((VObj_80182954 *)arg0)->m15();
        return;
    case 2:
        ((VObj_80182954 *)arg0)->m16();
        return;
    case 3:
        ((VObj_80182954 *)arg0)->m14();
        return;
    }
}

}
