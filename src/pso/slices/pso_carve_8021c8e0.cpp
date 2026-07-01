#include "types.h"

struct Base_8021C8E0 { char pad[0x18]; };
struct VObj_8021C8E0 : Base_8021C8E0 {
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

void TShopEquipmentSellWindow__sub_8021C8E0(void *arg0) {
    VObj_8021C8E0 *o = (VObj_8021C8E0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xc, 1);
        fn_80073DC4(arg0, 5);
    }
}

}
