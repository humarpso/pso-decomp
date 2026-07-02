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
struct Base_8021641C { char pad[0x18]; };
struct VObj_8021641C : Base_8021641C {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4(int, int);
    virtual int m5();
    virtual int m6();
    virtual int m7();
    virtual int m8();
};

extern "C" {

void TMedicalCenterSequence__sub_8021641C(void *arg0);
void TMedicalCenterSequence__vt11(void *arg0);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
int fn_80073DC4(void *, int);
M2C_UNK fn_80223760(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TMedicalCenterSequence__vt11(void *arg0) {
    if ((((VObj_802163AC *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48((void *)(arg0)) != 0) || (TShopWindowBase__sub_802239EC((void *)(arg0)) != 0))) {
        fn_80223760(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void TMedicalCenterSequence__sub_8021641C(void *arg0) {
    VObj_8021641C *o = (VObj_8021641C *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48((void *)(arg0)) != 0 || TShopWindowBase__sub_802239EC((void *)(arg0)) != 0)) {
        o->m4(0x22, 1);
        fn_80073DC4(arg0, 0xa);
    }
}

}
