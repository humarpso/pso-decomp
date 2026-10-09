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

struct VBase_18_2e9c25 { char pad[0x18]; };

struct VObj_18_2e9c25 : VBase_18_2e9c25 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6(M2C_UNK, M2C_UNK);
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
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 copy_to_item_data__5TItemFPvPv(int, void *);
s32 has_flag_128__10TObjPlayerFPv(int);
M2C_UNK copy_item_data__6TLobbyFPvPv(void *, void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(int);
M2C_UNK update_all__6TLobbyFi(void *);
M2C_UNK play_cue_stream_file(void *);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 select_cursor_entry__6TLobbyFPv(int);
extern M2C_UNK lbl_8044C1D4[];
void handle_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
void invoke_callback_174_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_16C_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void invoke_callback_170_and_destroy__23TShopJudgmentItemWindowFPv(void *arg0);
void update__23TShopJudgmentItemWindowFPv(void *arg0);
void handle_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
void handle_input__23TShopJudgmentItemWindowFPv(void *arg0);
void close__23TShopJudgmentItemWindowFPv(void* p);
void handle_pay_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
void handle_equip_prompt__23TShopJudgmentItemWindowFPv(u8 *arg0);
void TShopJudgmentItemWindow__vt9(u8 *arg0);
u16 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 apply_shop_judgment__10TObjPlayerFPvi(s32, void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(int);
M2C_UNK fn_80221838(void *, void *, s32);
M2C_UNK TLobby__sub_80222CBC(int);
M2C_UNK reset_list__20TShopArmorListWindowFPv(void *);
M2C_UNK calc_list_content_extent(void *);
M2C_UNK add_list_entry__23TShopJudgmentItemWindowFPvii(void *, s32, s32);
void *create_item_list_window(int, int, u16);
void *memset(void *, int, unsigned long);
M2C_UNK build_item_list__23TShopJudgmentItemWindowFPv(void *arg0);
M2C_UNK try_spend_actor_meseta(int, int);
u16 obj_getField1c(s32);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 check_equip_requirements(int, void *, int);
M2C_UNK fn_801B849C(int, void *);
M2C_UNK get_item_record__23TShopJudgmentItemWindowFPv(int, int, int);
M2C_UNK set_judgment_target_flag(void *, void *);
s32 get_shop_value__6TLobbyFv();
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK play_cue_stream_file(void *);
M2C_UNK set_position_xy(s32, f32, f32);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 create_yes_no_window(M2C_UNK, u16, M2C_UNK, M2C_UNK);
s32 get_window_layout_position(M2C_UNK);
extern u8 lbl_8044C1B0[];
void update_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0);
VObj_802209D8 *find_item_by_id(s32);
u32 get_equip_field_d04__10TObjPlayerFPv(int, s32);
s32 get_field_d8__10TObjPlayerFPv(u32);
M2C_UNK send_6x26_unequip_item__10TObjPlayerFPvPv(int, int);
M2C_UNK send_6x25_equip_item(int, int, int);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, int);
u16 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 dispatch_item_by_type__6TLobbyFPv(void *);
M2C_UNK TItemData__sub_8010EC6C(void *);
s32 advance_item_id_counter(void *);
M2C_UNK set_close_flag__19TWindowSubTradeMainFPv(int);
M2C_UNK set_visible__19TWindowSubTradeMainFPv(int);
M2C_UNK set_position__6TLobbyFPvff(int, f32, f32);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(int);
u32 __nw__7TObjectFUl(int);
M2C_UNK set_displayed_item_colored__15TWindowHelpItemFPvUi(int, void *);
u32 TWindowHelpItem__ct(int, int, u16);
M2C_UNK set_mag_slot_state__13TWindowSubMagFPvi(int, void *);
u32 create__22TWindowLoadItemTextureFPvPv(int, u16);
M2C_UNK calc_list_content_extent(void *);
M2C_UNK add_list_entry__23TShopJudgmentItemWindowFPvii(void *, s32, s32);
s32 get_window_layout_position(M2C_UNK);
void *create_item_list_window(int, int, u16);
s32 is_camera_ctrl_active__6TLobbyFv();
extern u8 lbl_8044C1C0[];
extern u8 lbl_8044C1CC[];
extern s32 lbl_805D53A0;
extern s32 current_language;
extern const f32 lbl_805DC708;
void TShopJudgmentItemWindow__sub_80220F68(u8 *arg0);
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
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 create_yes_no_window(M2C_UNK, u16, M2C_UNK, M2C_UNK);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 get_window_layout_position(M2C_UNK);
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

