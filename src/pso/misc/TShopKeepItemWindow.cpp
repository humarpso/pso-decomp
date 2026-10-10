#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80221844 { char pad[0x18]; };
struct VObj_80221844 : Base_80221844 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8022187C_80221844 { char pad[0x18]; };
struct VObj_8022187C_80221844 : Base_8022187C_80221844 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

struct Base_802219A0 { char pad[0x18]; };

struct V_802219A0 : Base_802219A0 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void m4(s32, s32);
};

struct Ent_802219A0 {
    s32 f0;
    s32 f4;
    char pad8[0x14];
};

struct Self_802219A0 {
    char pad0[0x24];
    s32 f24;
    Ent_802219A0 ents[30];
    char pad370[0x8];
    s32 f378;
    char pad37C[0x8];
    s32 f384;
    void *f388;
};

#include "pso/misc/TWindowHelpItem.h"
struct VBase_80221F08 { char pad[0x18]; };

struct VObj_80221F08 : VBase_80221F08 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

struct Ent_80221F08 {
    s32 f0;
    u8 item[0x14];
    s32 f18;
};

struct Self_80221F08 {
    char pad0[0x24];
    u8 *f24;
    Ent_80221F08 ents[30];
    char pad370[0x4];
    s32 f374;
    s32 f378;
    s32 f37C;
    u32 f380;
    u32 f384;
    u32 f388;
    u32 f38C;
    u32 f390;
};

extern "C" {
u32 obj_getField1c(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(u32, f32, f32);
void TWindow__close(void *);
u32 create_yes_no_window(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK get_window_layout_position(M2C_UNK);
void update_number_input__19TShopKeepItemWindowFPv(void *arg0);
s32 close_with_cancel_callback__19TShopKeepItemWindowFPv(void *arg0);
s32 close_with_ok_callback__19TShopKeepItemWindowFPv(void *arg0);
s32 close__19TShopKeepItemWindowFPv(void *arg0);
void update_number_input__19TShopKeepItemWindowFPv(void *arg0);
s32 handle_deposit_list_select__19TShopKeepItemWindowFv(void *);
void TShopKeepItemWindow__vt9(u8 *arg0);
void memset(void *, int, int);
int sprintf(char *, const char *, ...);
M2C_UNK append_text__24TMessageWindowControllerFPCc(s32, M2C_UNK *);
extern char message_number_format[4];
void append_file_number__24TMessageWindowControllerFv(s32 arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv(s32);
M2C_UNK get_item_record__23TShopJudgmentItemWindowFPv(s32, s32, s32);
s32 store_item_in_bank(void *, s32, s32);
M2C_UNK copy_bank_to_card_window(s32);
M2C_UNK TShopWindowBase__sub_8022397C(void *);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
s32 select_cursor_entry__6TLobbyFPv(s32);
void handle_deposit_confirm__19TShopKeepItemWindowFv(void *arg0);
u32 obj_getField1c(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv(s32);
s32 copy_to_item_data__5TItemFPvPv(u32, void *);
s32 count_matching_items__10TObjPlayerFPvi(s32, u32 *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
void set_position__6TLobbyFPvff(u32, f32, f32);
s16 get_cursor_index__18TShopGetItemWindowFPv(u32);
M2C_UNK get_shop_text(s32);
void TWindowHelpItem__set_displayed_item_by_id(u32, s32);
void clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(u32);
void save_cursor_selection__20TShopArmorListWindowFPv(u32);
void reset_list__20TShopArmorListWindowFPv(u32);
void calc_list_content_extent(u32);
void add_list_entry__23TShopJudgmentItemWindowFPvii(u32, s32, s32);
M2C_UNK get_window_layout_position(M2C_UNK);
u32 create_item_list_window(M2C_UNK, s32, u16);
s32 is_camera_ctrl_active__6TLobbyFv(void);
extern f32 lbl_805DC710;
s32 rebuild_item_list__19TShopKeepItemWindowFv(void *arg0);
}

extern "C" {

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void TShopKeepItemWindow__vt4(void *arg0);
void TShopKeepItemWindow__vt5(void *arg0);
void *__dt__19TShopKeepItemWindowFv(void *arg0, s16 arg1);
void append_title_string__24TMessageWindowControllerFv(s32 arg0);
M2C_UNK TCheckRoomSequence__sub_802109A4();
M2C_UNK append_text__24TMessageWindowControllerFPCc(s32, M2C_UNK *);
M2C_UNK TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK *get_status_window__20TWindowSubStatusDispFi(u16);
void memset(void *, int, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TShopKeepItemWindow__vt5(void *arg0) {
    struct VObj_80221844 *temp_r3;

    temp_r3 = (struct VObj_80221844 *)M2C_FIELD(arg0, void **, 0x380);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopKeepItemWindow__vt4(void *arg0) {
    struct VObj_8022187C_80221844 *o = (struct VObj_8022187C_80221844 *)M2C_FIELD(arg0, void **, 0x380);
    if (o != NULL) {
        o->m4();
    }
}

s32 close_with_cancel_callback__19TShopKeepItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x398);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x380));
    }
    TShopWindowBase__sub_8022397C(arg0);
    TCheckRoomSequence__sub_802109A4();
    queue_destruction__7TObjectFv(arg0);
}

s32 close_with_ok_callback__19TShopKeepItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x394);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x380));
    }
    TShopWindowBase__sub_8022397C(arg0);
    TCheckRoomSequence__sub_802109A4();
    queue_destruction__7TObjectFv(arg0);
}

