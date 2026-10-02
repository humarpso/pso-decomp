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

#include <stddef.h>
struct VBase_18_97738d { char pad[0x18]; };

struct VObj_18_97738d : VBase_18_97738d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
};

struct Stack_8021488C {
    f32 sp8;
    f32 spC;
};

extern "C" {
s32 TCameraCtrl__sub_8006B368();
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 __ct__12TMemberCheckFP7TObject(int, void *);
s32 TShopSequence__sub_80223600(void *, int, void *);
u32 __nw__7TObjectFUl(int);
s32 get_window_layout_position(s32);
extern const f32 lbl_805DC658;
extern const f32 lbl_805DC65C;
void THunterGuildSeqOffline__sub_8021488C(u8 *arg0);
}

extern "C" {

void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0);
void restore_shop_and_init_quest_state(void *arg0);
void update__15TShopWindowBaseFPv(void *arg0);
void update_confirm_input__15TShopWindowBaseFPv(void *arg0);
s32 THunterGuildSeqOffline__sub_8022350C(void *, M2C_UNK);
s32 TShopJudgmentItemWindow__sub_80266388(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 get_window_layout_position(s32);
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
        M2C_FIELD(arg0, s32 *, 0x38) = TShopJudgmentItemWindow__sub_80266388(get_window_layout_position(0x2B), temp_r31, 0, 0);
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

void THunterGuildSeqOffline__sub_8021488C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8021488C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8021488C, spC) == 0x4) ? 1 : -1];
    Stack_8021488C stack;
    u32 temp_r3;
    stack.sp8 = lbl_805DC658;
    stack.spC = lbl_805DC65C;
    TShopSequence__sub_80223600((void *) (arg0), (int) (get_window_layout_position((s32)((int) (0x2C)))), (void *) (&stack.sp8));
    if (TCameraCtrl__sub_8006B368() == 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0x80));
        if (temp_r3 != 0U) {
            __ct__12TMemberCheckFP7TObject((int) (temp_r3), (void *) (arg0));
        }
    }
    ((VObj_18_97738d *)(arg0))->m7(1, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (3)));
}

void restore_shop_and_init_quest_state(void *arg0) {
    restore_player_state__13TShopSequenceFPv();
    M2C_FIELD(arg0, s32 *, 0x2C) = THunterGuildSeqOffline__sub_8022350C(arg0, 1);
    set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(1));
}

}
