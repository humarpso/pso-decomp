#include "types.h"

struct Base_80220940 { char pad[0x18]; };
struct VObj_80220940 : Base_80220940 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(int, int);
    virtual void m7();
    virtual int  m8();
};

extern "C" {

s32 fn_80073DC4(void *, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);

void TShopJudgmentItemWindow__sub_80220940(void *arg0) {
    VObj_80220940 *o = (VObj_80220940 *)arg0;
    s32 c = *(s32 *)((s8 *)arg0 + 0x14C) - 1;
    *(s32 *)((s8 *)arg0 + 0x14C) = c;
    if (c <= 0 && o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m6(0xB, 1);
        fn_80073DC4(arg0, 0);
    }
}

}
