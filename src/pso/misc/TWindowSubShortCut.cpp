#include "types.h"
#include "pso/misc/TWindowSubShortCut.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowChat.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/misc/TWindowSubShortCutList.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/object/TObjCityMainWarp.h"

struct Win_8027DBB8 { u8 pad[0x20]; s32 f20; };

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 get_window_layout_position(s32 a0);
s32 open_yes_no_prompt(s32, s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
extern const f32 lbl_805DD6C0;
void queue_destruction__7TObjectFv(void *);
s32 clear_chat_shortcut();
s32 store_chat_shortcut(int, void *);
void *__nw__7TObjectFUl(u32);
void TWindow__close(void *);
void *TWindowChat__ct(void *, void *, void *);
u8 get_selected_menu_value(int);
s32 select_cursor_entry__6TLobbyFv(s32);
s32 get_window_layout_position(s32 a0);
u32 TWindowShortCut__ct(int, int, int, void *);
void open_com_card_list__18TWindowSubShortCutFPv(void *arg0);
}

extern "C" {

void *TWindowSubShortCut__ct(void *arg0, void *arg1, void *arg2);
void *__dt__18TWindowSubShortCutFv(void *arg0, s16 arg1);
void open_com_card_list__18TWindowSubShortCutFPv(void *arg0);
u32 *get_chat_shortcut();
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
s32 align_menu_entry_positions(s32);
s32 update_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 get_window_layout_position(s32 a0 = 0);
s32 open_yes_no_prompt(s32, s32, s32, s32, f32);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 draw_card_icon__17TWindowSubComCardFll(s32, s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
void queue_destruction__7TObjectFv(void *);
s32 select_cursor_entry__6TLobbyFv(s32);

int TWindowSubShortCut::is_shortcut_active() { return *(u8*)((char*)this + 0x60) & 0x4; }

extern const f32 lbl_805DD6C0;

s32 TWindowSubShortCut::open_confirm_message() {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(this, *(s32 *)((s8 *)this + 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFl(0x20), get_message_10__20TWindowSubStatusDispFl(0x3e), get_window_layout_position((s32)(0x76)), lbl_805DD6C0);
    free_member__17TWindowSubComCardFv(temp_r29, 1);
    ((TWindowSubShortMail *)temp_r29)->notify_warp_flag70();
    return temp_r29;
}

extern const f32 lbl_805DD6C0;

s32 TWindowSubShortCut::open_confirm_prompt() {
    Win_8027DBB8 *arg0 = (Win_8027DBB8 *)this;
    s32 r = create__19TWindowMessageYesNoFPvPvPvPv(arg0, arg0->f20, 0, 0);
    open_yes_no_prompt((s32)(r), (s32)(get_message_10__20TWindowSubStatusDispFl((s32)(0x20))), (s32)(get_message_10__20TWindowSubStatusDispFl((s32)(0x3D))), (s32)(get_window_layout_position(0x75)), lbl_805DD6C0);
    ((TWindowSubShortMail *)r)->notify_warp_flag70();
    return r;
}

s32 TWindowSubShortCut::open_menu() {
    s32 temp_r31;
    u32 *temp_r30;

    select_cursor_entry__6TLobbyFv(*(s32 *)((s8 *)this + 0x2C));
    temp_r30 = get_chat_shortcut();
    temp_r31 = draw_card_icon__17TWindowSubComCardFll(get_window_layout_position((s32)(0x74)), 2, get_message_10__20TWindowSubStatusDispFl(0x2C));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x7E), 6, 5);
    if ((u32) *temp_r30 != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x5A), 6, 9);
    } else {
        TWindowSubComCard::draw_text_gray(temp_r31, get_message_10__20TWindowSubStatusDispFl(0x5A), 6, 9);
    }
    ((TObjCityMainWarp *)temp_r31)->set_flag70_bit10();
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD6C0);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

void open_com_card_list__18TWindowSubShortCutFPv(void *arg0) {
    s32 tmp = get_window_layout_position((s32)(0x72));
    ((TWindowSubShortCutList *)tmp)->create((void *)(*(s32 *)((s8 *)arg0 + 0x24)));
}
void TWindowSubShortCut::render() {  }

extern s32 __vt__18TWindowSubShortCut[];

