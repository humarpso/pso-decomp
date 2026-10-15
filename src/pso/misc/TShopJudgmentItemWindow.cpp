#include "types.h"
#include "pso/misc/TShopJudgmentItemWindow.h"

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
    virtual void m6(s32, s32);
};

struct Base_18 { char pad[0x18]; };

struct VObj_18 : Base_18 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual s32 m6(int, int); virtual void m7();
    virtual s32 m8();
};

struct VBase_18_2e9c25 { char pad[0x18]; };

struct VObj_18_2e9c25 : VBase_18_2e9c25 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6(s32, s32);
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual s32 m33();
};

struct Ent_80221440 { s32 item; s32 idx; };

struct Win_80221440 {
    VObj_18_2e9c25 base;
    u8 pad1c[0x24 - 0x1C];
    u8 *player;
    u8 pad28[0x54 - 0x28];
    Ent_80221440 ents[30];
    u8 pad144[4];
    s32 count;
    u8 pad14c[0x154 - 0x14C];
    void *list;
};

struct VBase_18 { char pad[0x18]; };
struct VBase_802209D8 { char pad[0x18]; };
struct VObj_802209D8 : VBase_802209D8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s8 m31();
};

extern "C" {
s32 obj_getPtr2B0_20(int);
s32 is_visible__17TWindowSubComCardFv(void *);
s32 get_status_flag__17TWindowSubComCardFv(void *);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 copy_to_item_data__5TItemFPv(int, void *);
s32 has_flag_128__10TObjPlayerFv(int);
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
s32 clear_selected_and_update_entry__14TWindowSubItemFv(int);
s32 update_all__6TLobbyFi(void *);
s32 play_cue_stream_file(void *);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 select_cursor_entry__6TLobbyFv(int);
extern s32 lbl_8044C1D4[];
void handle_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
void handle_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
void handle_pay_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
void TShopJudgmentItemWindow__vt9(u8 *arg0);
u16 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 apply_shop_judgment__10TObjPlayerFPvi(s32, void *);
s32 clear_selected_and_update_entry__14TWindowSubItemFv(int);
s32 fn_80221838(void *, void *, s32);
s32 get_appraisal_text(int);
s32 reset_list__20TShopArmorListWindowFPv(void *);
s32 calc_list_content_extent(void *);
s32 add_list_entry__23TShopJudgmentItemWindowFll(void *, s32, s32);
void *create_item_list_window(int, int, u16);
void *memset(void *, int, unsigned long);
s32 try_spend_actor_meseta(int, int);
u16 obj_getField1c(s32);
s32 is_visible__17TWindowSubComCardFv(void *);
s32 get_status_flag__17TWindowSubComCardFv(void *);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 check_equip_requirements(int, void *, int);
s32 request_inventory_item__10TObjPlayerFP9TItemData(int, void *);
s32 get_item_record__23TShopJudgmentItemWindowFPv(int, int, int);
s32 set_judgment_target_flag(void *, void *);
s32 get_shop_value__6TLobbyFv();
f32 get_scale__15TShopWindowBaseFv(void *);
s32 play_cue_stream_file(void *);
s32 set_position_xy(s32, f32, f32);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 create_yes_no_window(s32, u16, s32, s32);
s32 get_window_layout_position(s32);
extern u8 lbl_8044C1B0[];
void update_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
VObj_802209D8 *find_item_by_id(s32);
u32 get_equip_field_d04__10TObjPlayerFv(int, s32);
s32 get_field_d8__10TObjPlayerFv(u32);
s32 send_6x26_unequip_item__10TObjPlayerFPvPv(int, int);
s32 send_6x25_equip_item(int, int, int);
s32 set_selected_index__17TWindowSubComCardFs(void *, int);
u16 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 dispatch_item_by_type__6TLobbyFv(void *);
s32 TItemData__clear_unidentified_flag(void *);
s32 advance_item_id_counter(void *);
s32 set_close_flag__19TWindowSubTradeMainFv(int);
s32 set_visible__19TWindowSubTradeMainFv(int);
s32 set_position__6TLobbyFff(int, f32, f32);
s32 set_flag70_bit10__20TWindowShortListCtrlFv(int);
u32 __nw__7TObjectFUl(int);
s32 set_displayed_item_colored__15TWindowHelpItemFUl(int, void *);
u32 __ct__15TWindowHelpItemFPvUs(int, int, u16);
s32 set_mag_slot_state__13TWindowSubMagFl(int, void *);
u32 create__22TWindowLoadItemTextureFPv(int, u16);
s32 calc_list_content_extent(void *);
s32 add_list_entry__23TShopJudgmentItemWindowFll(void *, s32, s32);
s32 get_window_layout_position(s32);
void *create_item_list_window(int, int, u16);
s32 is_camera_ctrl_active__6TLobbyFv();
extern u8 lbl_8044C1C0[];
extern u8 lbl_8044C1CC[];
extern s32 local_client_id;
extern s32 current_language;
extern const f32 lbl_805DC708;
}

