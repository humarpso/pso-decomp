#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_80277F4C { u8 pad[0x18]; };

class VObj_80277F4C : public VBase_80277F4C {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
};

typedef s32 M2C_UNK;
extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(int);
M2C_UNK set_field_1c__6TLobbyFPvf(int);
M2C_UNK TWindowSubEquip__sub_80263AF8(int, int);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi(int, int);
void *get_window_layout_position(int);
M2C_UNK mark_unequippable_items(int);
M2C_UNK save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(int, int, int);
M2C_UNK init_and_setup__13TWindowSubMagFPvPv(int, int);
s32 create_equip_kind_window(void *, void *, int);
extern M2C_UNK lbl_8044F920[];
s32 open_equip_kind_list__15TWindowSubEquipFPvUi(u8 *arg0, u32 arg1);
s32 get_status_flag__6TLobbyFPv(u32);
s32 get_flag_bit2__6TLobbyFPv(u32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
s32 is_usable__14TWindowSubItemFi();
u32 get_player_by_client_id(s32);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(u32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void TWindow__close(void *);
s32 is_player_input_active(s32);
M2C_UNK fn_80255A38(s32);
M2C_UNK TWindowSubEquip__sub_80263AF4(void *, M2C_UNK);
s32 select_cursor_entry__6TLobbyFPv(u32);
M2C_UNK start_scroll__13TWindowSubMagFPvf(u32, f32);
M2C_UNK init_scroll_pos__20TWindowSubStatusDispFPv(u32);
M2C_UNK update_displayed_item__15TWindowSubEquipFPv(void *);
M2C_UNK update__15TWindowSubEquipFPv(void *);
M2C_UNK apply_slot_selection__15TWindowSubEquipFPv(void *);
s32 open_equip_kind_list__15TWindowSubEquipFPvUi(u8 *arg0, u32 arg1);
M2C_UNK update_window__15TWindowSubEquipFPv(u32);
extern u8 lbl_8050E208[];
extern const f32 lbl_805DD5F0;
void run_task__15TWindowSubEquipFv(void *arg0);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(int);
M2C_UNK set_field_1c__6TLobbyFPvf(int);
M2C_UNK TWindowSubEquip__sub_80263AF8(int, int);
void *get_window_layout_position(int);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
s32 TWindowHelpItem__ct(void *, void *, s32);
s32 create_equip_list_window(void *, void *, s32);
extern M2C_UNK lbl_8044F918[];
extern M2C_UNK __vt__15TWindowSubEquip[];
extern s32 lbl_805D3A30;
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
    temp_r31 = create_equip_kind_window(get_window_layout_position(1), (void *) (lbl_8044F920), (int) (M2C_FIELD(arg0, s32 *, 0x28)));
    TWindowSubEquip__sub_80263AF8((int) (M2C_FIELD(arg0, s32 *, 0x2C)), (int) (1));
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

extern M2C_UNK __vt__15TWindowSubEquip[];

void run_task__15TWindowSubEquipFv(void *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    u8 temp_r0;
    void *temp_r3_2;
    temp_r3 = is_player_input_active(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
    switch ((s32) temp_r0) {
    case 0:
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindowSubEquip__sub_80263AF4(M2C_FIELD(arg0, void **, 0x2C), 1);
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        fn_80255A38(M2C_FIELD(arg0, s32 *, 0x30));
        M2C_FIELD(arg0, s32 *, 0x20) = -1;
        M2C_FIELD(arg0, s32 *, 0x24) = -1;
        update_window__15TWindowSubEquipFPv(M2C_FIELD(arg0, u32 *, 0x34));
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, u32 *, 0x34));
        start_scroll__13TWindowSubMagFPvf(M2C_FIELD(arg0, u32 *, 0x34), lbl_805DD5F0);
        M2C_FIELD(arg0, u8 *, 0x1C) = 2U;
    case 2:
        update__15TWindowSubEquipFPv(arg0);
        if (get_flag_bit2__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x34)) != 0) {
            VObj_80277F4C *o = M2C_FIELD(arg0, VObj_80277F4C **, 0x2C);
            o->v7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 6U;
            return;
        }
        if (get_status_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x34)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 3U;
        }
        break;
    case 3:
        init_scroll_pos__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x34));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x38) = open_equip_kind_list__15TWindowSubEquipFPvUi((u8 *)arg0, select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x34)));
        }
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, u32 *, 0x38));
        M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
    case 4:
        update_displayed_item__15TWindowSubEquipFPv(arg0);
        if (get_flag_bit2__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
            return;
        }
        if (get_status_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 5U;
            return;
        }
        break;
    case 5:
        temp_r5 = temp_r3 * 0x50;
        if ((TWindowShortListCtrl__check_controller_button(lbl_8050E208 + temp_r5 + 0x20, 2, temp_r5) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0)) {
            play_sound_effect(0x52F16, 0, 0, 0);
            M2C_FIELD(arg0, u8 *, 0x1C) = 3U;
            return;
        }
        if ((get_player_by_client_id(M2C_FIELD(arg0, s32 *, 0x28)) != 0U) && (is_usable__14TWindowSubItemFi() != 0)) {
            apply_slot_selection__15TWindowSubEquipFPv(arg0);
            M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        }
        break;
    case 6:
        break;
    }
}

void *__dt__15TWindowSubEquipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSubEquip;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSubEquip;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3A30;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = create_equip_list_window(get_window_layout_position(0), lbl_8044F918, M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 0);
    set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, s32 *, 0x34));
    set_flag70_bit10__20TWindowShortListCtrlFPv(M2C_FIELD(arg0, s32 *, 0x34));
    p = __nw__7TObjectFUl(0xBC);
    if (p != 0) {
        p = (void *)TWindowHelpItem__ct(p, get_window_layout_position(2), M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, void **, 0x30) = p;
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

}
