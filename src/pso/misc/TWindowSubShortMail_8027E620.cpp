#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct VBase_18_8027EF98 { char pad[0x18]; };

struct VObj_18_8027EF98 : VBase_18_8027EF98 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual void m7();
};

struct ShortMail_8027EF98 {
    u8 pad0[0x1C];
    u8 state;
    u8 pad1D[3];
    s32 f20;
    u8 pad24[4];
    s32 f28;
    s32 f2c;
    s32 f30;
    VObj_18_8027EF98 *parent;
    void *w38;
    void *w3c;
    void *w40;
    void *w44;
    void *w48;
    void *w4c;
    void *w50;
    void *w54;
    void *w58;
    void *w5c;
};

extern "C" {
void TWindowSubShortMail__sub_8027FAD0(u8 *arg0);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 align_menu_entry_positions(int);
s32 update_layout_height__17TWindowSubComCardFPvf(int, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_window_menu(int, int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(int);
extern const f32 lbl_805DD6D8;
s32 create_status_category_menu(u8 *arg0);
void TWindow__close(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
void *create_menu__19TWindowSubShortMailFv(void *);
void clear_flag_and_release__17TWindowSubComCardFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_selected_menu_value(s32);
void *send_cmd_133__17TWindowSubComCardFv(void);
void *send_command__17TWindowSubComCardFi(s32);
void update_display_value__17TWindowSubComCardFUiUiPv(void *, void *, void *);
void *get_card_entry__17TWindowSubComCardFi(s32);
s32 get_card_id__17TWindowSubComCardFPv(void *);
void *create_list_item__19TWindowSubShortMailFPv(void *);
void advance_line__19TWindowSubShortMailFPvi(void *, s32);
s32 refresh_mail_list__19TWindowSubShortMailFPvPv(void *, void *);
void clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 is_active__19TWindowSubShortMailFv(void);
void update_mail_count__19TWindowSubShortMailFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 get_status_flag__6TLobbyFPv(void *);
void *build_menu__19TWindowSubShortMailFv(void *);
void clear_transition_flag__17TWindowSubComCardFPv(void *);
s32 select_cursor_entry__6TLobbyFPv(void *);
void *TLobby__sub_80225924(s32);
s32 TWindowSubShortMail__sub_8007B834(void *);
void *create_keyboard__19TWindowSubShortMailFv(void);
s32 get_window_layout_position(int);
void set_position__19TWindowSubShortMailFPvPv(void *, void *);
void free_menu_object(void *);
void hide_window__19TWindowSubShortMailFPv(void *);
s32 is_keyboard_active__17TWindowSubComCardFPv(void *);
s32 update_keyboard__17TWindowSubComCardFPv(void *);
void TWindowSubShortMail__sub_80131998(void *);
void *open_confirm_prompt__19TWindowSubShortMailFPvi(void *, s32);
s32 get_card_data__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *);
void close__19TWindowSubShortMailFPv(void *);
void TWindowSubShortMail__sub_8027E620(void *p);
void open__17TWindowOptionCtrlFPv(void *);
void *open_confirm_dialog__19TWindowSubShortMailFPv(void *);
void TLobby__sub_80225A74(s32);
s32 is_active__6TLobbyFv(void);
void *create_confirm_menu_window__19TWindowSubShortMailFv(void *);
void *create_window__19TWindowSubShortMailFv(void *);
void *open_menu__19TWindowSubShortMailFv(void);
s32 set_flag_bit0__6TLobbyFi(s32);
void *get_card_window_area__6TLobbyFv(void);
void get_keyboard_field_6c__15TWindowMakeTeamFPv(void *, void *);
void *open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *);
void *realloc_buffer__17TWindowSubComCardFPv(void *);
void set_short_mail_text__6TLobbyFi(void *);
void free__11TOBoss4RockFUi(void *);
void run_task__19TWindowSubShortMailFv(ShortMail_8027EF98 *o);
}

extern "C" {

struct VObj_8027FBF0_Base_8027fbf0_8027E620 { char pad[0x18]; };
struct VObj_8027FBF0_8027E620 : VObj_8027FBF0_Base_8027fbf0_8027E620 {
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
};

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2);
void TWindowSubShortMail__sub_8027FBEC(void);
void *__dt__19TWindowSubShortMailFv(void *arg0, s16 arg1);
void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1);
u8 get_field_cc__19TWindowSubShortMailFPv(void* p);
void* get_mail_ptr__19TWindowSubShortMailFPv(void* p);
void render__19TWindowSubShortMailFv(void);
void update__19TWindowSubShortMailFPv(void *arg0);
M2C_UNK TLobby__sub_8001DA00();
M2C_UNK TLobby__sub_802258C8();
s32 get_selected_menu_value(s32);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK fn_8027FD94(s32, s16);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
M2C_UNK is_player_input_active(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__19TWindowSubShortMailFv(void) {  }

extern M2C_UNK __vt__19TWindowSubShortMail[];

void run_task__19TWindowSubShortMailFv(ShortMail_8027EF98 *o) {
    switch (o->state) {
    case 0:
    case 1:
        if (o->w48 != NULL) { TWindow__close(o->w48); o->w48 = NULL; }
        if (o->w44 != NULL) { TWindow__close(o->w44); o->w44 = NULL; }
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w5c != NULL) { queue_destruction__7TObjectFv(o->w5c); o->w5c = NULL; }
        if (o->w38 != NULL) { TWindow__close(o->w38); o->w38 = NULL; }
        if (o->w58 != NULL) { TWindow__close(o->w58); o->w58 = NULL; }
        if (o->w54 != NULL) { TWindow__close(o->w54); o->w54 = NULL; }
        if (o->w40 == NULL) {
            o->w40 = create_menu__19TWindowSubShortMailFv(o);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w40);
        o->state = 2;
    case 2:
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w40) != 0) {
            o->parent->m7();
            o->state = 0x1C;
        } else if (is_visible__17TWindowSubComCardFPv(o->w40) != 0) {
            o->state = get_selected_menu_value((s32)(o->w40));
        }
        break;
    case 3:
        if (o->w44 != NULL) { TWindow__close(o->w44); o->w44 = NULL; }
        if (o->w54 == NULL) {
            o->w54 = send_cmd_133__17TWindowSubComCardFv();
        }
        if (o->w58 == NULL) {
            o->f28 = get_selected_menu_value((s32)(o->w54));
            o->w58 = send_command__17TWindowSubComCardFi(o->f28);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w54);
        o->state = 4;
    case 4:
        update_display_value__17TWindowSubComCardFUiUiPv(o->w54, o->w58, &o->f28);
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w54) != 0) {
            o->state = 1;
        } else if (is_visible__17TWindowSubComCardFPv(o->w54) != 0) {
            void *p;
            o->f30 = -1;
            p = get_card_entry__17TWindowSubComCardFi(get_selected_menu_value((s32)(o->w54)));
            if (p != NULL) {
                o->f2c = get_card_id__17TWindowSubComCardFPv(p);
            }
            o->state = 0xB;
        }
        break;
    case 7:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w5c != NULL) { queue_destruction__7TObjectFv(o->w5c); o->w5c = NULL; }
        if (o->w44 != NULL) { TWindow__close(o->w44); o->w44 = NULL; }
        if (o->w38 == NULL) {
            o->w38 = create_list_item__19TWindowSubShortMailFPv(o);
            advance_line__19TWindowSubShortMailFPvi(o->w38, -1);
        }
        refresh_mail_list__19TWindowSubShortMailFPvPv(o, o->w38);
        clear_selected_and_update_entry__14TWindowSubItemFPv(o->w38);
        o->state = 8;
    case 8:
        if (is_active__19TWindowSubShortMailFv() != 0) {
            refresh_mail_list__19TWindowSubShortMailFPvPv(o, o->w38);
        }
        update_mail_count__19TWindowSubShortMailFPv(o);
        if (get_flag_bit2__6TLobbyFPv(o->w38) != 0) {
            o->parent->m7();
            o->state = 0x1C;
        } else if (get_status_flag__6TLobbyFPv(o->w38) != 0) {
            o->state = 9;
        }
        break;
    case 9:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w3c != NULL) { TWindow__close(o->w3c); o->w3c = NULL; }
        if (o->w44 == NULL) {
            o->w44 = build_menu__19TWindowSubShortMailFv(o);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w44);
        clear_transition_flag__17TWindowSubComCardFPv(o->w44);
        o->state = 0xA;
    case 10:
        if (is_active__19TWindowSubShortMailFv() != 0 && refresh_mail_list__19TWindowSubShortMailFPvPv(o, o->w38) == 0) {
            o->state = 7;
        } else if (get_status_flag__17TWindowSubComCardFPv((s32)o->w44) != 0) {
            o->state = 7;
        } else if (is_visible__17TWindowSubComCardFPv(o->w44) != 0) {
            void *p;
            o->f30 = select_cursor_entry__6TLobbyFPv(o->w38);
            p = TLobby__sub_80225924(o->f30);
            if (p != NULL) {
                o->f2c = TWindowSubShortMail__sub_8007B834(p);
            }
            o->state = get_selected_menu_value((s32)(o->w44));
        }
        break;
    case 11:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w44 != NULL) { TWindow__close(o->w44); o->w44 = NULL; }
        if (o->w3c != NULL) { TWindow__close(o->w3c); o->w3c = NULL; }
        if (o->w38 != NULL) { TWindow__close(o->w38); o->w38 = NULL; }
        if (o->w58 != NULL) { TWindow__close(o->w58); o->w58 = NULL; }
        if (o->w54 != NULL) { TWindow__close(o->w54); o->w54 = NULL; }
        if (o->w40 != NULL) { TWindow__close(o->w40); o->w40 = NULL; }
        if (o->w5c == NULL) {
            o->w5c = create_keyboard__19TWindowSubShortMailFv();
        }
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)get_window_layout_position((int)(0xBB))));
        free_menu_object(o->w5c);
        hide_window__19TWindowSubShortMailFPv(o->w5c);
        o->state = 0xC;
    case 12:
        if (is_keyboard_active__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 1;
        } else if (update_keyboard__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 0xD;
        }
        break;
    case 13:
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)get_window_layout_position((int)(0xBC))));
        TWindowSubShortMail__sub_80131998(o->w5c);
        o->w50 = open_confirm_prompt__19TWindowSubShortMailFPvi(o, o->f20);
        o->state = 0xE;
    case 14:
        if (get_card_data__17TWindowSubComCardFPv(o->w50) != 0) {
            o->state = 0xB;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->w50) == 0) {
                close__19TWindowSubShortMailFPv(o);
                o->state = 1;
            } else {
                o->state = 0xB;
            }
        }
        break;
    case 15:
        TWindowSubShortMail__sub_8027E620(o);
        o->state = 0x10;
    case 16:
        o->state = 1;
        break;
    case 17:
        open__17TWindowOptionCtrlFPv(o->w44);
        o->w50 = open_confirm_dialog__19TWindowSubShortMailFPv(o);
        o->state = 0x12;
    case 18:
        if (is_active__19TWindowSubShortMailFv() != 0 && refresh_mail_list__19TWindowSubShortMailFPvPv(o, o->w38) == 0) {
            o->state = 7;
        } else if (get_card_data__17TWindowSubComCardFPv(o->w50) != 0) {
            o->state = 9;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->w50) == 0) {
                TLobby__sub_80225A74(select_cursor_entry__6TLobbyFPv(o->w38));
                o->state = 7;
            } else {
                o->state = 9;
            }
        }
        break;
    case 19:
        if (is_active__6TLobbyFv() != 0) {
            o->state = 0x14;
        } else {
            o->state = 0x18;
        }
        break;
    case 20:
        if (o->w4c != NULL) { TWindow__close(o->w4c); o->w4c = NULL; }
        if (o->w44 == NULL) {
            o->w44 = create_confirm_menu_window__19TWindowSubShortMailFv(o);
        }
        if (o->w48 == NULL) {
            o->w48 = create_window__19TWindowSubShortMailFv(o);
        }
        clear_flag_and_release__17TWindowSubComCardFPv(o->w44);
        o->state = 0x15;
    case 21:
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w44) != 0) {
            o->state = 1;
        } else if (is_visible__17TWindowSubComCardFPv(o->w44) != 0) {
            o->state = get_selected_menu_value((s32)(o->w44));
        }
        break;
    case 22:
        if (o->w4c == NULL) {
            o->w4c = open_menu__19TWindowSubShortMailFv();
        }
        o->state = 0x17;
    case 23:
        if (get_status_flag__17TWindowSubComCardFPv((s32)o->w4c) != 0) {
            o->state = 0x14;
        } else if (is_visible__17TWindowSubComCardFPv(o->w4c) != 0) {
            if (set_flag_bit0__6TLobbyFi(get_selected_menu_value((s32)(o->w4c))) != 0) {
                if (o->w48 != NULL) { TWindow__close(o->w48); o->w48 = NULL; }
            }
            o->state = 0x14;
        }
        break;
    case 24:
        if (o->w50 != NULL) { close__17TWindowSubComCardFPv(o->w50); o->w50 = NULL; }
        if (o->w48 != NULL) { TWindow__close(o->w48); o->w48 = NULL; }
        if (o->w44 != NULL) { TWindow__close(o->w44); o->w44 = NULL; }
        if (o->w40 != NULL) { TWindow__close(o->w40); o->w40 = NULL; }
        if (o->w5c == NULL) {
            o->w5c = create_keyboard__19TWindowSubShortMailFv();
            get_keyboard_field_6c__15TWindowMakeTeamFPv(o->w5c, get_card_window_area__6TLobbyFv());
        }
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)get_window_layout_position((int)(0xBB))));
        free_menu_object(o->w5c);
        hide_window__19TWindowSubShortMailFPv(o->w5c);
        o->state = 0x19;
    case 25:
        if (is_keyboard_active__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 1;
        } else if (update_keyboard__17TWindowSubComCardFPv(o->w5c) != 0) {
            o->state = 0x1A;
        }
        break;
    case 26:
        set_position__19TWindowSubShortMailFPvPv(o->w5c, ((void *)get_window_layout_position((int)(0xBC))));
        TWindowSubShortMail__sub_80131998(o->w5c);
        if (o->w50 == NULL) {
            o->w50 = open_delete_confirm_dialog__19TWindowSubShortMailFPv(o);
        }
        o->state = 0x1B;
    case 27:
        if (get_card_data__17TWindowSubComCardFPv(o->w50) != 0) {
            o->state = 0x18;
        } else if (is_child_visible__17TWindowSubComCardFPv(o->w50) != 0) {
            if (get_slot_or_neg1__17TWindowSubComCardFPv(o->w50) == 0) {
                void *b = realloc_buffer__17TWindowSubComCardFPv(o->w5c);
                set_short_mail_text__6TLobbyFi(b);
                free__11TOBoss4RockFUi(b);
                o->state = 1;
            } else {
                o->state = 0x18;
            }
        }
        break;
    case 5:
    case 6:
    case 28:
        break;
    }
}