void handle_pay_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r3;
    s32 temp_r31;

    if (((VObj_18 *)(arg0))->m8() != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x158) == 0U) {
            temp_r31 = obj_getField1c((s32) (M2C_FIELD(arg0, s32 *, 0x24)));
            M2C_FIELD(arg0, s32 *, 0x158) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            set_selected_index__17TWindowSubComCardFPvs((void *)M2C_FIELD(arg0, s32 *, 0x158), 0);
            temp_f31 = get_scale__15TShopWindowBaseFv((void *) (arg0));
            set_position_xy(M2C_FIELD(arg0, s32 *, 0x158), get_scale__15TShopWindowBaseFv((void *) (arg0)), temp_f31);
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x158) != 0U) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x158)) != 0)) {
            temp_r3 = get_selected_menu_value((s32) (M2C_FIELD(arg0, u32 *, 0x158)));
            if (temp_r3 == 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x160) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x160));
                    M2C_FIELD(arg0, u32 *, 0x160) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x154) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x154));
                    M2C_FIELD(arg0, u32 *, 0x154) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x15C) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x15C));
                    M2C_FIELD(arg0, u32 *, 0x15C) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
                    queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50));
                    M2C_FIELD(arg0, u32 *, 0x50) = 0U;
                }
                M2C_FIELD(arg0, s32 *, 0x14C) = 3;
                TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                try_spend_actor_meseta((s32) (M2C_FIELD(arg0, s32 *, 0x24)), (s32) (0x64));
                ((VObj_18 *)(arg0))->m6(0xA, 1);
                set_field_20__12TQuestListVMFPvi((void *) (arg0), 5);
                return;
            }
            if (temp_r3 == 1) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                ((VObj_18 *)(arg0))->m6(8, 1);
                set_field_20__12TQuestListVMFPvi((void *) (arg0), 4);
                return;
            }
            goto block_17;
        }
block_17:
        if (((u32) M2C_FIELD(arg0, u32 *, 0x158) != 0U) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x158)) != 0)) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x158));
            M2C_FIELD(arg0, u32 *, 0x158) = 0U;
            ((VObj_18 *)(arg0))->m6(8, 1);
            set_field_20__12TQuestListVMFPvi((void *) (arg0), 4);
        }
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

#define F(o, t) M2C_FIELD(arg0, t *, o)

