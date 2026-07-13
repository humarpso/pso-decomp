#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80214490 { char pad[0x18]; };
struct V_A_80214490 : Base_A_80214490 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();
    virtual M2C_UNK m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_80214544 { char pad[0x18]; };
struct V_A_80214544 : Base_A_80214544 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void m7(s32, s32);
    virtual s32 m8();
};

extern "C" {

void update__15TShopWindowBaseFPv(void *arg0);
void update_confirm_input__15TShopWindowBaseFPv(void *arg0);
M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

void update__15TShopWindowBaseFPv(void *arg0) {
    u32 v = M2C_FIELD(arg0, u32 *, 0x3C);
    if (v != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv((void *)(v)) != 1) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80214490 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214490 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            TQuestListVM__sub_80073DC4(arg0, 0xC);
        }
    }
}

void update_confirm_input__15TShopWindowBaseFPv(void *arg0) {
    void *parent = M2C_FIELD(arg0, void **, 0x3C);
    if (parent != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv((void *)(parent)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80214544 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214544 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            TQuestListVM__sub_80073DC4(arg0, 0xC);
        }
    }
}

}