extern "C" {

void *TShopJudgmentItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void TShopJudgmentItemWindow__vt5(void *arg0);
void TShopJudgmentItemWindow__vt6(void *arg0);
void *__dt__23TShopJudgmentItemWindowFv(void *arg0, s16 arg1);
s32 play_sound_effect(s32, s32, s32, s32);
s32 create_yes_no_window(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 get_window_layout_position(s32);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);
int queue_destruction__7TObjectFv(void*);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 set_position_xy(s32, f32, f32);

void TShopJudgmentItemWindow__vt5(void *arg0) {
    struct VObj_802205E4 *temp_r3;

    temp_r3 = (struct VObj_802205E4 *)*(void **)((s8 *)arg0 + 0x164);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopJudgmentItemWindow__vt6(void *arg0) {
    struct VObj_8022061C_802205E4 *temp_r3;

    temp_r3 = (struct VObj_8022061C_802205E4 *)*(void **)((s8 *)arg0 + 0x164);
    if (temp_r3 != NULL) {
        temp_r3->m6();
    }
}

void TShopJudgmentItemWindow::invoke_callback_174_and_destroy() {
    s32 (*temp_r12)(s32);

    temp_r12 = *(s32 (**)(s32))((s8 *)this + 0x174);
    if (temp_r12 != NULL) {
        temp_r12(*(s32 *)((s8 *)this + 0x164));
        queue_destruction__7TObjectFv((void*)(this));
    }
}

void TShopJudgmentItemWindow::invoke_callback_16C_and_destroy() {
    s32 (*temp_r12)(s32);

    temp_r12 = *(s32 (**)(s32))((s8 *)this + 0x16C);
    if (temp_r12 != NULL) {
        temp_r12(*(s32 *)((s8 *)this + 0x164));
        queue_destruction__7TObjectFv((void*)(this));
    }
}

void TShopJudgmentItemWindow::invoke_callback_170_and_destroy() {
    s32 (*temp_r12)(s32);

    temp_r12 = *(s32 (**)(s32))((s8 *)this + 0x170);
    if (temp_r12 != NULL) {
        temp_r12(*(s32 *)((s8 *)this + 0x164));
        queue_destruction__7TObjectFv((void*)(this));
    }
}

void handle_pay_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r3;
    s32 temp_r31;

    if (((VObj_18 *)(arg0))->m8() != 0) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x158) == 0U) {
            temp_r31 = obj_getField1c((s32) (*(s32 *)((s8 *)arg0 + 0x24)));
            *(s32 *)((s8 *)arg0 + 0x158) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            set_selected_index__17TWindowSubComCardFs((void *)*(s32 *)((s8 *)arg0 + 0x158), 0);
            temp_f31 = get_scale__15TShopWindowBaseFv((void *) (arg0));
            set_position_xy(*(s32 *)((s8 *)arg0 + 0x158), get_scale__15TShopWindowBaseFv((void *) (arg0)), temp_f31);
        }
        if (((u32) *(u32 *)((s8 *)arg0 + 0x158) != 0U) && (is_visible__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x158)) != 0)) {
            temp_r3 = get_selected_menu_value((s32) (*(u32 *)((s8 *)arg0 + 0x158)));
            if (temp_r3 == 0) {
                if ((u32) *(u32 *)((s8 *)arg0 + 0x160) != 0U) {
                    TWindow__close(*(void **)((s8 *)arg0 + 0x160));
                    *(u32 *)((s8 *)arg0 + 0x160) = 0U;
                }
                if ((u32) *(u32 *)((s8 *)arg0 + 0x154) != 0U) {
                    TWindow__close(*(void **)((s8 *)arg0 + 0x154));
                    *(u32 *)((s8 *)arg0 + 0x154) = 0U;
                }
                if ((u32) *(u32 *)((s8 *)arg0 + 0x15C) != 0U) {
                    TWindow__close(*(void **)((s8 *)arg0 + 0x15C));
                    *(u32 *)((s8 *)arg0 + 0x15C) = 0U;
                }
                if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
                    queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x50));
                    *(u32 *)((s8 *)arg0 + 0x50) = 0U;
                }
                *(s32 *)((s8 *)arg0 + 0x14C) = 3;
                TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                try_spend_actor_meseta((s32) (*(s32 *)((s8 *)arg0 + 0x24)), (s32) (0x64));
                ((VObj_18 *)(arg0))->m6(0xA, 1);
                set_field_20__12TQuestListVMFl((void *) (arg0), 5);
                return;
            }
            if (temp_r3 == 1) {
                TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                ((VObj_18 *)(arg0))->m6(8, 1);
                set_field_20__12TQuestListVMFl((void *) (arg0), 4);
                return;
            }
            goto block_17;
        }
