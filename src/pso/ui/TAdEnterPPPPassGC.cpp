#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80339480_lbl_804EF500 {
    M2C_UNK value;
    u8 remaining[0x94];
};

struct RecoveredGlobal_803392F4_lbl_80477C20 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

typedef s32 M2C_UNK;
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
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
extern const f32 lbl_805DF9E8;
void close_windows_and_advance__17TAdEnterPPPPassGCFPv(u8 *arg0);
s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_8014618C(void);
void set_ppp_password__6TLobbyFi(s32);
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
void fn_8032B318(void *, void *);
extern u8 lbl_804ED9F0[];
void set_password__17TAdEnterPPPPassGCFi(s32 arg0);
s32 reset_input_state__22TAdEnterSerialAccessGCFPv(int);
s32 add_item_rect__12TLevelSelectFPvPv(int, void *);
s32 set_active__22TAdEnterSerialAccessGCFPv(int);
s32 create_keyboard_control__22TAdEnterSerialAccessGCFii(void *, int);
s32 create_default_callback__22TAdEnterSerialAccessGCFv(void *);
s32 show_message_window__22TAdEnterSerialAccessGCFPvPv(void *, int);
extern RecoveredGlobal_803392F4_lbl_80477C20 lbl_80477C20;
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
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
extern M2C_UNK __vt__17TAdEnterPPPPassGC[];
extern s32 lbl_805D4268;
extern s32 lbl_805D6CA4;
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
extern RecoveredGlobal_803392F4_lbl_80477C20 lbl_80477C20;
extern u8 lbl_8050E208[];
extern u8 lbl_8050E3B8[];
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
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
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3 != NULL) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u8 **, 0x30) = NULL;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
    if (temp_r3_2 != NULL) {
        TWindow__close(temp_r3_2);
        M2C_FIELD(arg0, u8 **, 0x34) = NULL;
    }
    if ((void *) lbl_805D6CA0 != NULL) {
        queue_destruction__7TObjectFv(lbl_805D6CA0);
        lbl_805D6CA0 = NULL;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24) + 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r4;
    if ((f32) temp_r4 > lbl_805DF9E8) {
        lbl_805D6CA4 = M2C_FIELD(arg0, s32 *, 0x20);
    }
}

int forward_chg_game_mode__17TAdEnterPPPPassGCFPv(void* p) { return reset_mode_state__21TAdMultiChgGameModeGCFv(p); }
int request_transition__17TAdEnterPPPPassGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

extern M2C_UNK __vt__17TAdEnterPPPPassGC[];

typedef char RecoveredGlobal_80339480_lbl_804EF500_size[sizeof(RecoveredGlobal_80339480_lbl_804EF500) == 0x98 ? 1 : -1];

typedef char RecoveredGlobal_803392F4_lbl_80477C20_size[sizeof(RecoveredGlobal_803392F4_lbl_80477C20) == 0x20 ? 1 : -1];

