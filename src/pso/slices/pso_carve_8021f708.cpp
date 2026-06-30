#include "types.h"

struct Base_8021F708 { char pad[0x18]; };
struct VObj_8021F708 : Base_8021F708 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int  m8();
};

extern "C" {

s32 fn_80073DC4(void *, s32);
s32 fn_801F8FD4(s32);
s32 fn_802239EC(void *);
s32 fn_80223A48(void *);

void TShopItemListWindow__sub_8021F708(void *arg0) {
    VObj_8021F708 *o = (VObj_8021F708 *)arg0;
    if (o->m8() != 0 && (fn_80223A48(arg0) != 0 || fn_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        fn_801F8FD4(*(s32 *)((s8 *)arg0 + 0x28));
        fn_80073DC4(arg0, 1);
    }
}

}