block_17:
        if (((u32) *(u32 *)((s8 *)arg0 + 0x158) != 0U) && (get_status_flag__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x158)) != 0)) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x158));
            *(u32 *)((s8 *)arg0 + 0x158) = 0U;
            ((VObj_18 *)(arg0))->m6(8, 1);
            set_field_20__12TQuestListVMFl((void *) (arg0), 4);
        }
    }
}

void TShopJudgmentItemWindow::update() {
    VObj_80220940_802205E4 *o = (VObj_80220940_802205E4 *)this;
    s32 c = *(s32 *)((s8 *)this + 0x14C) - 1;
    *(s32 *)((s8 *)this + 0x14C) = c;
    if (c <= 0 && o->m8() != 0 && (TShopWindowBase__sub_80223A48(this) != 0 || TShopWindowBase__sub_802239EC(this) != 0)) {
        o->m6(0xB, 1);
        set_field_20__12TQuestListVMFl((void *)(this), (s32)(0));
    }
}

#define F(o, t) (*(t *)((s8 *)(arg0) + (o)))

void TShopJudgmentItemWindow::handle_equip_prompt() {
    u8 *arg0 = (u8 *)this;
    f32 y;
    s32 sel;
    s32 id;
    VObj_802209D8 *item;
    u32 eq;

    if (((VObj_18 *)(arg0))->m8() != 0) {
        if (F(0x158, void *) == NULL) {
            id = obj_getField1c(F(0x24, s32));
            F(0x158, s32) = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
            set_selected_index__17TWindowSubComCardFs(F(0x158, void *), 0);
            y = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(F(0x158, s32), get_scale__15TShopWindowBaseFv(arg0), y);
        }
        if (F(0x158, void *) != NULL && is_visible__17TWindowSubComCardFv(F(0x158, void *)) != 0) {
            sel = get_selected_menu_value(F(0x158, s32));
            if (sel == 0) {
                if (F(0x160, void *) != NULL) {
                    TWindow__close(F(0x160, void *));
                    F(0x160, void *) = NULL;
                }
                if (F(0x154, void *) != NULL) {
                    TWindow__close(F(0x154, void *));
                    F(0x154, void *) = NULL;
                }
                if (F(0x15C, void *) != NULL) {
                    TWindow__close(F(0x15C, void *));
                    F(0x15C, void *) = NULL;
                }
                TWindow__close(F(0x158, void *));
                F(0x158, void *) = NULL;
                get_item_record__23TShopJudgmentItemWindowFPv(F(0x24, s32), F(0x48, s32), 1);
                F(0x34, s32) = F(0x48, s32);
                request_inventory_item__10TObjPlayerFP9TItemData(F(0x24, s32), arg0 + 0x28);
                set_judgment_target_flag(arg0, arg0 + 0x28);
                item = find_item_by_id(F(0x34, s32));
                if (item != NULL && (eq = get_equip_field_d04__10TObjPlayerFv(F(0x24, s32), item->m31())) != 0) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv(F(0x24, s32), get_field_d8__10TObjPlayerFv(eq));
                }
                send_6x25_equip_item(F(0x24, s32), F(0x34, s32), 0);
                ((VObj_18 *)(arg0))->m6(0xB, 1);
                if (get_shop_value__6TLobbyFv() > 0) {
                    play_cue_stream_file(lbl_8044C1B0);
                }
                set_field_20__12TQuestListVMFl(arg0, 0);
            }
            if (sel == 1) {
                TWindow__close(F(0x158, void *));
                F(0x158, void *) = NULL;
                get_item_record__23TShopJudgmentItemWindowFPv(F(0x24, s32), F(0x48, s32), 1);
                F(0x34, s32) = F(0x48, s32);
                request_inventory_item__10TObjPlayerFP9TItemData(F(0x24, s32), arg0 + 0x28);
                set_judgment_target_flag(arg0, arg0 + 0x28);
                ((VObj_18 *)(arg0))->m6(0xB, 1);
                if (get_shop_value__6TLobbyFv() > 0) {
                    play_cue_stream_file(lbl_8044C1B0);
                }
                set_field_20__12TQuestListVMFl(arg0, 0);
            }
        }
        if (F(0x158, void *) != NULL && get_status_flag__17TWindowSubComCardFv(F(0x158, void *)) != 0) {
            TWindow__close(F(0x158, void *));
            F(0x158, void *) = NULL;
            get_item_record__23TShopJudgmentItemWindowFPv(F(0x24, s32), F(0x48, s32), 1);
            F(0x34, s32) = F(0x48, s32);
            request_inventory_item__10TObjPlayerFP9TItemData(F(0x24, s32), arg0 + 0x28);
            set_judgment_target_flag(arg0, arg0 + 0x28);
            ((VObj_18 *)(arg0))->m6(0xB, 1);
            if (get_shop_value__6TLobbyFv() > 0) {
                play_cue_stream_file(lbl_8044C1B0);
            }
            set_field_20__12TQuestListVMFl(arg0, 0);
        }
    }
}
#undef F

