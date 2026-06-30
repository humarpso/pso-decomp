#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D55C0;

struct Base_80223AA4 { char pad[0x18]; };
struct VObj_80223AA4 : Base_80223AA4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

void fn_80223AA4(void *arg0) {
    if ((s32) lbl_805D55C0 == 0) {
        ((VObj_80223AA4 *)arg0)->m9();
    }
}

}
