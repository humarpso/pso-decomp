#include "types.h"

struct RecoveredGlobal_80339480_lbl_804EF500 {
    s32 value;
    u8 remaining[0x94];
};

struct RecoveredGlobal_803392F4_lbl_80477C20 {
    s32 value;
    u8 remaining[0x1C];
};

struct TAdEnterPPPPassGC {
    virtual void m0();
    char pad[0x18];
    s32 state;
    s32 f20;
    s32 f24;
    void open_keyboard_window(void *);
    void update_password_input(void *);
    void request_transition(void *);
    void forward_chg_game_mode(void *);
    void close_windows_and_advance(void *);
};
typedef TAdEnterPPPPassGC TAdEnterPPPPassGC_80339378;
typedef void (TAdEnterPPPPassGC_80339378::*Pmf_80339378)();

struct T_8033954C { s32 f0; u8 pad[0x14]; void *vt; u8 pad2[0x40 - 0x1C]; s32 f40; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TWindow__close(void *);
extern u8 *password_entry_keyboard_control;
extern s32 password_entry_dispatch_state;
extern const f32 lbl_805DF9E8;
void close_windows_and_advance__17TAdEnterPPPPassGCFPv(u8 *arg0);
s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_8014618C(void);
void set_ppp_password__6TLobbyFi(s32);
void strncpy(s32, s32, s32);
s32 memset(void *, int, int);
void fn_8032B318(void *, void *);
extern u8 password_screen_status_line_position[];
void set_password__17TAdEnterPPPPassGCFi(s32 arg0);
s32 reset_input_state__22TAdEnterSerialAccessGCFPv(int);
s32 add_item_rect__12TLevelSelectFPvPv(int, void *);
s32 set_active__22TAdEnterSerialAccessGCFPv(int);
s32 create_keyboard_control__22TAdEnterSerialAccessGCFii(void *, int);
s32 create_default_callback__22TAdEnterSerialAccessGCFv(void *);
s32 show_message_window__22TAdEnterSerialAccessGCFPvPv(void *, int);
extern RecoveredGlobal_803392F4_lbl_80477C20 TAdEnterPPPPassGC__selection_positions;
extern u8 *password_entry_keyboard_control;
extern s32 password_entry_dispatch_state;
void open_keyboard_window__17TAdEnterPPPPassGCFPv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
void render__17TAdEnterPPPPassGCFv(void *self);
void TKeyBoardControl__sub_8000F9CC(int);
void queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_80145A94(void);
s32 TLobby__sub_80145DB4(int);
s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_8014618C(void);
s8 *TLobby__sub_80146D14(void);
s8 *TLobby__sub_80146D44(void);
void init_account_entries__6TLobbyFv(void);
int reset_mode_state__21TAdMultiChgGameModeGCFv(void*);
void create_parts__14TAdEnterBaseGCFPv(void *);
void reset__14TAdEnterBaseGCFPvi(void *, int);
void TAdEnterBaseGC__ct(void *);
extern s32 __vt__17TAdEnterPPPPassGC[];
extern s32 TAdEnterPPPPassGC__name;
extern s32 password_entry_dispatch_state;
T_8033954C *TAdEnterPPPPassGC__ct(T_8033954C *arg0);
char *realloc_buffer__17TWindowSubComCardFPv(u8 *);
s32 update_keyboard__17TWindowSubComCardFPv(void *);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(int);
void free__11TOBoss4RockFUi(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
void free_menu_object(void *);
void play_sound_effect(int, int, int, int);
s32 reset_input_state__22TAdEnterSerialAccessGCFPv(int);
s32 add_item_rect__12TLevelSelectFPvPv(int, void *);
s32 set_active__22TAdEnterSerialAccessGCFPv(int);
void set_state_3__22TAdEnterSerialAccessGCFPv(int);
s32 forward_input__22TAdEnterSerialAccessGCFPv(void *, int, char *);
void set_password__17TAdEnterPPPPassGCFi(s32 arg0);
s32 strlen(const char *);
extern RecoveredGlobal_803392F4_lbl_80477C20 TAdEnterPPPPassGC__selection_positions;
extern u8 controller_input_state[];
extern u8 controller_physical_port_bank[];
extern u8 *password_entry_keyboard_control;
extern s32 password_entry_dispatch_state;
extern s32 lbl_805DF9EC;
void update_password_input__17TAdEnterPPPPassGCFPv(u8 *arg0);
}

extern "C" {

void *__dt__17TAdEnterPPPPassGCFv(void *arg0, s16 arg1);
int forward_chg_game_mode__17TAdEnterPPPPassGCFPv(void* p);
int request_transition__17TAdEnterPPPPassGCFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int reset_mode_state__21TAdMultiChgGameModeGCFv(void*);

void render__17TAdEnterPPPPassGCFv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

void close_windows_and_advance__17TAdEnterPPPPassGCFPv(u8 *arg0) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x30));
    if (temp_r3 != NULL) {
        TWindow__close(temp_r3);
        *(u8 **)((s8 *)arg0 + 0x30) = NULL;
    }
    temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x34));
    if (temp_r3_2 != NULL) {
        TWindow__close(temp_r3_2);
        *(u8 **)((s8 *)arg0 + 0x34) = NULL;
    }
    if ((void *) password_entry_keyboard_control != NULL) {
        queue_destruction__7TObjectFv(password_entry_keyboard_control);
        password_entry_keyboard_control = NULL;
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x24) + 1;
    *(s32 *)((s8 *)arg0 + 0x24) = temp_r4;
    if ((f32) temp_r4 > lbl_805DF9E8) {
        password_entry_dispatch_state = *(s32 *)((s8 *)arg0 + 0x20);
    }
}