void update_password_input__17TAdEnterPPPPassGCFPv(u8 *arg0) {
    char *buf;
    s32 cur;
    buf = realloc_buffer__17TWindowSubComCardFPv(lbl_805D6CA0);
    if ((M2C_FIELD(arg0, s32 *, 0x40) == 0 && TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0) ||
        (M2C_FIELD(arg0, s32 *, 0x40) == 0 && test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0)) {
        free__11TOBoss4RockFUi(buf);
        set_password__17TAdEnterPPPPassGCFi((s32)&lbl_805DF9EC);
        M2C_FIELD(arg0, s32 *, 0x20) = 2;
        lbl_805D6CA4 = 4;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = M2C_FIELD(arg0, s32 *, 0x38);
    if (lbl_805D6CA0 != NULL) {
        if (update_keyboard__17TWindowSubComCardFPv(lbl_805D6CA0) != 0) {
            if (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0 ||
                test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0) {
                free_menu_object(lbl_805D6CA0);
                M2C_FIELD(arg0, s32 *, 0x38) = 0;
                if (M2C_FIELD(arg0, u32 *, 0x2C) != 0) {
                    set_active__22TAdEnterSerialAccessGCFPv(M2C_FIELD(arg0, s32 *, 0x2C));
                }
            } else if (forward_input__22TAdEnterSerialAccessGCFPv(arg0, 3, buf) == 0) {
                free_menu_object(lbl_805D6CA0);
                play_sound_effect(0x53F06, 0, 0, 0);
            } else {
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
                if (M2C_FIELD(arg0, u32 *, 0x2C) != 0) {
                    set_state_3__22TAdEnterSerialAccessGCFPv(M2C_FIELD(arg0, s32 *, 0x2C));
                }
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
            if (M2C_FIELD(arg0, u32 *, 0x2C) != 0) {
                set_active__22TAdEnterSerialAccessGCFPv(M2C_FIELD(arg0, s32 *, 0x2C));
            }
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) != (cur = M2C_FIELD(arg0, s32 *, 0x38))) {
        if (cur != 0) {
            if (M2C_FIELD(arg0, u32 *, 0x2C) != 0) {
                reset_input_state__22TAdEnterSerialAccessGCFPv(M2C_FIELD(arg0, s32 *, 0x2C));
                add_item_rect__12TLevelSelectFPvPv(M2C_FIELD(arg0, s32 *, 0x2C), (u8 *)&lbl_80477C20.value + 0x18);
            }
        } else if (M2C_FIELD(arg0, u32 *, 0x2C) != 0) {
            reset_input_state__22TAdEnterSerialAccessGCFPv(M2C_FIELD(arg0, s32 *, 0x2C));
            add_item_rect__12TLevelSelectFPvPv(M2C_FIELD(arg0, s32 *, 0x2C), (u8 *)&lbl_80477C20.value + 0x10);
        }
    }
    if (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x2C)) == 1 &&
        update_keyboard__17TWindowSubComCardFPv(lbl_805D6CA0) != 0) {
        set_password__17TAdEnterPPPPassGCFi((s32)buf);
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        lbl_805D6CA4 = 4;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = strlen(buf);
    free__11TOBoss4RockFUi(buf);
}

void open_keyboard_window__17TAdEnterPPPPassGCFPv(u8 *arg0) {
    u32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = show_message_window__22TAdEnterSerialAccessGCFPvPv((void *) (arg0), (int) (3));
    M2C_FIELD(arg0, s32 *, 0x34) = create_default_callback__22TAdEnterSerialAccessGCFv((void *) (arg0));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x2C);
    if (temp_r3 != 0U) {
        reset_input_state__22TAdEnterSerialAccessGCFPv((int) (temp_r3));
        add_item_rect__12TLevelSelectFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)), (void *) ((u8 *)&lbl_80477C20.value + 0x10));
        set_active__22TAdEnterSerialAccessGCFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
    }
    (*(s32 *)&lbl_805D6CA0) = create_keyboard_control__22TAdEnterSerialAccessGCFii((void *) (arg0), (int) (3));
    lbl_805D6CA4 = 1;
}

void *ppp_password_buffer[8] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};

void run_task__17TAdEnterPPPPassGCFv(TAdEnterPPPPassGC_80339378 *self) {
    fn_8032B318(self, lbl_804ED9F0);
    self->state = lbl_805D6CA4;
    static Pmf_80339378 tbl[5] = {
        (Pmf_80339378)&TAdEnterPPPPassGC::open_keyboard_window,
        (Pmf_80339378)&TAdEnterPPPPassGC::update_password_input,
        (Pmf_80339378)&TAdEnterPPPPassGC::request_transition,
        (Pmf_80339378)&TAdEnterPPPPassGC::forward_chg_game_mode,
        (Pmf_80339378)&TAdEnterPPPPassGC::close_windows_and_advance,
    };
    (self->*tbl[lbl_805D6CA4])();
    if (self->state != lbl_805D6CA4) {
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdEnterPPPPassGC;
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
    arg0->f0 = lbl_805D4268;
    reset__14TAdEnterBaseGCFPvi(arg0, 3);
    lbl_805D6CA4 = 0;
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
