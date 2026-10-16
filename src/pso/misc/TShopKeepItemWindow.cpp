#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

#include "types.h"

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
#include "pso/misc/TShopKeepItemWindow.h"
#include "pso/item/TItem.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TShopArmorListWindow.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TShopGetItemWindow.h"
#include "pso/misc/TShopJudgmentItemWindow.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TMessageWindowController.h"
#include "pso/ui/TWindowInputNumber.h"
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
s32 set_field_20__12TQuestListVMFl(void *, s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 set_position_xy(u32, f32, f32);
void TWindow__close(void *);
u32 create_yes_no_window(s32, s32, s32, s32);
s32 get_window_layout_position(s32);
s32 handle_deposit_list_select__19TShopKeepItemWindowFv(void *);
void TShopKeepItemWindow__vt9(u8 *arg0);
void memset(void *, int, int);
int sprintf(char *, const char *, ...);
extern char message_number_format[4];
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 get_item_record__23TShopJudgmentItemWindowFPv(s32, s32, s32);
s32 store_item_in_bank(void *, s32, s32);
s32 copy_bank_to_card_window(s32);
s32 TShopWindowBase__sub_8022397C(void *);
s32 play_sound_effect(s32, s32, s32, s32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
s32 select_cursor_entry__6TLobbyFv(s32);
u32 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 count_matching_items__10TObjPlayerFPvi(s32, u32 *);
s32 get_shop_text(s32);
void TWindowHelpItem__set_displayed_item_by_id(u32, s32);
void reset_list__20TShopArmorListWindowFPv(u32);
void calc_list_content_extent(u32);
s32 get_window_layout_position(s32);
u32 create_item_list_window(s32, s32, u16);
extern f32 lbl_805DC710;
}

extern "C" {

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void TShopKeepItemWindow__vt4(void *arg0);
void TShopKeepItemWindow__vt5(void *arg0);
void *__dt__19TShopKeepItemWindowFv(void *arg0, s16 arg1);
void sort_bank_items(s32 slot);
s32 TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
void memset(void *, int, int);
s32 queue_destruction__7TObjectFv(void *);
s32 set_field_20__12TQuestListVMFl(void *, s32);

void TShopKeepItemWindow__vt5(void *arg0) {
    struct VObj_80221844 *temp_r3;

    temp_r3 = (struct VObj_80221844 *)*(void **)((s8 *)arg0 + 0x380);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopKeepItemWindow__vt4(void *arg0) {
    struct VObj_8022187C_80221844 *o = (struct VObj_8022187C_80221844 *)*(void **)((s8 *)arg0 + 0x380);
    if (o != NULL) {
        o->m4();
    }
}

s32 TShopKeepItemWindow::close_with_cancel_callback() {
    s32 (*temp_r12)(s32);

    temp_r12 = *(s32 (**)(s32))((s8 *)this + 0x398);
    if (temp_r12 != NULL) {
        temp_r12(*(s32 *)((s8 *)this + 0x380));
    }
    sort_bank_items(TShopWindowBase__sub_8022397C(this));
    queue_destruction__7TObjectFv(this);
}

s32 TShopKeepItemWindow::close_with_ok_callback() {
    s32 (*temp_r12)(s32);

    temp_r12 = *(s32 (**)(s32))((s8 *)this + 0x394);
    if (temp_r12 != NULL) {
        temp_r12(*(s32 *)((s8 *)this + 0x380));
    }
    sort_bank_items(TShopWindowBase__sub_8022397C(this));
    queue_destruction__7TObjectFv(this);
}

s32 TShopKeepItemWindow::close() {
    if ((u32) *(u32 *)((s8 *)this + 0x384) != 0U) {
        ((TWindowSubItem *)(*(void **)((s8 *)this + 0x384)))->clear_selected_and_update_entry();
    }
    set_field_20__12TQuestListVMFl(this, 1);
}

extern s32 __vt__19TShopKeepItemWindow[];

void TShopKeepItemWindow::handle_deposit_confirm() {
    Self_802219A0 *self = (Self_802219A0 *)this;
    s32 base;
    s32 r;
    s32 i;
    void *win;
    win = self->f388;
    if (win != NULL && ((TWindowSubComCard *)win)->is_visible() != 0) {
        base = TShopWindowBase__sub_8022397C(this);
        r = get_selected_menu_value(self->f388);
        if (r == 0) {
            i = select_cursor_entry__6TLobbyFv(self->f384);
            if (store_item_in_bank(&self->ents[i].f4, self->f378, base) != 0) {
                get_item_record__23TShopJudgmentItemWindowFPv(self->f24, ((TObjPlayer *)(self->ents[i].f0))->get_field_d8(), self->f378);
                copy_bank_to_card_window(base);
                play_sound_effect(0x52D01, 0, 0, 0);
                TWindow__close(self->f388);
                self->f388 = NULL;
                set_field_20__12TQuestListVMFl(this, 0);
                return;
            }
            ((V_802219A0 *) this)->m4(0x3C, 1);
            play_sound_effect(0x53F06, 0, 0, 0);
            TWindow__close(self->f388);
            self->f388 = NULL;
            set_field_20__12TQuestListVMFl(this, 7);
            return;
        }
        if (r == 1) {
            TWindow__close(self->f388);
            self->f388 = NULL;
            set_field_20__12TQuestListVMFl(this, 3);
            return;
        }
    }
    win = self->f388;
    if (win != NULL && ((TWindowSubComCard *)win)->get_status_flag() != 0) {
        TWindow__close(self->f388);
        self->f388 = NULL;
        set_field_20__12TQuestListVMFl(this, 3);
    }
}

void TShopKeepItemWindow::update_number_input() {
    f32 temp_f31;
    u16 temp_r31;
    u32 w;
    w = *(u32 *)((s8 *)this + 0x38C);
    if ((w != 0U) && (((TWindowInputNumber *)w)->is_confirmed() != 0)) {
        if ((u32) *(u32 *)((s8 *)this + 0x388) == 0U) {
            temp_r31 = obj_getField1c(*(s32 *)((s8 *)this + 0x24));
            *(u32 *)((s8 *)this + 0x388) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            ((TCheckRoomSequence *)(*(u32 *)((s8 *)this + 0x388)))->set_ready_flag();
            temp_f31 = get_scale__15TShopWindowBaseFv(this);
            set_position_xy(*(u32 *)((s8 *)this + 0x388), get_scale__15TShopWindowBaseFv(this), temp_f31);
        }
        *(s32 *)((s8 *)this + 0x378) = ((TShopEquipmentSellWindow *)(*(u32 *)((s8 *)this + 0x38C)))->get_result();
        TWindow__close((void *)(*(u32 *)((s8 *)this + 0x38C)));
        *(u32 *)((s8 *)this + 0x38C) = 0U;
        set_field_20__12TQuestListVMFl(this, 2);
        return;
    }
    w = *(u32 *)((s8 *)this + 0x38C);
    if ((w != 0U) && (((TShopEquipmentSellWindow *)w)->is_confirmed() != 0)) {
        TWindow__close((void *)(*(u32 *)((s8 *)this + 0x38C)));
        *(u32 *)((s8 *)this + 0x38C) = 0U;
        set_field_20__12TQuestListVMFl(this, 3);
    }
}

s32 TShopKeepItemWindow::rebuild_item_list() {
    Self_80221F08 *self = (Self_80221F08 *)this;
    u32 buf[30];
    s32 count;
    s32 i;
    s32 cur;
    self->f378 = 1;
    count = count_matching_items__10TObjPlayerFPvi(*(s32 *)((s8 *)self->f24 + 0xD00), buf);
    self->f374 = 0;
    for (i = 0; i < count; i++) {
        if (buf[i] != 0 && ((TItem *)(buf[i]))->copy_to_item_data(self->ents[self->f374].item) != 0) {
            self->ents[self->f374].f0 = buf[i];
            self->ents[self->f374].f18 = i;
            self->f374++;
        }
    }
    if (self->f374 != 0) {
        set_field_20__12TQuestListVMFl(this, 1);
    } else {
        ((VObj_80221F08 *)this)->m4(0x49, 1);
        set_field_20__12TQuestListVMFl(this, 7);
        return;
    }
    if (self->f384 == 0U) {
        self->f384 = create_item_list_window(get_shop_text(0x30), 0x40, obj_getField1c((s32)self->f24));
        for (s32 j = 0; j < self->f374; j++) {
            ((TShopJudgmentItemWindow *)(self->f384))->add_list_entry(self->ents[j].f0, j);
        }
        calc_list_content_extent(self->f384);
        cur = ((TShopGetItemWindow *)(self->f384))->get_cursor_index();
    } else {
        ((TShopArmorListWindow *)(self->f384))->save_cursor_selection();
        reset_list__20TShopArmorListWindowFPv(self->f384);
        for (s32 j = 0; j < self->f374; j++) {
            ((TShopJudgmentItemWindow *)(self->f384))->add_list_entry(self->ents[j].f0, j);
        }
        ((TShopArmorListWindow *)(self->f384))->clamp_selection_to_valid_entry();
        calc_list_content_extent(self->f384);
        ((TWindowSubItem *)((void *)self->f384))->clear_selected_and_update_entry();
        cur = ((TShopGetItemWindow *)(self->f384))->get_cursor_index();
    }
    if (self->f390 == 0U) {
        self->f390 = (u32)new TWindowHelpItem((void *)get_window_layout_position(0x27), obj_getField1c((s32)self->f24));
        if (self->f390 != 0U && TLobby::is_camera_ctrl_active() > 2) {
            ((TLobby *)(self->f390))->set_position(lbl_805DC710, lbl_805DC710);
        }
        TWindowHelpItem__set_displayed_item_by_id(self->f390, ((TObjPlayer *)(self->ents[cur].f0))->get_field_d8());
        self->f37C = cur;
    } else {
        TWindowHelpItem__set_displayed_item_by_id(self->f390, ((TObjPlayer *)(self->ents[cur].f0))->get_field_d8());
        self->f37C = cur;
    }
}

void TShopKeepItemWindow__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        ((TShopKeepItemWindow *)arg0)->rebuild_item_list();
        return;
    case 1:
        handle_deposit_list_select__19TShopKeepItemWindowFv((void *) (arg0));
        return;
    case 2:
        ((TShopKeepItemWindow *)arg0)->handle_deposit_confirm();
        return;
    case 3:
        ((TShopKeepItemWindow *)arg0)->close();
        return;
    case 4:
        ((TShopKeepItemWindow *)arg0)->update_number_input();
        return;
    case 5:
        ((TShopKeepItemWindow *)arg0)->close_with_ok_callback();
        return;
    case 7:
        ((TShopKeepItemWindow *)arg0)->close_with_cancel_callback();
    default:
        return;
    }
}

void *__dt__19TShopKeepItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TShopKeepItemWindow;
        if (*(void **)((s8 *)arg0 + 0x384) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x384)); *(s32 *)((s8 *)arg0 + 0x384) = 0; }
        if (*(void **)((s8 *)arg0 + 0x388) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x388)); *(s32 *)((s8 *)arg0 + 0x388) = 0; }
        if (*(void **)((s8 *)arg0 + 0x38C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x38C)); *(s32 *)((s8 *)arg0 + 0x38C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x390) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x390)); *(s32 *)((s8 *)arg0 + 0x390) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__19TShopKeepItemWindow[];
extern void *TShopKeepItemWindow__class_name;

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TShopKeepItemWindow;
    *(void **)((s8 *)arg0 + 0x0) = TShopKeepItemWindow__class_name;
    *(u32 *)((s8 *)arg0 + 0x370) = 0;
    *(u32 *)((s8 *)arg0 + 0x374) = 0;
    *(u32 *)((s8 *)arg0 + 0x378) = 1;
    *(u32 *)((s8 *)arg0 + 0x37C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(void **)((s8 *)arg0 + 0x380) = arg2;
    *(u32 *)((s8 *)arg0 + 0x384) = 0;
    *(u32 *)((s8 *)arg0 + 0x388) = 0;
    *(u32 *)((s8 *)arg0 + 0x390) = 0;
    *(u32 *)((s8 *)arg0 + 0x38C) = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(u32 *)((s8 *)arg0 + 0x394) = 0;
    *(u32 *)((s8 *)arg0 + 0x398) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

extern s32 message_tag_error[];
extern s32 local_client_id;

}