void handle_equip_prompt__23TShopJudgmentItemWindowFPv(u8 *arg0) {
    f32 y;
    s32 sel;
    s32 id;
    VObj_802209D8 *item;
    u32 eq;

    if (((VObj_18 *)(arg0))->m8() != 0) {
        if (F(0x158, void *) == NULL) {
            id = obj_getField1c(F(0x24, s32));
            F(0x158, s32) = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
            set_selected_index__17TWindowSubComCardFPvs(F(0x158, void *), 0);
            y = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(F(0x158, s32), get_scale__15TShopWindowBaseFv(arg0), y);
        }
        if (F(0x158, void *) != NULL && is_visible__17TWindowSubComCardFPv(F(0x158, void *)) != 0) {
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
                fn_801B849C(F(0x24, s32), arg0 + 0x28);
                set_judgment_target_flag(arg0, arg0 + 0x28);
                item = find_item_by_id(F(0x34, s32));
                if (item != NULL && (eq = get_equip_field_d04__10TObjPlayerFPv(F(0x24, s32), item->m31())) != 0) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv(F(0x24, s32), get_field_d8__10TObjPlayerFPv(eq));
                }
                send_6x25_equip_item(F(0x24, s32), F(0x34, s32), 0);
                ((VObj_18 *)(arg0))->m6(0xB, 1);
                if (get_shop_value__6TLobbyFv() > 0) {
                    play_cue_stream_file(lbl_8044C1B0);
                }
                set_field_20__12TQuestListVMFPvi(arg0, 0);
            }
            if (sel == 1) {
                TWindow__close(F(0x158, void *));
                F(0x158, void *) = NULL;
                get_item_record__23TShopJudgmentItemWindowFPv(F(0x24, s32), F(0x48, s32), 1);
                F(0x34, s32) = F(0x48, s32);
                fn_801B849C(F(0x24, s32), arg0 + 0x28);
                set_judgment_target_flag(arg0, arg0 + 0x28);
                ((VObj_18 *)(arg0))->m6(0xB, 1);
                if (get_shop_value__6TLobbyFv() > 0) {
                    play_cue_stream_file(lbl_8044C1B0);
                }
                set_field_20__12TQuestListVMFPvi(arg0, 0);
            }
        }
        if (F(0x158, void *) != NULL && get_status_flag__17TWindowSubComCardFPv(F(0x158, void *)) != 0) {
            TWindow__close(F(0x158, void *));
            F(0x158, void *) = NULL;
            get_item_record__23TShopJudgmentItemWindowFPv(F(0x24, s32), F(0x48, s32), 1);
            F(0x34, s32) = F(0x48, s32);
            fn_801B849C(F(0x24, s32), arg0 + 0x28);
            set_judgment_target_flag(arg0, arg0 + 0x28);
            ((VObj_18 *)(arg0))->m6(0xB, 1);
            if (get_shop_value__6TLobbyFv() > 0) {
                play_cue_stream_file(lbl_8044C1B0);
            }
            set_field_20__12TQuestListVMFPvi(arg0, 0);
        }
    }
}
#undef F

void update_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r3;
    s32 temp_r31;
    if (((VObj_18 *)(arg0))->m8() != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x158) == 0U) {
            temp_r31 = obj_getField1c((s32) (M2C_FIELD(arg0, s32 *, 0x24)));
            M2C_FIELD(arg0, s32 *, 0x158) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            temp_f31 = get_scale__15TShopWindowBaseFv((void *) (arg0));
            set_position_xy(M2C_FIELD(arg0, s32 *, 0x158), get_scale__15TShopWindowBaseFv((void *) (arg0)), temp_f31);
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x158) != 0U) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x158)) != 0)) {
            temp_r3 = get_selected_menu_value((s32) (M2C_FIELD(arg0, u32 *, 0x158)));
            if (temp_r3 == 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x160) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x160));
                    M2C_FIELD(arg0, u32 *, 0x160) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x154) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x154));
                    M2C_FIELD(arg0, u32 *, 0x154) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x15C) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x15C));
                    M2C_FIELD(arg0, u32 *, 0x15C) = 0U;
                }
                try_spend_actor_meseta((s32) (M2C_FIELD(arg0, s32 *, 0x24)), (s32) (0x64));
                if (check_equip_requirements((s32) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (arg0 + 0x28), (s32) (0)) != 0) {
                    ((VObj_18 *)(arg0))->m6(0xC, 1);
                    TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                    M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                    set_field_20__12TQuestListVMFPvi((void *) (arg0), (s32) (7));
                    return;
                }
                get_item_record__23TShopJudgmentItemWindowFPv((s32) (M2C_FIELD(arg0, s32 *, 0x24)), (s32) (M2C_FIELD(arg0, s32 *, 0x48)), (s32) (1));
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
                fn_801B849C((s32) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (arg0 + 0x28));
                set_judgment_target_flag((void *) (arg0), (void *) (arg0 + 0x28));
                ((VObj_18 *)(arg0))->m6(0xB, 1);
                TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                if (get_shop_value__6TLobbyFv() > 0) {
                    play_cue_stream_file(lbl_8044C1B0);
                }
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (s32) (0));
                return;
            }
            if (temp_r3 == 1) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x158));
                M2C_FIELD(arg0, u32 *, 0x158) = 0U;
                ((VObj_18 *)(arg0))->m6(9, 1);
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (s32) (6));
                return;
            }
            goto block_19;
        }