void update_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r3;
    s32 temp_r31;
    if (((VObj_18 *)(arg0))->m8() != 0) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x158) == 0U) {
            temp_r31 = obj_getField1c((s32) (*(s32 *)((s8 *)arg0 + 0x24)));
            *(s32 *)((s8 *)arg0 + 0x158) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            temp_f31 = get_scale__15TShopWindowBaseFv((void *) (arg0));
            set_position_xy(*(s32 *)((s8 *)arg0 + 0x158), get_scale__15TShopWindowBaseFv((void *) (arg0)), temp_f31);
        }
        if (((u32) *(u32 *)((s8 *)arg0 + 0x158) != 0U) && (is_visible__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x158)) != 0)) {
            temp_r3 = get_selected_menu_value((s32) (*(u32 *)((s8 *)arg0 + 0x158)));
            if (temp_r3 == 0) {
                if ((u32) *(u32 *)((s8 *)arg0 + 0x160) != 0U) {
                    TWindow__close(*(void **)((s8 *)arg0 + 0x160));
                    *(u32 *)((s8 *)arg0 + 0x160) = 0U;
                }
                if ((u32) *(u32 *)((s8 *)arg0 + 0x154) != 0U) {
                    TWindow__close(*(void **)((s8 *)arg0 + 0x154));
                    *(u32 *)((s8 *)arg0 + 0x154) = 0U;
                }
                if ((u32) *(u32 *)((s8 *)arg0 + 0x15C) != 0U) {
                    TWindow__close(*(void **)((s8 *)arg0 + 0x15C));
                    *(u32 *)((s8 *)arg0 + 0x15C) = 0U;
                }
                try_spend_actor_meseta((s32) (*(s32 *)((s8 *)arg0 + 0x24)), (s32) (0x64));
                if (check_equip_requirements((s32) (*(s32 *)((s8 *)arg0 + 0x24)), (void *) (arg0 + 0x28), (s32) (0)) != 0) {
                    ((VObj_18 *)(arg0))->m6(0xC, 1);
                    TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                    *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                    set_field_20__12TQuestListVMFl((void *) (arg0), (s32) (7));
                    return;
                }
                get_item_record__23TShopJudgmentItemWindowFPv((s32) (*(s32 *)((s8 *)arg0 + 0x24)), (s32) (*(s32 *)((s8 *)arg0 + 0x48)), (s32) (1));
                *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)arg0 + 0x48);
                request_inventory_item__10TObjPlayerFP9TItemData((s32) (*(s32 *)((s8 *)arg0 + 0x24)), (void *) (arg0 + 0x28));
                set_judgment_target_flag((void *) (arg0), (void *) (arg0 + 0x28));
                ((VObj_18 *)(arg0))->m6(0xB, 1);
                TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                if (get_shop_value__6TLobbyFv() > 0) {
                    play_cue_stream_file(lbl_8044C1B0);
                }
                set_field_20__12TQuestListVMFl((void *) (arg0), (s32) (0));
                return;
            }
            if (temp_r3 == 1) {
                TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                ((VObj_18 *)(arg0))->m6(9, 1);
                set_field_20__12TQuestListVMFl((void *) (arg0), (s32) (6));
                return;
            }
            goto block_19;
        }
