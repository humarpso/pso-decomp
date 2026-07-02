#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021C870 { char pad[0x18]; };
struct VObj_8021C870 : Base_8021C870 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021C8A8 { char pad[0x18]; };
struct VObj_8021C8A8 : Base_8021C8A8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
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

void TShopEquipmentSellWindow__sub_8021C8E0(void *arg0);
void TShopEquipmentSellWindow__vt4(void *arg0);
void TShopEquipmentSellWindow__vt5(void *arg0);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
int fn_80073DC4(void *, int);

void TShopEquipmentSellWindow__vt5(void *arg0) {
    struct VObj_8021C870 *o = (struct VObj_8021C870 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentSellWindow__vt4(void *arg0) {
    struct VObj_8021C8A8 *o = (struct VObj_8021C8A8 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m4();
    }
}

void TShopEquipmentSellWindow__sub_8021C8E0(void *arg0) {
    VObj_8021C8E0 *o = (VObj_8021C8E0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xc, 1);
        fn_80073DC4(arg0, 5);
    }
}

}
