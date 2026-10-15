#include "types.h"

struct VBase_80277F4C { u8 pad[0x18]; };

class VObj_80277F4C : public VBase_80277F4C {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
};

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 set_flag70_bit10__20TWindowShortListCtrlFPv(int);
s32 set_field_1c__6TLobbyFPvf(int);
s32 TWindowSubEquip__sub_80263AF8(int, int);
s32 ensure_status_display__20TWindowSubStatusDispFPvi(int, int);
void *get_window_layout_position(int);
s32 mark_unequippable_items(int);
s32 save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(int, int, int);
s32 init_and_setup__13TWindowSubMagFPvPv(int, int);
s32 create_equip_kind_window(void *, void *, int);
extern s32 lbl_8044F920[];
s32 open_equip_kind_list__15TWindowSubEquipFPvUi(u8 *arg0, u32 arg1);
s32 get_status_flag__6TLobbyFPv(u32);
s32 get_flag_bit2__6TLobbyFPv(u32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 is_usable__14TWindowSubItemFi();
u32 get_player_by_client_id(s32);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void TWindow__close(void *);
s32 is_player_input_active(s32);
s32 fn_80255A38(s32);
s32 TWindowSubEquip__sub_80263AF4(void *, s32);
s32 select_cursor_entry__6TLobbyFPv(u32);
s32 start_scroll__13TWindowSubMagFPvf(u32, f32);
s32 init_scroll_pos__20TWindowSubStatusDispFPv(u32);
s32 update_displayed_item__15TWindowSubEquipFPv(void *);
s32 update__15TWindowSubEquipFPv(void *);
s32 apply_slot_selection__15TWindowSubEquipFPv(void *);
s32 open_equip_kind_list__15TWindowSubEquipFPvUi(u8 *arg0, u32 arg1);
s32 update_window__15TWindowSubEquipFPv(u32);
extern u8 controller_input_state[];
extern const f32 lbl_805DD5F0;
void run_task__15TWindowSubEquipFv(void *arg0);
s32 set_flag70_bit10__20TWindowShortListCtrlFPv(int);
s32 set_field_1c__6TLobbyFPvf(int);
s32 TWindowSubEquip__sub_80263AF8(int, int);
void *get_window_layout_position(int);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
s32 __ct__15TWindowHelpItemFPvUs(void *, void *, s32);
s32 create_equip_list_window(void *, void *, s32);
extern s32 lbl_8044F918[];
extern s32 __vt__15TWindowSubEquip[];
extern s32 TWindowSubEquip__class_name;
u8 *TWindowSubEquip__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__15TWindowSubEquipFv(void *arg0, s16 arg1);
void render__15TWindowSubEquipFv(void);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

s32 open_equip_kind_list__15TWindowSubEquipFPvUi(u8 *arg0, u32 arg1) {
    s32 temp_r31;
    temp_r31 = create_equip_kind_window(get_window_layout_position(1), (void *) (lbl_8044F920), (int) (*(s32 *)((s8 *)arg0 + 0x28)));
    TWindowSubEquip__sub_80263AF8((int) (*(s32 *)((s8 *)arg0 + 0x2C)), (int) (1));
    set_field_1c__6TLobbyFPvf((int) (temp_r31));
    ensure_status_display__20TWindowSubStatusDispFPvi((int) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x24))));
    set_flag70_bit10__20TWindowShortListCtrlFPv((int) (temp_r31));
    switch (arg1) {
    case 6:
        init_and_setup__13TWindowSubMagFPvPv((int) (temp_r31), (int) (0));
        break;
    case 2:
        save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv((int) (temp_r31), (int) (1), (int) (1));
        break;
    case 9:
    case 10:
    case 11:
    case 12:
        save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv((int) (temp_r31), (int) (1), (int) (3));
        break;
    case 3:
        save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv((int) (temp_r31), (int) (1), (int) (2));
        break;
    case 1:
        init_and_setup__13TWindowSubMagFPvPv((int) (temp_r31), (int) (2));
        break;
    }
    mark_unequippable_items((int) (temp_r31));
    return temp_r31;
}

void render__15TWindowSubEquipFv(void) {  }

extern s32 __vt__15TWindowSubEquip[];

