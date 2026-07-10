#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80221344 { char pad[0x18]; };
struct VObj_80221344 : Base_80221344 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(M2C_UNK, M2C_UNK);
};

extern "C" {

void handle_input__23TShopJudgmentItemWindowFPv(void *arg0);
f32 TShopWindowBase__sub_8022393C(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK fn_80073DC4(void *, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8024422C(s32, f32, f32);
s32 fn_80266388(M2C_UNK, u16, M2C_UNK, M2C_UNK);
s32 fn_8026CBB8(M2C_UNK);

u16 obj_getField1c(s32);

void handle_input__23TShopJudgmentItemWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if (TShopWindowBase__sub_802239EC(arg0) != 0) {
        fn_80073DC4(arg0, 0xA);
        fn_8022675C(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(arg0) != 0) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x158) = fn_80266388(fn_8026CBB8(0x2B), temp_r31, 0, 0);
        temp_f31 = TShopWindowBase__sub_8022393C(arg0);
        fn_8024422C(M2C_FIELD(arg0, s32 *, 0x158), TShopWindowBase__sub_8022393C(arg0), temp_f31);
        ((VObj_80221344 *)arg0)->m6(3, 1);
        fn_80073DC4(arg0, 2);
        fn_8022675C(0x52D01, 0, 0, 0);
    }
}

}
