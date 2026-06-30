#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_802A752C { char pad[0x8]; };
struct VObj_802A752C : Base_802A752C {
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
    virtual void m10();
    virtual void m11();
    virtual void m12();
};

extern "C" {

M2C_UNK fn_801C00C4(void *, s32);
M2C_UNK fn_802A7848(void *, s32);
s32 fn_802A7868(void *, s32, s32);
s32 fn_802A7994(void *, s32, s32, s32);

s32 fn_802A752C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (fn_802A7868(arg0, arg2, arg3) != 0) {
        return 1;
    }
    fn_801C00C4(arg0, arg2);
    fn_802A7848(arg0, arg3);
    temp_r3 = fn_802A7994(arg0, arg1, arg2, arg3);
    if (temp_r3 != 0) {
        ((VObj_802A752C *)arg0)->m12();
    }
    return temp_r3;
}

}