block_19:
        if (((u32) M2C_FIELD(arg0, u32 *, 0x158) != 0U) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x158)) != 0)) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x158));
            M2C_FIELD(arg0, u32 *, 0x158) = 0U;
            ((VObj_18 *)(arg0))->m6(9, 1);
            set_field_20__12TQuestListVMFPvi((void *) (arg0), (s32) (6));
        }
    }
}

void TShopJudgmentItemWindow__sub_80220F68(u8 *arg0) {
    s32 temp_r0;
    u16 temp_r30;
    u16 temp_r30_2;
    u32 var_r29;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14C) - 1;
    M2C_FIELD(arg0, s32 *, 0x14C) = temp_r0;
    if (temp_r0 <= 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x154) == 0U) {
            switch (current_language) {
            case 0:
                M2C_FIELD(arg0, u32 *, 0x154) = (u32) ((void *(*)(int, int, int)) create_item_list_window)((int) (lbl_8044C1C0), 1, obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24)));
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            default:
                M2C_FIELD(arg0, u32 *, 0x154) = (u32) ((void *(*)(int, int, int)) create_item_list_window)((int) (lbl_8044C1CC), 1, obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24)));
                break;
            }
            TItemData__sub_8010EC6C((void *) (arg0 + 0x28));
            M2C_FIELD(arg0, s32 *, 0x34) = advance_item_id_counter((void *) ((u16) lbl_805D53A0));
            M2C_FIELD(arg0, s32 *, 0x50) = dispatch_item_by_type__6TLobbyFPv((void *) (arg0 + 0x28));
            add_list_entry__23TShopJudgmentItemWindowFPvii((void *) (M2C_FIELD(arg0, u32 *, 0x154)), (int) (M2C_FIELD(arg0, s32 *, 0x50)), (int) (0));
            set_flag70_bit10__20TWindowShortListCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x154)));
            set_visible__19TWindowSubTradeMainFPv((int) (M2C_FIELD(arg0, u32 *, 0x154)));
            set_close_flag__19TWindowSubTradeMainFPv((int) (M2C_FIELD(arg0, u32 *, 0x154)));
            calc_list_content_extent((void *) (M2C_FIELD(arg0, u32 *, 0x154)));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x160) == 0U) {
            temp_r30 = ((s32 (*)(s32))obj_getField1c)(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x160) = create__22TWindowLoadItemTextureFPvPv(get_window_layout_position(0x30), temp_r30);
            set_mag_slot_state__13TWindowSubMagFPvi((int) (M2C_FIELD(arg0, u32 *, 0x160)), (void *) (arg0 + 0x28));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x15C) == 0U) {
            var_r29 = __nw__7TObjectFUl((int) (0xBC));
            if (var_r29 != 0U) {
                temp_r30_2 = ((s32 (*)(s32))obj_getField1c)(M2C_FIELD(arg0, s32 *, 0x24));
                var_r29 = TWindowHelpItem__ct((int) (var_r29), (int) (get_window_layout_position((int) (0x27))), temp_r30_2);
            }
            M2C_FIELD(arg0, u32 *, 0x15C) = var_r29;
            if (((u32) M2C_FIELD(arg0, u32 *, 0x15C) != 0U) && (is_camera_ctrl_active__6TLobbyFv() > 2)) {
                set_position__6TLobbyFPvff((int) (M2C_FIELD(arg0, u32 *, 0x15C)), (f32) (lbl_805DC708), (f32) (lbl_805DC708));
            }
            set_displayed_item_colored__15TWindowHelpItemFPvUi((int) (M2C_FIELD(arg0, u32 *, 0x15C)), (void *) (arg0 + 0x28));
        }
        ((VObj_18 *)(arg0))->m6(8, 1);
        set_field_20__12TQuestListVMFPvi((void *) (arg0), (int) (4));
    }
}

