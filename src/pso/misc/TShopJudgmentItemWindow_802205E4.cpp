#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802205E4 { char pad[0x18]; };
struct VObj_802205E4 : Base_802205E4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8022061C { char pad[0x18]; };
struct VObj_8022061C : Base_8022061C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

void invoke_callback_174_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_16C_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_170_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void TShopJudgmentItemWindow__vt5(void *arg0);
void TShopJudgmentItemWindow__vt6(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TShopJudgmentItemWindow__vt5(void *arg0) {
    struct VObj_802205E4 *temp_r3;

    temp_r3 = (struct VObj_802205E4 *)M2C_FIELD(arg0, void **, 0x164);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopJudgmentItemWindow__vt6(void *arg0) {
    struct VObj_8022061C *temp_r3;

    temp_r3 = (struct VObj_8022061C *)M2C_FIELD(arg0, void **, 0x164);
    if (temp_r3 != NULL) {
        temp_r3->m6();
    }
}

void invoke_callback_174_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x174);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x164));
        queue_destruction__7TObjectFv(arg0);
    }
}

void invoke_callback_16C_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x16C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x164));
        queue_destruction__7TObjectFv(arg0);
    }
}

void invoke_callback_170_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x170);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x164));
        queue_destruction__7TObjectFv(arg0);
    }
}

}