block_19:
        if (((u32) *(u32 *)((s8 *)arg0 + 0x158) != 0U) && (get_status_flag__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x158)) != 0)) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x158));
            *(u32 *)((s8 *)arg0 + 0x158) = 0U;
            ((VObj_18 *)(arg0))->m6(9, 1);
            set_field_20__12TQuestListVMFl((void *) (arg0), (s32) (6));
        }
    }
}

void TShopJudgmentItemWindow::create_result_windows() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    u16 temp_r30;
    u16 temp_r30_2;
    u32 var_r29;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x14C) - 1;
    *(s32 *)((s8 *)arg0 + 0x14C) = temp_r0;
    if (temp_r0 <= 0) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x154) == 0U) {
            switch (current_language) {
            case 0:
                *(u32 *)((s8 *)arg0 + 0x154) = (u32) ((void *(*)(int, int, int)) create_item_list_window)((int) (lbl_8044C1C0), 1, obj_getField1c(*(s32 *)((s8 *)arg0 + 0x24)));
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            default:
                *(u32 *)((s8 *)arg0 + 0x154) = (u32) ((void *(*)(int, int, int)) create_item_list_window)((int) (lbl_8044C1CC), 1, obj_getField1c(*(s32 *)((s8 *)arg0 + 0x24)));
                break;
            }
            TItemData__clear_unidentified_flag((void *) (arg0 + 0x28));
            *(s32 *)((s8 *)arg0 + 0x34) = advance_item_id_counter((void *) ((u16) local_client_id));
            *(s32 *)((s8 *)arg0 + 0x50) = dispatch_item_by_type__6TLobbyFv((void *) (arg0 + 0x28));
            add_list_entry__23TShopJudgmentItemWindowFll((void *) (*(u32 *)((s8 *)arg0 + 0x154)), (int) (*(s32 *)((s8 *)arg0 + 0x50)), (int) (0));
            set_flag70_bit10__20TWindowShortListCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x154)));
            set_visible__19TWindowSubTradeMainFv((int) (*(u32 *)((s8 *)arg0 + 0x154)));
            set_close_flag__19TWindowSubTradeMainFv((int) (*(u32 *)((s8 *)arg0 + 0x154)));
            calc_list_content_extent((void *) (*(u32 *)((s8 *)arg0 + 0x154)));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x160) == 0U) {
            temp_r30 = ((s32 (*)(s32))obj_getField1c)(*(s32 *)((s8 *)arg0 + 0x24));
            *(u32 *)((s8 *)arg0 + 0x160) = create__22TWindowLoadItemTextureFPv(get_window_layout_position(0x30), temp_r30);
            set_mag_slot_state__13TWindowSubMagFl((int) (*(u32 *)((s8 *)arg0 + 0x160)), (void *) (arg0 + 0x28));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x15C) == 0U) {
            var_r29 = __nw__7TObjectFUl((int) (0xBC));
            if (var_r29 != 0U) {
                temp_r30_2 = ((s32 (*)(s32))obj_getField1c)(*(s32 *)((s8 *)arg0 + 0x24));
                var_r29 = __ct__15TWindowHelpItemFPvUs((int) (var_r29), (int) (get_window_layout_position((int) (0x27))), temp_r30_2);
            }
            *(u32 *)((s8 *)arg0 + 0x15C) = var_r29;
            if (((u32) *(u32 *)((s8 *)arg0 + 0x15C) != 0U) && (is_camera_ctrl_active__6TLobbyFv() > 2)) {
                set_position__6TLobbyFff((int) (*(u32 *)((s8 *)arg0 + 0x15C)), (f32) (lbl_805DC708), (f32) (lbl_805DC708));
            }
            set_displayed_item_colored__15TWindowHelpItemFUl((int) (*(u32 *)((s8 *)arg0 + 0x15C)), (void *) (arg0 + 0x28));
        }
        ((VObj_18 *)(arg0))->m6(8, 1);
        set_field_20__12TQuestListVMFl((void *) (arg0), (int) (4));
    }
}