#pragma push
#pragma fp_contract on
void handle_judge_confirm__23TShopJudgmentItemWindowFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r31;
    if (((VObj_18 *) arg0)->m8() != 0) {
        if ((M2C_FIELD(arg0, void **, 0x158) != NULL) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x158)) != 0)) {
            temp_r3 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x158)));
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
                    play_cue_stream_file((void *) (lbl_8044C1D4));
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
        play_sound_effect(0x52D01, 0, 0, 0);
        return;
    }
    if (TShopWindowBase__sub_80223A48(arg0) != 0) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x158) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x158), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_80221344_802205E4 *)arg0)->m6(3, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(2));
        play_sound_effect(0x52D01, 0, 0, 0);
    }
}

#define W ((Win_80221440 *)arg0)
M2C_UNK build_item_list__23TShopJudgmentItemWindowFPv(void *arg0) {
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
        set_field_20__12TQuestListVMFPvi(W, 1);
    } else {
        W->base.m6(2, 1);
        set_field_20__12TQuestListVMFPvi(W, 0xB);
        return;
    }
    if (W->list == NULL) {
        W->list = create_item_list_window(TLobby__sub_80222CBC(0), W->count, (u16)((s32 (*)(s32))obj_getField1c)((s32)W->player));
        for (j = 0; j < W->count; j++) {
            add_list_entry__23TShopJudgmentItemWindowFPvii(W->list, W->ents[j].item, j);
        }
        calc_list_content_extent(W->list);
        return;
    }
    reset_list__20TShopArmorListWindowFPv(W->list);
    for (k = 0; k < W->count; k++) {
        add_list_entry__23TShopJudgmentItemWindowFPvii(W->list, W->ents[k].item, k);
    }
    calc_list_content_extent(W->list);
    clear_selected_and_update_entry__14TWindowSubItemFPv((int)W->list);
}
#undef W

void close__23TShopJudgmentItemWindowFPv(void* p) { if (*(unsigned int*)((char*)p + 0x50) != 0) { queue_destruction__7TObjectFv((void*)(*(void**)((char*)p + 0x50))); *(int*)((char*)p + 0x50) = 0; } }

extern M2C_UNK __vt__23TShopJudgmentItemWindow[];

void TShopJudgmentItemWindow__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        close__23TShopJudgmentItemWindowFPv((void*)(arg0));
        build_item_list__23TShopJudgmentItemWindowFPv((void *)((void *) (arg0)));
        return;
    case 1:
        handle_input__23TShopJudgmentItemWindowFPv(arg0);
        return;
    case 2:
        handle_judge_confirm__23TShopJudgmentItemWindowFPv((u8 *)(arg0));
        return;
    case 3:
        TShopJudgmentItemWindow__sub_80220F68((u8 *)(arg0));
        return;
    case 4:
        update_judge_confirm__23TShopJudgmentItemWindowFPv((u8 *)(arg0));
        return;
    case 5:
        update__23TShopJudgmentItemWindowFPv(arg0);
        return;
    case 6:
        handle_pay_confirm__23TShopJudgmentItemWindowFPv((u8 *)(arg0));
        return;
    case 7:
        handle_equip_prompt__23TShopJudgmentItemWindowFPv((u8 *)(arg0));
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
