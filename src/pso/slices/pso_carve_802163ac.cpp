#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_802163AC { char pad[0x18]; };
struct VObj_802163AC : Base_802163AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int m8();
};

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_80223760(void *);
s32 fn_802239EC(void *);
s32 fn_80223A48(void *);

void TMedicalCenterSequence__vt11(void *arg0) {
    if ((((VObj_802163AC *)arg0)->m8() != 0) && ((fn_80223A48(arg0) != 0) || (fn_802239EC(arg0) != 0))) {
        fn_80223760(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