void TWindowSubShortCut::run_task() {
    u8 *arg0 = (u8 *)this;
    u32 var_r0;
    void *var_r30;
    u8 temp_r0;
    u8 *temp_r3;
    temp_r0 = *(u8 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
    case 1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x38));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x34)))->close();
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x3C));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x2C) = ((s32 (*)(void *))open_com_card_list__18TWindowSubShortCutFPv)((void *) (arg0));
        }
        ((TWindowSubShortCutList *)(*(u32 *)((s8 *)arg0 + 0x2C)))->refresh_entries();
        ((TWindowSubItem *)(*(u32 *)((s8 *)arg0 + 0x2C)))->clear_selected_and_update_entry();
        *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
    case 2:
        if (((TLobby *)(*(u32 *)((s8 *)arg0 + 0x2C)))->get_flag_bit2() != 0) {
            temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x28));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
            return;
        }
        if (((TLobby *)(*(u32 *)((s8 *)arg0 + 0x2C)))->get_status_flag() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
        }
        break;
    case 3:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x34)))->close();
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x30) = open_menu();
        }
        ((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x30)))->clear_flag_and_release();
        ((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x30)))->clear_transition_flag();
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
    case 4:
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x30)))->get_status_flag() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x30)))->is_visible() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x30)));
            return;
        }
        break;
    case 5:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            *(s32 *)((s8 *)arg0 + 0x24) = select_cursor_entry__6TLobbyFv(*(s32 *)((s8 *)arg0 + 0x2C));
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) == 0U) {
            void *chat = __nw__7TObjectFUl(0x3C);
            if (chat != 0) {
                chat = TWindowChat__ct(chat, (void *) (arg0), (void *) ((u8 *)(arg0) + 0x40));
            }
            *(void **)((s8 *)arg0 + 0x38) = chat;
            ((TWindowSubShortCut *)(*(u32 *)((s8 *)arg0 + 0x38)))->free_icon();
            ((TWindowSubShortCut *)(*(u32 *)((s8 *)arg0 + 0x38)))->close_and_clear_flag();
            ((TWindowSubShortCut *)(*(void **)((s8 *)arg0 + 0x38)))->set_flag1e_bit80();
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 6U;
    case 6:
        if (((TWindowChat *)(*(u32 *)((s8 *)arg0 + 0x38)))->is_visible() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (((TWindowChat *)(*(u32 *)((s8 *)arg0 + 0x38)))->is_mode_bit4() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 7U;
            return;
        }
        break;
    case 7:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x38));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) == 0U) {
            var_r30 = __nw__7TObjectFUl(0x74);
            if (var_r30 != 0) {
                var_r30 = (void *)TWindowShortCut__ct((int) (var_r30), (int) (get_window_layout_position((int) (0x73))), (int) (*(s32 *)((s8 *)arg0 + 0x24)), (void *) ((u8 *)(arg0) + 0x40));
            }
            *(void **)((s8 *)arg0 + 0x3C) = var_r30;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x34) = open_confirm_prompt();
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 8U;
    case 8:
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->get_card_data() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->is_child_visible() != 0) {
            if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->get_slot_or_neg1() == 0) {
                store_chat_shortcut((int) (*(s32 *)((s8 *)arg0 + 0x24)), (void *) ((u8 *)(arg0) + 0x40));
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        break;
    case 9:
        ((TWindowOptionCtrl *)(*(u32 *)((s8 *)arg0 + 0x30)))->open();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x34) = open_confirm_message();
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xAU;
    case 10:
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->get_card_data() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
            return;
        }
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->is_child_visible() != 0) {
            if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x34)))->get_slot_or_neg1() == 0) {
                select_cursor_entry__6TLobbyFv((int) (*(u32 *)((s8 *)arg0 + 0x2C)));
                clear_chat_shortcut();
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
        }
        break;
    case 11:
        break;
    }
}

void *__dt__18TWindowSubShortCutFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TWindowSubShortCut;
        if (*(void **)((s8 *)arg0 + 0x38) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x38)); *(s32 *)((s8 *)arg0 + 0x38) = 0; }
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x34)))->close(); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
        if (*(void **)((s8 *)arg0 + 0x3C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x3C)); *(s32 *)((s8 *)arg0 + 0x3C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__18TWindowSubShortCut[];
extern void *TWindowSubShortCut__class_name;

void *TWindowSubShortCut__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TWindowSubShortCut;
    *(void **)((s8 *)arg0 + 0x0) = TWindowSubShortCut__class_name;
    *(void **)((s8 *)arg0 + 0x28) = arg1;
    *(void **)((s8 *)arg0 + 0x20) = arg2;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x3C) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void TWindowSubShortCut::set_flag1e_bit80() { *(u16*)((char*)this + 0x1e) |= 0x80; }

}