int forward_chg_game_mode__17TAdEnterPPPPassGCFPv(void* p) { return reset_mode_state__21TAdMultiChgGameModeGCFv(p); }
int request_transition__17TAdEnterPPPPassGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

extern s32 __vt__17TAdEnterPPPPassGC[];

typedef char RecoveredGlobal_80339480_lbl_804EF500_size[sizeof(RecoveredGlobal_80339480_lbl_804EF500) == 0x98 ? 1 : -1];

typedef char RecoveredGlobal_803392F4_lbl_80477C20_size[sizeof(RecoveredGlobal_803392F4_lbl_80477C20) == 0x20 ? 1 : -1];

void update_password_input__17TAdEnterPPPPassGCFPv(u8 *arg0) {
    char *buf;
    s32 cur;
    buf = realloc_buffer__17TWindowSubComCardFPv(password_entry_keyboard_control);
    if ((*(s32 *)((s8 *)arg0 + 0x40) == 0 && TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + 0x20, 2) != 0) ||
        (*(s32 *)((s8 *)arg0 + 0x40) == 0 && test_flag_4c__23TAdSinglePlyChrSelectGCFPv(controller_input_state + 0x160, 2) != 0)) {
        free__11TOBoss4RockFUi(buf);
        set_password__17TAdEnterPPPPassGCFi((s32)&lbl_805DF9EC);
        *(s32 *)((s8 *)arg0 + 0x20) = 2;
        password_entry_dispatch_state = 4;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x3C) = *(s32 *)((s8 *)arg0 + 0x38);
    if (password_entry_keyboard_control != NULL) {
        if (update_keyboard__17TWindowSubComCardFPv(password_entry_keyboard_control) != 0) {
            if (TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + 0x20, 2) != 0 ||
                test_flag_4c__23TAdSinglePlyChrSelectGCFPv(controller_input_state + 0x160, 2) != 0) {
                free_menu_object(password_entry_keyboard_control);
                *(s32 *)((s8 *)arg0 + 0x38) = 0;
                if (*(u32 *)((s8 *)arg0 + 0x2C) != 0) {
                    set_active__22TAdEnterSerialAccessGCFPv(*(s32 *)((s8 *)arg0 + 0x2C));
                }
            } else if (forward_input__22TAdEnterSerialAccessGCFPv(arg0, 3, buf) == 0) {
                free_menu_object(password_entry_keyboard_control);
                play_sound_effect(0x53F06, 0, 0, 0);
            } else {
                *(s32 *)((s8 *)arg0 + 0x38) = 1;
                if (*(u32 *)((s8 *)arg0 + 0x2C) != 0) {
                    set_state_3__22TAdEnterSerialAccessGCFPv(*(s32 *)((s8 *)arg0 + 0x2C));
                }
            }
        } else {
            *(s32 *)((s8 *)arg0 + 0x38) = 0;
            if (*(u32 *)((s8 *)arg0 + 0x2C) != 0) {
                set_active__22TAdEnterSerialAccessGCFPv(*(s32 *)((s8 *)arg0 + 0x2C));
            }
        }
    }
    if (*(s32 *)((s8 *)arg0 + 0x3C) != (cur = *(s32 *)((s8 *)arg0 + 0x38))) {
        if (cur != 0) {
            if (*(u32 *)((s8 *)arg0 + 0x2C) != 0) {
                reset_input_state__22TAdEnterSerialAccessGCFPv(*(s32 *)((s8 *)arg0 + 0x2C));
                add_item_rect__12TLevelSelectFPvPv(*(s32 *)((s8 *)arg0 + 0x2C), (u8 *)&TAdEnterPPPPassGC__selection_positions.value + 0x18);
            }
        } else if (*(u32 *)((s8 *)arg0 + 0x2C) != 0) {
            reset_input_state__22TAdEnterSerialAccessGCFPv(*(s32 *)((s8 *)arg0 + 0x2C));
            add_item_rect__12TLevelSelectFPvPv(*(s32 *)((s8 *)arg0 + 0x2C), (u8 *)&TAdEnterPPPPassGC__selection_positions.value + 0x10);
        }
    }
    if (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x2C)) == 1 &&
        update_keyboard__17TWindowSubComCardFPv(password_entry_keyboard_control) != 0) {
        set_password__17TAdEnterPPPPassGCFi((s32)buf);
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        password_entry_dispatch_state = 4;
    }
    *(s32 *)((s8 *)arg0 + 0x40) = strlen(buf);
    free__11TOBoss4RockFUi(buf);
}

