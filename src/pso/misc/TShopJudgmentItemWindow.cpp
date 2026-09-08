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

struct Base_18 { char pad[0x18]; };

struct VObj_18 : Base_18 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual M2C_UNK m6(int, int); virtual void m7();
    virtual M2C_UNK m8();
};

extern "C" {
s32 obj_getPtr2B0_20(int);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 copy_to_item_data__5TItemFPvPv(int, void *);
s32 has_flag_128__10TObjPlayerFPv(int);
M2C_UNK copy_item_data__6TLobbyFPvPv(void *, void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(int);
M2C_UNK update_all__6TLobbyFi(void *);
M2C_UNK TLobby__sub_8022727C(void *);
void TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(int);
s32 select_cursor_entry__6TLobbyFPv(int);
extern M2C_UNK lbl_8044C1D4[];
void TShopJudgmentItemWindow__sub_80221134(u8 *arg0);
void invoke_callback_174_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_16C_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_170_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void update__23TShopJudgmentItemWindowFPv(void *arg0);
void TShopJudgmentItemWindow__sub_80221134(u8 *arg0);
void handle_input__23TShopJudgmentItemWindowFPv(void *arg0);
void close__23TShopJudgmentItemWindowFPv(void* p);
M2C_UNK TShopJudgmentItemWindow__sub_8022072C();
M2C_UNK TShopJudgmentItemWindow__sub_802209D8();
M2C_UNK TShopJudgmentItemWindow__sub_80220CE4();
M2C_UNK TShopJudgmentItemWindow__sub_80220F68();
M2C_UNK TShopJudgmentItemWindow__sub_80221440(void *);
void TShopJudgmentItemWindow__vt9(u8 *arg0);
}

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

#pragma push
#pragma fp_contract on
void TShopJudgmentItemWindow__sub_80221134(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r31;
    if (((VObj_18 *) arg0)->m8() != 0) {
        if ((M2C_FIELD(arg0, void **, 0x158) != NULL) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x158)) != 0)) {
            temp_r3 = TWindowSubComCard__sub_80265BF8((int) (M2C_FIELD(arg0, u32 *, 0x158)));
            if ((temp_r3 == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x154) != 0U)) {
                if (obj_getPtr2B0_20((int) (M2C_FIELD(arg0, s32 *, 0x24))) < 0x64) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                    M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                    ((VObj_18 *) arg0)->m6(5, 1);
                    set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (0xB)));
                    return;
                }
                temp_r31 = arg0 + (select_cursor_entry__6TLobbyFPv((int) (M2C_FIELD(arg0, u32 *, 0x154))) * 8);
                if (copy_to_item_data__5TItemFPvPv((int) (M2C_FIELD(temp_r31, s32 *, 0x54)), (void *) (arg0 + 0x3C)) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x168) = has_flag_128__10TObjPlayerFPv((int) (M2C_FIELD(temp_r31, s32 *, 0x54)));
                    copy_item_data__6TLobbyFPvPv((void *) (arg0 + 0x28), (void *) (arg0 + 0x3C));
                    update_all__6TLobbyFi((void *) (arg0 + 0x28));
                    M2C_FIELD(arg0, s32 *, 0x14C) = 0x5F;
                    if (M2C_FIELD(arg0, void **, 0x154) != NULL) {
                        TWindow__close(M2C_FIELD(arg0, void **, 0x154));
                        M2C_FIELD(arg0, u32 *, 0x154) = 0U;
                    }
                    TLobby__sub_8022727C((void *) (lbl_8044C1D4));
                }
                TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                ((VObj_18 *) arg0)->m6(6, 1);
                set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (3)));
                return;
            }
            if (temp_r3 == 1) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                ((VObj_18 *) arg0)->m6(4, 1);
                set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (1)));
                clear_selected_and_update_entry__14TWindowSubItemFPv((int) (M2C_FIELD(arg0, u32 *, 0x154)));
                return;
            }
            goto block_14;
        }
block_14:
        if ((M2C_FIELD(arg0, void **, 0x158) != NULL) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x158)) != 0)) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x158));
            M2C_FIELD(arg0, u32 *, 0x158) = 0U;
            ((VObj_18 *) arg0)->m6(4, 1);
            set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (1)));
            clear_selected_and_update_entry__14TWindowSubItemFPv((int) (M2C_FIELD(arg0, u32 *, 0x154)));
        }
    }
}
#pragma pop

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

void TShopJudgmentItemWindow__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        close__23TShopJudgmentItemWindowFPv((void*)(arg0));
        TShopJudgmentItemWindow__sub_80221440((void *) (arg0));
        return;
    case 1:
        handle_input__23TShopJudgmentItemWindowFPv(arg0);
        return;
    case 2:
        TShopJudgmentItemWindow__sub_80221134((u8 *)(arg0));
        return;
    case 3:
        TShopJudgmentItemWindow__sub_80220F68();
        return;
    case 4:
        TShopJudgmentItemWindow__sub_80220CE4();
        return;
    case 5:
        update__23TShopJudgmentItemWindowFPv(arg0);
        return;
    case 6:
        TShopJudgmentItemWindow__sub_8022072C();
        return;
    case 7:
        TShopJudgmentItemWindow__sub_802209D8();
        return;
    case 10:
        invoke_callback_170_and_destroy__23TShopJudgmentItemWindowFPv(arg0);
        return;
    case 8:
        invoke_callback_16C_and_destroy__23TShopJudgmentItemWindowFPv(arg0);
        return;
    case 11:
        invoke_callback_174_and_destroy__23TShopJudgmentItemWindowFPv(arg0);
    default:
        return;
    }
}

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
