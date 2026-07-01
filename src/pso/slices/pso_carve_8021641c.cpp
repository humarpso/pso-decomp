#include "types.h"

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

int fn_80073DC4(void *, int);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);

void TMedicalCenterSequence__sub_8021641C(void *arg0) {
    VObj_8021641C *o = (VObj_8021641C *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0x22, 1);
        fn_80073DC4(arg0, 0xa);
    }
}

}