#pragma push
#pragma fp_contract on
void handle_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r31;
    if (((VObj_18 *) arg0)->m8() != 0) {
        if ((*(void **)((s8 *)arg0 + 0x158) != NULL) && (is_visible__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x158)) != 0)) {
            temp_r3 = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x158)));
            if ((temp_r3 == 0) && ((u32) *(u32 *)((s8 *)arg0 + 0x154) != 0U)) {
                if (obj_getPtr2B0_20((int) (*(s32 *)((s8 *)arg0 + 0x24))) < 0x64) {
                    TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                    *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                    ((VObj_18 *) arg0)->m6(5, 1);
                    set_field_20__12TQuestListVMFl((void *)((void *) (arg0)), (s32)((int) (0xB)));
                    return;
                }
                temp_r31 = arg0 + (select_cursor_entry__6TLobbyFv((int) (*(u32 *)((s8 *)arg0 + 0x154))) * 8);
                if (copy_to_item_data__5TItemFPv((int) (*(s32 *)((s8 *)temp_r31 + 0x54)), (void *) (arg0 + 0x3C)) != 0) {
                    *(s32 *)((s8 *)arg0 + 0x168) = has_flag_128__10TObjPlayerFv((int) (*(s32 *)((s8 *)temp_r31 + 0x54)));
                    copy_item_data__6TLobbyFPvPv((void *) (arg0 + 0x28), (void *) (arg0 + 0x3C));
                    update_all__6TLobbyFi((void *) (arg0 + 0x28));
                    *(s32 *)((s8 *)arg0 + 0x14C) = 0x5F;
                    if (*(void **)((s8 *)arg0 + 0x154) != NULL) {
                        TWindow__close(*(void **)((s8 *)arg0 + 0x154));
                        *(u32 *)((s8 *)arg0 + 0x154) = 0U;
                    }
                    play_cue_stream_file((void *) (lbl_8044C1D4));
                }
                TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                ((VObj_18 *) arg0)->m6(6, 1);
                set_field_20__12TQuestListVMFl((void *)((void *) (arg0)), (s32)((int) (3)));
                return;
            }
            if (temp_r3 == 1) {
                TWindow__close(*(void **)((s8 *)arg0 + 0x158));
                *(u32 *)((s8 *)arg0 + 0x158) = 0U;
                ((VObj_18 *) arg0)->m6(4, 1);
                set_field_20__12TQuestListVMFl((void *)((void *) (arg0)), (s32)((int) (1)));
                clear_selected_and_update_entry__14TWindowSubItemFv((int) (*(u32 *)((s8 *)arg0 + 0x154)));
                return;
            }
            goto block_14;
        }