void *__dt__19TWindowSubShortMailFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C));
            M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x48)));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x44)));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x38)));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x58)));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x54)));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        TLobby__sub_802258C8();
        TLobby__sub_8001DA00();
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TWindowSubShortMail[];
extern void *lbl_805D3A98;

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A98;
    M2C_FIELD(arg0, void **, 0x34) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x5C) = 0;
    M2C_FIELD(arg0, u32 *, 0x50) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    M2C_FIELD(arg0, u32 *, 0x28) = -1;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

void TWindowSubShortMail__sub_8027FAD0(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0xCC) = (u8) (M2C_FIELD(arg0, u8 *, 0xCC) & ~0xA);
    M2C_FIELD(arg0, u8 *, 0xCC) = (u8) (M2C_FIELD(arg0, u8 *, 0xCC) | 4);
}

void* get_mail_ptr__19TWindowSubShortMailFPv(void* p) { return (char*)p + 0x20; }

u8 get_field_cc__19TWindowSubShortMailFPv(void* p) { return *(u8*)((char*)p + 0xcc); }

s32 create_status_category_menu(u8 *arg0) {
  s32 temp_r31;
  s32 var_r31;
  if (get_camera_id__11TCameraCtrlFv() > 2)
  {
    temp_r31 = get_window_layout_position((int) 0x18);
    var_r31 = create_window_menu((int) temp_r31, (int) 3, (int) (*((s32 *) (((s8 *) arg0) + 0x1C))));
  }
  else
  {
    temp_r31 = get_message_10__20TWindowSubStatusDispFPv((int) 0x1D);
    var_r31 = create_titled_window_menu((int) get_window_layout_position((int) 0x18), (int) 3, (int) temp_r31, (int) (*((s32 *) (((s8 *) arg0) + 0x1C))));
  }
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) var_r31, (int) get_message_10__20TWindowSubStatusDispFPv((int) 0x10A), (int) 0x36, (int) 0);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) var_r31, (int) get_message_10__20TWindowSubStatusDispFPv((int) 0x10B), (int) 0x36, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) var_r31, (int) get_message_10__20TWindowSubStatusDispFPv((int) 0x10C), (int) 0x36, (int) 2);
  set_flag70_bit10__16TObjCityMainWarpFPv((int) var_r31);
  update_layout_height__17TWindowSubComCardFPvf((int) var_r31, (f32) lbl_805DD6D8);
  align_menu_entry_positions((int) var_r31);
  return var_r31;
}

void TWindowSubShortMail__sub_8027FBEC(void) {  }

void update__19TWindowSubShortMailFPv(void *arg0) {
    is_player_input_active(M2C_FIELD(arg0, s32 *, 0x1C));
    if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        ((VObj_8027FBF0_8027E620 *) M2C_FIELD(arg0, void **, 0x20))->m7();
    }
    fn_8027FD94(M2C_FIELD(arg0, s32 *, 0x28), get_selected_menu_value(M2C_FIELD(arg0, s32 *, 0x24)));
}

extern M2C_UNK lbl_804D1AD0[];

void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D1AD0;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x28))); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x24))); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

}