s32 close__19TShopKeepItemWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x384));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

extern M2C_UNK __vt__19TShopKeepItemWindow[];

void handle_deposit_confirm__19TShopKeepItemWindowFv(void *arg0) {
    Self_802219A0 *self = (Self_802219A0 *)arg0;
    s32 base;
    s32 r;
    s32 i;
    void *win;
    win = self->f388;
    if (win != NULL && is_visible__17TWindowSubComCardFPv(win) != 0) {
        base = TShopWindowBase__sub_8022397C(arg0);
        r = get_selected_menu_value(self->f388);
        if (r == 0) {
            i = select_cursor_entry__6TLobbyFPv(self->f384);
            if (store_item_in_bank(&self->ents[i].f4, self->f378, base) != 0) {
                get_item_record__23TShopJudgmentItemWindowFPv(self->f24, get_field_d8__10TObjPlayerFPv(self->ents[i].f0), self->f378);
                copy_bank_to_card_window(base);
                play_sound_effect(0x52D01, 0, 0, 0);
                TWindow__close(self->f388);
                self->f388 = NULL;
                set_field_20__12TQuestListVMFPvi(arg0, 0);
                return;
            }
            ((V_802219A0 *) arg0)->m4(0x3C, 1);
            play_sound_effect(0x53F06, 0, 0, 0);
            TWindow__close(self->f388);
            self->f388 = NULL;
            set_field_20__12TQuestListVMFPvi(arg0, 7);
            return;
        }
        if (r == 1) {
            TWindow__close(self->f388);
            self->f388 = NULL;
            set_field_20__12TQuestListVMFPvi(arg0, 3);
            return;
        }
    }
    win = self->f388;
    if (win != NULL && get_status_flag__17TWindowSubComCardFPv(win) != 0) {
        TWindow__close(self->f388);
        self->f388 = NULL;
        set_field_20__12TQuestListVMFPvi(arg0, 3);
    }
}

void update_number_input__19TShopKeepItemWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;
    u32 w;
    w = M2C_FIELD(arg0, u32 *, 0x38C);
    if ((w != 0U) && (is_confirmed__18TWindowInputNumberFPv(w) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x388) == 0U) {
            temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x388) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x388));
            temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x388), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        }
        M2C_FIELD(arg0, s32 *, 0x378) = get_result__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x38C));
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x38C)));
        M2C_FIELD(arg0, u32 *, 0x38C) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 2);
        return;
    }
    w = M2C_FIELD(arg0, u32 *, 0x38C);
    if ((w != 0U) && (is_confirmed__24TShopEquipmentSellWindowFPv(w) != 0)) {
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x38C)));
        M2C_FIELD(arg0, u32 *, 0x38C) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 3);
    }
}

