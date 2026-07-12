#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021D660 { char pad[0x18]; };
struct VObj_8021D660 : Base_8021D660 {
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

void close_if_done__22TShopEquipmentSequenceFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK TShopSequence__sub_80223724(void *);
M2C_UNK TShopSequence__sub_80223760(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_if_done__22TShopEquipmentSequenceFPv(void *arg0) {
    if ((((VObj_8021D660 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        TShopSequence__sub_80223724(arg0);
        TShopSequence__sub_80223760(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