block_14:
        if ((*(void **)((s8 *)arg0 + 0x158) != NULL) && (get_status_flag__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x158)) != 0)) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x158));
            *(u32 *)((s8 *)arg0 + 0x158) = 0U;
            ((VObj_18 *) arg0)->m6(4, 1);
            set_field_20__12TQuestListVMFl((void *)((void *) (arg0)), (s32)((int) (1)));
            clear_selected_and_update_entry__14TWindowSubItemFv((int) (*(u32 *)((s8 *)arg0 + 0x154)));
        }
    }
}
#pragma pop

void TShopJudgmentItemWindow::handle_input() {
    f32 temp_f31;
    u16 temp_r31;

    if (TShopWindowBase__sub_802239EC(this) != 0) {
        set_field_20__12TQuestListVMFl((void *)(this), (s32)(0xA));
        play_sound_effect(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(this) != 0) {
        temp_r31 = (u16)obj_getField1c(*(s32 *)((s8 *)this + 0x24));
        *(s32 *)((s8 *)this + 0x158) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
        temp_f31 = get_scale__15TShopWindowBaseFv(this);
        set_position_xy(*(s32 *)((s8 *)this + 0x158), get_scale__15TShopWindowBaseFv(this), temp_f31);
        ((VObj_80221344_802205E4 *)this)->m6(3, 1);
        set_field_20__12TQuestListVMFl((void *)(this), (s32)(2));
        play_sound_effect(0x52D01, 0, 0, 0);
    }
}

#define W ((Win_80221440 *)arg0)
s32 TShopJudgmentItemWindow::build_item_list(void *arg0) {
    VObj_18_2e9c25 *items[32];
    s32 n;
    s32 i;
    VObj_18_2e9c25 *it;
    s32 j;
    s32 k;
    memset(W->ents, 0, 0xF0);
    n = apply_shop_judgment__10TObjPlayerFPvi(*(s32 *)(W->player + 0xD00), items);
    W->count = 0;
    for (i = 0; i < n; i++) {
        it = items[i];
        if (it != NULL && it->m33() == 0) {
            fn_80221838(&W->ents[W->count++], items[i], i);
        }
    }
    if (W->count != 0) {
        set_field_20__12TQuestListVMFl(W, 1);
    } else {
        W->base.m6(2, 1);
        set_field_20__12TQuestListVMFl(W, 0xB);
        return;
    }
    if (W->list == NULL) {
        W->list = create_item_list_window(get_appraisal_text(0), W->count, (u16)((s32 (*)(s32))obj_getField1c)((s32)W->player));
        for (j = 0; j < W->count; j++) {
            add_list_entry__23TShopJudgmentItemWindowFll(W->list, W->ents[j].item, j);
        }
        calc_list_content_extent(W->list);
        return;
    }
    reset_list__20TShopArmorListWindowFPv(W->list);
    for (k = 0; k < W->count; k++) {
        add_list_entry__23TShopJudgmentItemWindowFll(W->list, W->ents[k].item, k);
    }
    calc_list_content_extent(W->list);
    clear_selected_and_update_entry__14TWindowSubItemFv((int)W->list);
}
#undef W

void TShopJudgmentItemWindow::close() { if (*(unsigned int*)((char*)this + 0x50) != 0) { queue_destruction__7TObjectFv((void*)(*(void**)((char*)this + 0x50))); *(int*)((char*)this + 0x50) = 0; } }

extern s32 __vt__23TShopJudgmentItemWindow[];

void TShopJudgmentItemWindow__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        ((TShopJudgmentItemWindow *)arg0)->close();
        TShopJudgmentItemWindow::build_item_list((void *)((void *) (arg0)));
        return;
    case 1:
        ((TShopJudgmentItemWindow *)arg0)->handle_input();
        return;
    case 2:
        handle_judge_confirm__23TShopJudgmentItemWindowFPv((u8 *)(arg0));
        return;
    case 3:
        ((TShopJudgmentItemWindow *)arg0)->create_result_windows();
        return;
    case 4:
        update_judge_confirm__23TShopJudgmentItemWindowFPv((u8 *)(arg0));
        return;
    case 5:
        ((TShopJudgmentItemWindow *)arg0)->update();
        return;
    case 6:
        handle_pay_confirm__23TShopJudgmentItemWindowFPv((u8 *)(arg0));
        return;
    case 7:
        ((TShopJudgmentItemWindow *)arg0)->handle_equip_prompt();
        return;
    case 10:
        ((TShopJudgmentItemWindow *)arg0)->invoke_callback_170_and_destroy();
        return;
    case 8:
        ((TShopJudgmentItemWindow *)arg0)->invoke_callback_16C_and_destroy();
        return;
    case 11:
        ((TShopJudgmentItemWindow *)arg0)->invoke_callback_174_and_destroy();
    default:
        return;
    }
}

