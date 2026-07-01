#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK fn_80073DC4(void *, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
extern s32 lbl_805D622C;
extern s32 lbl_805D6230;
}

struct Base_8021D5D4 { char pad[0x18]; };
struct VObj_8021D5D4 : Base_8021D5D4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32  m8();
};

extern "C" {

void fn_8021D5D4(void *arg0) {
    if ((((VObj_8021D5D4*)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021D5D4*)arg0)->m4(lbl_805D622C, 1);
        fn_80073DC4(arg0, lbl_805D6230);
    }
}

}
