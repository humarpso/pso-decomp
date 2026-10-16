#include "types.h"
#include "pso/misc/TWindowSubEquip.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TShopArmorListWindow.h"
#include "pso/misc/TWindowShortListCtrl.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/misc/TWindowSubMag.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct VBase_80277F4C { u8 pad[0x18]; };

class VObj_80277F4C : public VBase_80277F4C {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
};

extern "C" {
s32 set_field_1c__6TLobbyFf(int);
s32 TWindowSubEquip__sub_80263AF8(int, int);
void *get_window_layout_position(int);
s32 mark_unequippable_items(int);
s32 create_equip_kind_window(void *, void *, int);
extern s32 lbl_8044F920[];
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 is_usable__14TWindowSubItemFi();
u32 get_player_by_client_id(s32);
s32 play_sound_effect(s32, s32, s32, s32);
void TWindow__close(void *);
s32 is_player_input_active(s32);
s32 fn_80255A38(s32);
s32 TWindowSubEquip__sub_80263AF4(void *, s32);
s32 select_cursor_entry__6TLobbyFv(u32);
extern u8 controller_input_state[];
extern const f32 lbl_805DD5F0;
s32 set_field_1c__6TLobbyFf(int);
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
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

s32 TWindowSubEquip::open_equip_kind_list(u32 arg1) {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;
    temp_r31 = create_equip_kind_window(get_window_layout_position(1), (void *) (lbl_8044F920), (int) (*(s32 *)((s8 *)arg0 + 0x28)));
    TWindowSubEquip__sub_80263AF8((int) (*(s32 *)((s8 *)arg0 + 0x2C)), (int) (1));
    set_field_1c__6TLobbyFf((int) (temp_r31));
    ((TWindowSubStatusDisp *)temp_r31)->ensure_status_display((int) (TWindowSubStatusDisp::get_message_10((int) (0x24))));
    ((TWindowShortListCtrl *)temp_r31)->set_flag70_bit10();
    switch (arg1) {
    case 6:
        ((TWindowSubMag *)temp_r31)->init_and_setup((void*)0);
        break;
    case 2:
        ((TShopArmorListWindow *)temp_r31)->save_and_refresh_cursor((void*)1, (void*)1);
        break;
    case 9:
    case 10:
    case 11:
    case 12:
        ((TShopArmorListWindow *)temp_r31)->save_and_refresh_cursor((void*)1, (void*)3);
        break;
    case 3:
        ((TShopArmorListWindow *)temp_r31)->save_and_refresh_cursor((void*)1, (void*)2);
        break;
    case 1:
        ((TWindowSubMag *)temp_r31)->init_and_setup((void*)2);
        break;
    }
    mark_unequippable_items((int) (temp_r31));
    return temp_r31;
}

void TWindowSubEquip::render() {  }

extern s32 __vt__15TWindowSubEquip[];

void TWindowSubEquip::run_task() {
    s32 temp_r3;
    s32 temp_r5;
    u8 temp_r0;
    void *temp_r3_2;
    temp_r3 = is_player_input_active(*(s32 *)((s8 *)this + 0x28));
    temp_r0 = *(u8 *)((s8 *)this + 0x1C);
    switch ((s32) temp_r0) {
    case 0:
    case 1:
        if ((u32) *(u32 *)((s8 *)this + 0x38) != 0U) {
            TWindowSubEquip__sub_80263AF4(*(void **)((s8 *)this + 0x2C), 1);
            TWindow__close(*(void **)((s8 *)this + 0x38));
            *(u32 *)((s8 *)this + 0x38) = 0U;
        }
        fn_80255A38(*(s32 *)((s8 *)this + 0x30));
        *(s32 *)((s8 *)this + 0x20) = -1;
        *(s32 *)((s8 *)this + 0x24) = -1;
        ((TWindowSubEquip *)(*(u32 *)((s8 *)this + 0x34)))->update_window();
        ((TWindowSubItem *)(*(u32 *)((s8 *)this + 0x34)))->clear_selected_and_update_entry();
        ((TWindowSubMag *)(*(u32 *)((s8 *)this + 0x34)))->start_scroll(lbl_805DD5F0);
        *(u8 *)((s8 *)this + 0x1C) = 2U;
    case 2:
        update();
        if (((TLobby *)(*(u32 *)((s8 *)this + 0x34)))->get_flag_bit2() != 0) {
            VObj_80277F4C *o = *(VObj_80277F4C **)((s8 *)this + 0x2C);
            o->v7();
            *(u8 *)((s8 *)this + 0x1C) = 6U;
            return;
        }
        if (((TLobby *)(*(u32 *)((s8 *)this + 0x34)))->get_status_flag() != 0) {
            *(u8 *)((s8 *)this + 0x1C) = 3U;
        }
        break;
    case 3:
        ((TWindowSubStatusDisp *)(*(u32 *)((s8 *)this + 0x34)))->init_scroll_pos();
        if ((u32) *(u32 *)((s8 *)this + 0x38) == 0U) {
            *(u32 *)((s8 *)this + 0x38) = open_equip_kind_list(select_cursor_entry__6TLobbyFv(*(u32 *)((s8 *)this + 0x34)));
        }
        ((TWindowSubItem *)(*(u32 *)((s8 *)this + 0x38)))->clear_selected_and_update_entry();
        *(u8 *)((s8 *)this + 0x1C) = 4U;
    case 4:
        update_displayed_item();
        if (((TLobby *)(*(u32 *)((s8 *)this + 0x38)))->get_flag_bit2() != 0) {
            *(u8 *)((s8 *)this + 0x1C) = 1U;
            return;
        }
        if (((TLobby *)(*(u32 *)((s8 *)this + 0x38)))->get_status_flag() != 0) {
            *(u8 *)((s8 *)this + 0x1C) = 5U;
            return;
        }
        break;
    case 5:
        temp_r5 = temp_r3 * 0x50;
        if ((TWindowShortListCtrl__check_controller_button(controller_input_state + temp_r5 + 0x20, 2, temp_r5) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv(controller_input_state + 0x160, 2) != 0)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            *(u8 *)((s8 *)this + 0x1C) = 3U;
            return;
        }
        if ((get_player_by_client_id(*(s32 *)((s8 *)this + 0x28)) != 0U) && (is_usable__14TWindowSubItemFi() != 0)) {
            apply_slot_selection();
            *(u8 *)((s8 *)this + 0x1C) = 1U;
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
    set_field_1c__6TLobbyFf(*(s32 *)((s8 *)arg0 + 0x34));
    ((TWindowShortListCtrl *)(*(s32 *)((s8 *)arg0 + 0x34)))->set_flag70_bit10();
    p = __nw__7TObjectFUl(0xBC);
    if (p != 0) {
        p = (void *)__ct__15TWindowHelpItemFPvUs(p, get_window_layout_position(2), *(s32 *)((s8 *)arg0 + 0x28));
    }
    *(void **)((s8 *)arg0 + 0x30) = p;
    TWindowSubEquip__sub_80263AF8(*(s32 *)((s8 *)arg0 + 0x2C), 2);
    set_field_1c__6TLobbyFf(*(s32 *)((s8 *)arg0 + 0x30));
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = -1;
    *(s32 *)((s8 *)arg0 + 0x24) = -1;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