s32 rebuild_item_list__19TShopKeepItemWindowFv(void *arg0) {
    Self_80221F08 *self = (Self_80221F08 *)arg0;
    u32 buf[30];
    s32 count;
    s32 i;
    s32 cur;
    self->f378 = 1;
    count = count_matching_items__10TObjPlayerFPvi(M2C_FIELD(self->f24, s32 *, 0xD00), buf);
    self->f374 = 0;
    for (i = 0; i < count; i++) {
        if (buf[i] != 0 && copy_to_item_data__5TItemFPvPv(buf[i], self->ents[self->f374].item) != 0) {
            self->ents[self->f374].f0 = buf[i];
            self->ents[self->f374].f18 = i;
            self->f374++;
        }
    }
    if (self->f374 != 0) {
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    } else {
        ((VObj_80221F08 *)arg0)->m4(0x49, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 7);
        return;
    }
    if (self->f384 == 0U) {
        self->f384 = create_item_list_window(get_shop_text(0x30), 0x40, obj_getField1c((s32)self->f24));
        for (s32 j = 0; j < self->f374; j++) {
            add_list_entry__23TShopJudgmentItemWindowFPvii(self->f384, self->ents[j].f0, j);
        }
        calc_list_content_extent(self->f384);
        cur = get_cursor_index__18TShopGetItemWindowFPv(self->f384);
    } else {
        save_cursor_selection__20TShopArmorListWindowFPv(self->f384);
        reset_list__20TShopArmorListWindowFPv(self->f384);
        for (s32 j = 0; j < self->f374; j++) {
            add_list_entry__23TShopJudgmentItemWindowFPvii(self->f384, self->ents[j].f0, j);
        }
        clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(self->f384);
        calc_list_content_extent(self->f384);
        clear_selected_and_update_entry__14TWindowSubItemFPv((void *)self->f384);
        cur = get_cursor_index__18TShopGetItemWindowFPv(self->f384);
    }
    if (self->f390 == 0U) {
        self->f390 = (u32)new TWindowHelpItem((void *)get_window_layout_position(0x27), obj_getField1c((s32)self->f24));
        if (self->f390 != 0U && is_camera_ctrl_active__6TLobbyFv() > 2) {
            set_position__6TLobbyFPvff(self->f390, lbl_805DC710, lbl_805DC710);
        }
        TWindowHelpItem__set_displayed_item_by_id(self->f390, get_field_d8__10TObjPlayerFPv(self->ents[cur].f0));
        self->f37C = cur;
    } else {
        TWindowHelpItem__set_displayed_item_by_id(self->f390, get_field_d8__10TObjPlayerFPv(self->ents[cur].f0));
        self->f37C = cur;
    }
}

void TShopKeepItemWindow__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        rebuild_item_list__19TShopKeepItemWindowFv((void *)((void *) (arg0)));
        return;
    case 1:
        handle_deposit_list_select__19TShopKeepItemWindowFv((void *) (arg0));
        return;
    case 2:
        handle_deposit_confirm__19TShopKeepItemWindowFv((void *)((void *) (arg0)));
        return;
    case 3:
        close__19TShopKeepItemWindowFPv((void *) (arg0));
        return;
    case 4:
        update_number_input__19TShopKeepItemWindowFPv((void *) (arg0));
        return;
    case 5:
        close_with_ok_callback__19TShopKeepItemWindowFPv((void *) (arg0));
        return;
    case 7:
        close_with_cancel_callback__19TShopKeepItemWindowFPv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__19TShopKeepItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TShopKeepItemWindow;
        if (M2C_FIELD(arg0, void **, 0x384) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x384)); M2C_FIELD(arg0, M2C_UNK *, 0x384) = 0; }
        if (M2C_FIELD(arg0, void **, 0x388) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x388)); M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38C)); M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x390) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x390)); M2C_FIELD(arg0, M2C_UNK *, 0x390) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TShopKeepItemWindow[];
extern void *TShopKeepItemWindow__class_name;

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TShopKeepItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = TShopKeepItemWindow__class_name;
    M2C_FIELD(arg0, u32 *, 0x370) = 0;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, u32 *, 0x378) = 1;
    M2C_FIELD(arg0, u32 *, 0x37C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x380) = arg2;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, u32 *, 0x388) = 0;
    M2C_FIELD(arg0, u32 *, 0x390) = 0;
    M2C_FIELD(arg0, u32 *, 0x38C) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x394) = 0;
    M2C_FIELD(arg0, u32 *, 0x398) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

extern M2C_UNK message_tag_error[];
extern s32 local_client_id;

}