void open_keyboard_window__17TAdEnterPPPPassGCFPv(u8 *arg0) {
    u32 temp_r3;
    *(s32 *)((s8 *)arg0 + 0x30) = show_message_window__22TAdEnterSerialAccessGCFPvPv((void *) (arg0), (int) (3));
    *(s32 *)((s8 *)arg0 + 0x34) = create_default_callback__22TAdEnterSerialAccessGCFv((void *) (arg0));
    temp_r3 = *(u32 *)((s8 *)arg0 + 0x2C);
    if (temp_r3 != 0U) {
        reset_input_state__22TAdEnterSerialAccessGCFPv((int) (temp_r3));
        add_item_rect__12TLevelSelectFPvPv((int) (*(u32 *)((s8 *)arg0 + 0x2C)), (void *) ((u8 *)&TAdEnterPPPPassGC__selection_positions.value + 0x10));
        set_active__22TAdEnterSerialAccessGCFPv((int) (*(u32 *)((s8 *)arg0 + 0x2C)));
    }
    (*(s32 *)&password_entry_keyboard_control) = create_keyboard_control__22TAdEnterSerialAccessGCFii((void *) (arg0), (int) (3));
    password_entry_dispatch_state = 1;
}

void *ppp_password_buffer[8] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};

void run_task__17TAdEnterPPPPassGCFv(TAdEnterPPPPassGC_80339378 *self) {
    fn_8032B318(self, password_screen_status_line_position);
    self->state = password_entry_dispatch_state;
    static Pmf_80339378 tbl[5] = {
        (Pmf_80339378)&TAdEnterPPPPassGC::open_keyboard_window,
        (Pmf_80339378)&TAdEnterPPPPassGC::update_password_input,
        (Pmf_80339378)&TAdEnterPPPPassGC::request_transition,
        (Pmf_80339378)&TAdEnterPPPPassGC::forward_chg_game_mode,
        (Pmf_80339378)&TAdEnterPPPPassGC::close_windows_and_advance,
    };
    (self->*tbl[password_entry_dispatch_state])();
    if (self->state != password_entry_dispatch_state) {
        self->f24 = 0;
    }
}

void set_password__17TAdEnterPPPPassGCFi(s32 arg0) {
    if ((TLobby__sub_8014618C() != 0) && (is_state_active__6TLobbyFv() != 0)) {
        set_ppp_password__6TLobbyFi(arg0);
        return;
    }
    memset((void *) (ppp_password_buffer), (int) (0), (int) (0x20));
    strncpy((s32) ppp_password_buffer, arg0, 0x1F);
}

void *__dt__17TAdEnterPPPPassGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TAdEnterPPPPassGC;
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
T_8033954C *TAdEnterPPPPassGC__ct(T_8033954C *arg0) {
    s32 ok;
    TAdEnterBaseGC__ct(arg0);
    arg0->vt = __vt__17TAdEnterPPPPassGC;
    arg0->f0 = TAdEnterPPPPassGC__name;
    reset__14TAdEnterBaseGCFPvi(arg0, 3);
    password_entry_dispatch_state = 0;
    arg0->f40 = 0;
    if (TLobby__sub_80145A94() != 0) {
        init_account_entries__6TLobbyFv();
    } else {
        TKeyBoardControl__sub_8000F9CC(0x13);
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    ok = 0;
    if (TLobby__sub_8014618C() != 0) {
        if (is_state_active__6TLobbyFv() != 0) {
            if (*TLobby__sub_80146D14() != 0) {
                ok = 1;
            }
        } else {
            ok = 1;
        }
    } else if (TLobby__sub_80145DB4(1) != 0 && *TLobby__sub_80146D44() != 0) {
        ok = 1;
    }
    if (ok != 0) {
        ((int (*)(void))reset_mode_state__21TAdMultiChgGameModeGCFv)();
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    create_parts__14TAdEnterBaseGCFPv(arg0);
    return arg0;
}

}
