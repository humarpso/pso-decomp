#include "types.h"

struct Base_802125BC { char pad[0x18]; };
struct VObj_802125BC : Base_802125BC {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4();
    virtual int m5();
    virtual int m6();
    virtual int m7(int, int);
    virtual int m8();
};

extern "C" {

int fn_80073DC4(void *, int);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);

void THunterGuildSeqOffline__sub_802125BC(void *arg0) {
    VObj_802125BC *o = (VObj_802125BC *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m7(0x19, 1);
        fn_80073DC4(arg0, 4);
    }
}

}