void *__dt__23TShopJudgmentItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__23TShopJudgmentItemWindow;
        if (*(void **)((s8 *)arg0 + 0x154) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x154)); *(s32 *)((s8 *)arg0 + 0x154) = 0; }
        if (*(void **)((s8 *)arg0 + 0x160) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x160)); *(s32 *)((s8 *)arg0 + 0x160) = 0; }
        if (*(void **)((s8 *)arg0 + 0x158) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x158)); *(s32 *)((s8 *)arg0 + 0x158) = 0; }
        if (*(void **)((s8 *)arg0 + 0x50) != NULL) { queue_destruction__7TObjectFv((void*)(*(void **)((s8 *)arg0 + 0x50))); *(s32 *)((s8 *)arg0 + 0x50) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__23TShopJudgmentItemWindow[];
extern void *TShopJudgmentItemWindow__class_name;

void *TShopJudgmentItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__23TShopJudgmentItemWindow;
    *(void **)((s8 *)arg0 + 0x0) = TShopJudgmentItemWindow__class_name;
    *(u32 *)((s8 *)arg0 + 0x144) = 0;
    *(u32 *)((s8 *)arg0 + 0x148) = 0;
    *(u32 *)((s8 *)arg0 + 0x150) = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(u32 *)((s8 *)arg0 + 0x154) = 0;
    *(u32 *)((s8 *)arg0 + 0x158) = 0;
    *(u32 *)((s8 *)arg0 + 0x15C) = 0;
    *(u32 *)((s8 *)arg0 + 0x160) = 0;
    *(u32 *)((s8 *)arg0 + 0x50) = 0;
    *(void **)((s8 *)arg0 + 0x164) = arg2;
    *(u32 *)((s8 *)arg0 + 0x16C) = 0;
    *(u32 *)((s8 *)arg0 + 0x170) = 0;
    *(u32 *)((s8 *)arg0 + 0x174) = 0;
    return arg0;
}

}
