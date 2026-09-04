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
struct Base_8022061C_802205E4 { char pad[0x18]; };
struct VObj_8022061C_802205E4 : Base_8022061C_802205E4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};
struct Base_80220940_802205E4 { char pad[0x18]; };
struct VObj_80220940_802205E4 : Base_80220940_802205E4 {
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
struct Base_80221344_802205E4 { char pad[0x18]; };
struct VObj_80221344_802205E4 : Base_80221344_802205E4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(M2C_UNK, M2C_UNK);
};

extern "C" {

void *TShopJudgmentItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void TShopJudgmentItemWindow__vt5(void *arg0);
void TShopJudgmentItemWindow__vt6(void *arg0);
void *__dt__23TShopJudgmentItemWindowFv(void *arg0, s16 arg1);
void close__23TShopJudgmentItemWindowFPv(void* p);
void handle_input__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_16C_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_170_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_174_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void update__23TShopJudgmentItemWindowFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TShopJudgmentItemWindow__sub_80266388(M2C_UNK, u16, M2C_UNK, M2C_UNK);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);
int queue_destruction__7TObjectFv(void*);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
M2C_UNK set_position_xy(s32, f32, f32);

void TShopJudgmentItemWindow__vt5(void *arg0) {
    struct VObj_802205E4 *temp_r3;

    temp_r3 = (struct VObj_802205E4 *)M2C_FIELD(arg0, void **, 0x164);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopJudgmentItemWindow__vt6(void *arg0) {
    struct VObj_8022061C_802205E4 *temp_r3;

    temp_r3 = (struct VObj_8022061C_802205E4 *)M2C_FIELD(arg0, void **, 0x164);
    if (temp_r3 != NULL) {
        temp_r3->m6();
    }
}

void invoke_callback_174_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x174);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x164));
        queue_destruction__7TObjectFv((void*)(arg0));
    }
}

void invoke_callback_16C_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x16C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x164));
        queue_destruction__7TObjectFv((void*)(arg0));
    }
}

void invoke_callback_170_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x170);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x164));
        queue_destruction__7TObjectFv((void*)(arg0));
    }
}

void update__23TShopJudgmentItemWindowFPv(void *arg0) {
    VObj_80220940_802205E4 *o = (VObj_80220940_802205E4 *)arg0;
    s32 c = *(s32 *)((s8 *)arg0 + 0x14C) - 1;
    *(s32 *)((s8 *)arg0 + 0x14C) = c;
    if (c <= 0 && o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m6(0xB, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(0));
    }
}

void handle_input__23TShopJudgmentItemWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if (TShopWindowBase__sub_802239EC(arg0) != 0) {
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(0xA));
        TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(arg0) != 0) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x158) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x158), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_80221344_802205E4 *)arg0)->m6(3, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(2));
        TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    }
}

void close__23TShopJudgmentItemWindowFPv(void* p) { if (*(unsigned int*)((char*)p + 0x50) != 0) { queue_destruction__7TObjectFv((void*)(*(void**)((char*)p + 0x50))); *(int*)((char*)p + 0x50) = 0; } }

extern M2C_UNK __vt__23TShopJudgmentItemWindow[];

void *__dt__23TShopJudgmentItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TShopJudgmentItemWindow;
        if (M2C_FIELD(arg0, void **, 0x154) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x154)); M2C_FIELD(arg0, M2C_UNK *, 0x154) = 0; }
        if (M2C_FIELD(arg0, void **, 0x160) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x160)); M2C_FIELD(arg0, M2C_UNK *, 0x160) = 0; }
        if (M2C_FIELD(arg0, void **, 0x158) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x158)); M2C_FIELD(arg0, M2C_UNK *, 0x158) = 0; }
        if (M2C_FIELD(arg0, void **, 0x50) != NULL) { queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x50))); M2C_FIELD(arg0, M2C_UNK *, 0x50) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__23TShopJudgmentItemWindow[];
extern void *lbl_805D36E0;

void *TShopJudgmentItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TShopJudgmentItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36E0;
    M2C_FIELD(arg0, u32 *, 0x144) = 0;
    M2C_FIELD(arg0, u32 *, 0x148) = 0;
    M2C_FIELD(arg0, u32 *, 0x150) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x154) = 0;
    M2C_FIELD(arg0, u32 *, 0x158) = 0;
    M2C_FIELD(arg0, u32 *, 0x15C) = 0;
    M2C_FIELD(arg0, u32 *, 0x160) = 0;
    M2C_FIELD(arg0, u32 *, 0x50) = 0;
    M2C_FIELD(arg0, void **, 0x164) = arg2;
    M2C_FIELD(arg0, u32 *, 0x16C) = 0;
    M2C_FIELD(arg0, u32 *, 0x170) = 0;
    M2C_FIELD(arg0, u32 *, 0x174) = 0;
    return arg0;
}

}
