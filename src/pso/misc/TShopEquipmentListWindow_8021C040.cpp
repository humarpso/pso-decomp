#include "types.h"
struct Base_8021C040 { char pad[0x18]; };
struct VObj_8021C040 : Base_8021C040 {
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
struct Base_8021C0D0 { char pad[0x18]; };
struct VObj_8021C0D0 : Base_8021C0D0 {
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

void TShopEquipmentListWindow__sub_8021C040(void *arg0);
void TShopEquipmentListWindow__sub_8021C0D0(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 fn_80073DC4(void *, s32);
s32 fn_801F8FD4(s32);

void TShopEquipmentListWindow__sub_8021C040(void *arg0) {
    VObj_8021C040 *o = (VObj_8021C040 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        fn_801F8FD4(*(s32 *)((s8 *)arg0 + 0x30));
        fn_80073DC4(arg0, 1);
    }
}

void TShopEquipmentListWindow__sub_8021C0D0(void *arg0) {
    VObj_8021C0D0 *o = (VObj_8021C0D0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        fn_801F8FD4(*(s32 *)((s8 *)arg0 + 0x30));
        fn_80073DC4(arg0, 1);
    }
}

}
