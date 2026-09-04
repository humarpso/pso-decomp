#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802143AC { char pad[0x18]; };
struct VObj_802143AC : Base_802143AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
    virtual s32 m8r();
};
struct Base_A_80214490_802143AC { char pad[0x18]; };
struct V_A_80214490_802143AC : Base_A_80214490_802143AC {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();
    virtual M2C_UNK m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_80214544_802143AC { char pad[0x18]; };
struct V_A_80214544_802143AC : Base_A_80214544_802143AC {
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

void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0);
void restore_shop_and_init_quest_state(void *arg0);
void update__15TShopWindowBaseFPv(void *arg0);
void update_confirm_input__15TShopWindowBaseFPv(void *arg0);
s32 THunterGuildSeqOffline__sub_8022350C(void *, M2C_UNK);
s32 TShopJudgmentItemWindow__sub_80266388(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 TWindowSubComCard__sub_8026CBB8(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);
M2C_UNK restore_player_state__13TShopSequenceFPv();
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 set_position_xy(s32, f32, f32);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s32);

void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;
    VObj_802143AC *vobj = (VObj_802143AC *)arg0;

    if ((vobj->m8r() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x38) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x38), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x38), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        vobj->m7(8, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(7));
    }
}

void update__15TShopWindowBaseFPv(void *arg0) {
    u32 v = M2C_FIELD(arg0, u32 *, 0x3C);
    if (v != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv((void *)(v)) != 1) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80214490_802143AC *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214490_802143AC *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(0xC));
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
        if ((((V_A_80214544_802143AC *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214544_802143AC *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(0xC));
        }
    }
}

void restore_shop_and_init_quest_state(void *arg0) {
    restore_player_state__13TShopSequenceFPv();
    M2C_FIELD(arg0, s32 *, 0x2C) = THunterGuildSeqOffline__sub_8022350C(arg0, 1);
    set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(1));
}

}
