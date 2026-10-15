#include "types.h"

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
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 get_window_layout_position(s32 a0);
s32 notify_warp_flag70__19TWindowSubShortMailFPv(s32);
s32 open_yes_no_prompt(s32, s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
extern const f32 lbl_805DD6C0;
s32 open_confirm_prompt__18TWindowSubShortCutFPv(Win_8027DBB8 *arg0);
void queue_destruction__7TObjectFv(void *);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
s32 clear_chat_shortcut();
s32 store_chat_shortcut(int, void *);
s32 get_status_flag__6TLobbyFPv(int);
s32 get_flag_bit2__6TLobbyFPv(int);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(int);
s32 clear_flag_and_release__17TWindowSubComCardFPv(int);
void *__nw__7TObjectFUl(u32);
void TWindow__close(void *);
s32 close_and_clear_flag__18TWindowSubShortCutFPv(int);
s32 free_icon__18TWindowSubShortCutFPv(int);
void *TWindowChat__ct(void *, void *, void *);
s32 is_visible__11TWindowChatFPv(int);
s32 is_mode_bit4__11TWindowChatFPv(int);
u8 get_selected_menu_value(int);
s32 clear_transition_flag__17TWindowSubComCardFPv(int);
s32 open__17TWindowOptionCtrlFPv(int);
s32 select_cursor_entry__6TLobbyFPv(s32);
s32 get_window_layout_position(s32 a0);
u32 TWindowShortCut__ct(int, int, int, void *);
s32 open_confirm_message__18TWindowSubShortCutFPv(void *arg0);
s32 open_confirm_prompt__18TWindowSubShortCutFPv(Win_8027DBB8 *arg0);
s32 open_menu__18TWindowSubShortCutFPv(void *arg0);
void open_com_card_list__18TWindowSubShortCutFPv(void *arg0);
void set_flag1e_bit80__18TWindowSubShortCutFPv(void* p);
s32 refresh_entries__22TWindowSubShortCutListFPv(int);
void close__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 is_child_visible__17TWindowSubComCardFPv(int);
void run_task__18TWindowSubShortCutFv(u8 *arg0);
}

extern "C" {

void *TWindowSubShortCut__ct(void *arg0, void *arg1, void *arg2);
void *__dt__18TWindowSubShortCutFv(void *arg0, s16 arg1);
int is_shortcut_active__18TWindowSubShortCutFPv(void* p);
void open_com_card_list__18TWindowSubShortCutFPv(void *arg0);
s32 open_confirm_message__18TWindowSubShortCutFPv(void *arg0);
s32 open_menu__18TWindowSubShortCutFPv(void *arg0);
void render__18TWindowSubShortCutFv(void);
void set_flag1e_bit80__18TWindowSubShortCutFPv(void* p);
u32 *get_chat_shortcut();
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, s32, s32);
s32 align_menu_entry_positions(s32);
s32 update_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 get_window_layout_position(s32 a0 = 0);
s32 create__22TWindowSubShortCutListFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 open_yes_no_prompt(s32, s32, s32, s32, f32);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, s32, s32);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 free_member__17TWindowSubComCardFPv(s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 notify_warp_flag70__19TWindowSubShortMailFPv(s32);
void queue_destruction__7TObjectFv(void *);
s32 select_cursor_entry__6TLobbyFPv(s32);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(s32);

int is_shortcut_active__18TWindowSubShortCutFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x4; }

extern const f32 lbl_805DD6C0;

s32 open_confirm_message__18TWindowSubShortCutFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, *(s32 *)((s8 *)arg0 + 0x20), 0, 0);
    open_yes_no_prompt(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x3e), get_window_layout_position((s32)(0x76)), lbl_805DD6C0);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 lbl_805DD6C0;

s32 open_confirm_prompt__18TWindowSubShortCutFPv(Win_8027DBB8 *arg0) {
    s32 r = create__19TWindowMessageYesNoFPvPvPvPv(arg0, arg0->f20, 0, 0);
    open_yes_no_prompt((s32)(r), (s32)(get_message_10__20TWindowSubStatusDispFPv((s32)(0x20))), (s32)(get_message_10__20TWindowSubStatusDispFPv((s32)(0x3D))), (s32)(get_window_layout_position(0x75)), lbl_805DD6C0);
    notify_warp_flag70__19TWindowSubShortMailFPv((s32)(r));
    return r;
}

