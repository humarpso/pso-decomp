#include "types.h"
struct Base_80213FD0 { char pad[0x18]; };
struct VObj_80213FD0 : Base_80213FD0 {
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

void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *arg0);
int set_field_20__12TQuestListVMFPvi(void *, int);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);

void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *arg0) {
    VObj_80213FD0 *o = (VObj_80213FD0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m7(0xc, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 0xc);
    }
}

}