void run_task__15TWindowSubEquipFv(void *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    u8 temp_r0;
    void *temp_r3_2;
    temp_r3 = is_player_input_active(*(s32 *)((s8 *)arg0 + 0x28));
    temp_r0 = *(u8 *)((s8 *)arg0 + 0x1C);
    switch ((s32) temp_r0) {
    case 0:
    case 1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            TWindowSubEquip__sub_80263AF4(*(void **)((s8 *)arg0 + 0x2C), 1);
            TWindow__close(*(void **)((s8 *)arg0 + 0x38));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        fn_80255A38(*(s32 *)((s8 *)arg0 + 0x30));
        *(s32 *)((s8 *)arg0 + 0x20) = -1;
        *(s32 *)((s8 *)arg0 + 0x24) = -1;
        update_window__15TWindowSubEquipFPv(*(u32 *)((s8 *)arg0 + 0x34));
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(u32 *)((s8 *)arg0 + 0x34));
        start_scroll__13TWindowSubMagFPvf(*(u32 *)((s8 *)arg0 + 0x34), lbl_805DD5F0);
        *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
    case 2:
        update__15TWindowSubEquipFPv(arg0);
        if (get_flag_bit2__6TLobbyFPv(*(u32 *)((s8 *)arg0 + 0x34)) != 0) {
            VObj_80277F4C *o = *(VObj_80277F4C **)((s8 *)arg0 + 0x2C);
            o->v7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 6U;
            return;
        }
        if (get_status_flag__6TLobbyFPv(*(u32 *)((s8 *)arg0 + 0x34)) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
        }
        break;
    case 3:
        init_scroll_pos__20TWindowSubStatusDispFPv(*(u32 *)((s8 *)arg0 + 0x34));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x38) = open_equip_kind_list__15TWindowSubEquipFPvUi((u8 *)arg0, select_cursor_entry__6TLobbyFPv(*(u32 *)((s8 *)arg0 + 0x34)));
        }
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(u32 *)((s8 *)arg0 + 0x38));
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
    case 4:
        update_displayed_item__15TWindowSubEquipFPv(arg0);
        if (get_flag_bit2__6TLobbyFPv(*(u32 *)((s8 *)arg0 + 0x38)) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (get_status_flag__6TLobbyFPv(*(u32 *)((s8 *)arg0 + 0x38)) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 5U;
            return;
        }
        break;
    case 5:
        temp_r5 = temp_r3 * 0x50;
        if ((TWindowShortListCtrl__check_controller_button(controller_input_state + temp_r5 + 0x20, 2, temp_r5) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(controller_input_state + 0x160, 2) != 0)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
            return;
        }
        if ((get_player_by_client_id(*(s32 *)((s8 *)arg0 + 0x28)) != 0U) && (is_usable__14TWindowSubItemFi() != 0)) {
            apply_slot_selection__15TWindowSubEquipFPv(arg0);
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
        }
        break;
    case 6:
        break;
    }
}

void *__dt__15TWindowSubEquipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowSubEquip;
        if (*(void **)((s8 *)arg0 + 0x38) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x38)); *(s32 *)((s8 *)arg0 + 0x38) = 0; }
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x34)); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowSubEquip__ct(u8 *arg0, s32 arg1, s32 arg2) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, (void *)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowSubEquip;
    *(s32 *)((s8 *)arg0 + 0) = TWindowSubEquip__class_name;
    *(s32 *)((s8 *)arg0 + 0x2C) = arg1;
    *(s32 *)((s8 *)arg0 + 0x28) = arg2;
    *(s32 *)((s8 *)arg0 + 0x34) = create_equip_list_window(get_window_layout_position(0), lbl_8044F918, *(s32 *)((s8 *)arg0 + 0x28));
    TWindowSubEquip__sub_80263AF8(*(s32 *)((s8 *)arg0 + 0x2C), 0);
    set_field_1c__6TLobbyFPvf(*(s32 *)((s8 *)arg0 + 0x34));
    set_flag70_bit10__20TWindowShortListCtrlFPv(*(s32 *)((s8 *)arg0 + 0x34));
    p = __nw__7TObjectFUl(0xBC);
    if (p != 0) {
        p = (void *)__ct__15TWindowHelpItemFPvUs(p, get_window_layout_position(2), *(s32 *)((s8 *)arg0 + 0x28));
    }
    *(void **)((s8 *)arg0 + 0x30) = p;
    TWindowSubEquip__sub_80263AF8(*(s32 *)((s8 *)arg0 + 0x2C), 2);
    set_field_1c__6TLobbyFPvf(*(s32 *)((s8 *)arg0 + 0x30));
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = -1;
    *(s32 *)((s8 *)arg0 + 0x24) = -1;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