s32 open_menu__18TWindowSubShortCutFPv(void *arg0) {
    s32 temp_r31;
    u32 *temp_r30;

    select_cursor_entry__6TLobbyFPv(*(s32 *)((s8 *)arg0 + 0x2C));
    temp_r30 = get_chat_shortcut();
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(get_window_layout_position((s32)(0x74)), 2, get_message_10__20TWindowSubStatusDispFPv(0x2C));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x7E), 6, 5);
    if ((u32) *temp_r30 != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 9);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 9);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD6C0);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

void open_com_card_list__18TWindowSubShortCutFPv(void *arg0) {
    s32 tmp = get_window_layout_position((s32)(0x72));
    create__22TWindowSubShortCutListFPvPv(tmp, *(s32 *)((s8 *)arg0 + 0x24));
}
void render__18TWindowSubShortCutFv(void) {  }

extern s32 __vt__18TWindowSubShortCut[];

void run_task__18TWindowSubShortCutFv(u8 *arg0) {
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
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x34));
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
        refresh_entries__22TWindowSubShortCutListFPv((int) (*(u32 *)((s8 *)arg0 + 0x2C)));
        clear_selected_and_update_entry__14TWindowSubItemFPv((int) (*(u32 *)((s8 *)arg0 + 0x2C)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
    case 2:
        if (get_flag_bit2__6TLobbyFPv((int) (*(u32 *)((s8 *)arg0 + 0x2C))) != 0) {
            temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x28));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
            return;
        }
        if (get_status_flag__6TLobbyFPv((int) (*(u32 *)((s8 *)arg0 + 0x2C))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
        }
        break;
    case 3:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x34));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x30) = open_menu__18TWindowSubShortCutFPv((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x30)));
        clear_transition_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x30)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
    case 4:
        if (get_status_flag__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x30))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x30))) != 0) {
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
            *(s32 *)((s8 *)arg0 + 0x24) = select_cursor_entry__6TLobbyFPv(*(s32 *)((s8 *)arg0 + 0x2C));
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) == 0U) {
            void *chat = __nw__7TObjectFUl(0x3C);
            if (chat != 0) {
                chat = TWindowChat__ct(chat, (void *) (arg0), (void *) ((u8 *)(arg0) + 0x40));
            }
            *(void **)((s8 *)arg0 + 0x38) = chat;
            free_icon__18TWindowSubShortCutFPv((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            close_and_clear_flag__18TWindowSubShortCutFPv((int) (*(u32 *)((s8 *)arg0 + 0x38)));
            set_flag1e_bit80__18TWindowSubShortCutFPv(*(void **)((s8 *)arg0 + 0x38));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 6U;
    case 6:
        if (is_visible__11TWindowChatFPv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_mode_bit4__11TWindowChatFPv((int) (*(u32 *)((s8 *)arg0 + 0x38))) != 0) {
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
            *(u32 *)((s8 *)arg0 + 0x34) = open_confirm_prompt__18TWindowSubShortCutFPv((Win_8027DBB8 *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 8U;
    case 8:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x34))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x34))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x34))) == 0) {
                store_chat_shortcut((int) (*(s32 *)((s8 *)arg0 + 0x24)), (void *) ((u8 *)(arg0) + 0x40));
                *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
                return;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
            return;
        }
        break;
    case 9:
        open__17TWindowOptionCtrlFPv((int) (*(u32 *)((s8 *)arg0 + 0x30)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x34) = open_confirm_message__18TWindowSubShortCutFPv((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xAU;
    case 10:
        if (get_card_data__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x34))) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x34))) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv((int) (*(u32 *)((s8 *)arg0 + 0x34))) == 0) {
                select_cursor_entry__6TLobbyFPv((int) (*(u32 *)((s8 *)arg0 + 0x2C)));
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
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x34)); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
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

void set_flag1e_bit80__18TWindowSubShortCutFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x80; }

}
