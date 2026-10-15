#include "pso/misc/TPlayerBattleCtrl4P.h"

#include "types.h"

typedef void (TPlayerBattleCtrl4P::*BattleAction)();

struct BattleIntroWindowState {
    u8 pad[0x20];
    void *intro_window;
};

struct BattleIntroWindowSize { f32 x, y; };

extern "C" {
void *get_window_layout_position(s32);
void *set_window_mode_4__6TLobbyFPvll(void *, void *, s32);
void set_score__19TPlayerBattleCtrl4PFl(void *, int);
extern const BattleIntroWindowSize lbl_80475B60;
s32 lbl_805D6AB0;
void open_intro_window__19TPlayerBattleCtrl4PFv(BattleIntroWindowState *self);
}

extern "C" {

void initialize_battle__19TPlayerBattleCtrl4PFv(void* p);
void show_intro_text__19TPlayerBattleCtrl4PFv(void *arg0);
int set_split_screen_battle_phase(void*, void*);
int init_battle__19TPlayerBattleCtrl4PFPv(void*);
void send_and_handle__6TLobbyFii(void *, void *, int);
void set_score__19TPlayerBattleCtrl4PFl(void *, int);
void *destroy__19TPlayerBattleCtrl4PFs(void *arg0, s16 arg1);
s32 close_player_windows__19TPlayerBattleCtrl4PFv(void *);
s32 TWindow__close(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
void run_task__19TPlayerBattleCtrl4PFv(TPlayerBattleCtrl4P *self);
extern s32 TPlayerBattleCtrl4P__instance;
extern u8 lbl_80475930[];
extern u8 lbl_8047595C[];
extern u8 lbl_80475964[];
extern u8 lbl_8047596C[];
extern u8 lbl_80475978[];
extern u8 lbl_804759E0[];
extern u8 lbl_80475A34[];
extern u8 lbl_80475A70[];
extern u8 lbl_80475A98[];
extern u8 lbl_80475AA0[];
extern u8 lbl_80475B18[];
extern u8 lbl_805DF228[];
extern u8 lbl_805DF22C[];
extern u8 lbl_805DF230[];
extern u8 lbl_805DF234[];
extern u8 lbl_805DF238[];
extern u8 lbl_805DF23C[];
void render__7TObjectFv();
void render_shadows__7TObjectFv();
void update_intro_phase__19TPlayerBattleCtrl4PFv(TPlayerBattleCtrl4P *self);
void update_battle_phase__19TPlayerBattleCtrl4PFv(TPlayerBattleCtrl4P *self);
void update_results_phase__19TPlayerBattleCtrl4PFv(TPlayerBattleCtrl4P *self);
void update_return_phase__19TPlayerBattleCtrl4PFv(TPlayerBattleCtrl4P *self);
void update_reload_phase__19TPlayerBattleCtrl4PFv(TPlayerBattleCtrl4P *self);
void wait_for_intro_text__19TPlayerBattleCtrl4PFv();
void show_team_matchup__19TPlayerBattleCtrl4PFv();
void wait_for_team_matchup__19TPlayerBattleCtrl4PFv();
void begin_ready_wait__19TPlayerBattleCtrl4PFv();
void update_ready_wait__19TPlayerBattleCtrl4PFv();
void wait_for_start_countdown__19TPlayerBattleCtrl4PFv();
void close_intro_and_start_battle__19TPlayerBattleCtrl4PFv();
void start_battle__19TPlayerBattleCtrl4PFv();
void update_battle_time_and_rankings__19TPlayerBattleCtrl4PFv();
void begin_battle_results__19TPlayerBattleCtrl4PFv();
void wait_after_battle_end__19TPlayerBattleCtrl4PFv();
void wait_before_recording_results__19TPlayerBattleCtrl4PFv();
void open_result_windows__19TPlayerBattleCtrl4PFv();
void wait_for_result_window_close__19TPlayerBattleCtrl4PFv();
void update_rematch_menu__19TPlayerBattleCtrl4PFv();
void close_rematch_menu__19TPlayerBattleCtrl4PFv();
void wait_for_rematch_menu_button__19TPlayerBattleCtrl4PFv();
void record_battle_results_after_delay__19TPlayerBattleCtrl4PFv();
void close_battle_results__19TPlayerBattleCtrl4PFv();
void return_to_hunters_guild__19TPlayerBattleCtrl4PFv();
void sub_80311804__19TPlayerBattleCtrl4PFv();
void sub_80311800__19TPlayerBattleCtrl4PFv();
void begin_battle_reload__19TPlayerBattleCtrl4PFv();
void begin_battle_reload_fade__19TPlayerBattleCtrl4PFv();
void finish_battle_reload__19TPlayerBattleCtrl4PFv();
void sub_80311890__19TPlayerBattleCtrl4PFv();

void *TPlayerBattleCtrl4P__message_table_language0[7] = {
    (void *)&lbl_80475930, (void *)&lbl_8047595C, (void *)&lbl_80475964, (void *)&lbl_8047596C,
    (void *)&lbl_80475978, (void *)&lbl_804759E0, (void *)&lbl_80475A34,
};
void *lbl_804E7D4C[7] = {
    (void *)&lbl_80475A70, (void *)&lbl_805DF228, (void *)&lbl_805DF22C, (void *)&lbl_80475A98,
    (void *)&lbl_80475AA0, (void *)&lbl_80475AA0, (void *)&lbl_80475B18,
};

}
void TPlayerBattleCtrl4P::show_intro_text() {
    if (*(void **)((s8 *)((void *)this) + 0x20) != NULL) {
        send_and_handle__6TLobbyFii(*(void **)((s8 *)((void *)this) + 0x20), (void *)((char *)((void *)this) + 56), 128);
    }
    *(u32 *)((s8 *)((void *)this) + 0x240) = 240;
    set_score__19TPlayerBattleCtrl4PFl(((void *)this), 2);
}
extern "C" {

}
void TPlayerBattleCtrl4P::open_intro_window() {
    if (((BattleIntroWindowState *)this)->intro_window == NULL) {
        BattleIntroWindowSize size = lbl_80475B60;
        ((BattleIntroWindowState *)this)->intro_window = set_window_mode_4__6TLobbyFPvll(
            get_window_layout_position(0x52), &size, 1);
    }
    lbl_805D6AB0 = 0;
    set_score__19TPlayerBattleCtrl4PFl((void *)(((BattleIntroWindowState *)this)), (int)(1));
}
extern "C" {

#pragma defer_codegen on

}
void TPlayerBattleCtrl4P::run_task() {
    static BattleAction tbl[6] = { &TPlayerBattleCtrl4P::initialize_battle, &TPlayerBattleCtrl4P::update_intro_phase, &TPlayerBattleCtrl4P::update_battle_phase, &TPlayerBattleCtrl4P::update_results_phase, &TPlayerBattleCtrl4P::update_return_phase, &TPlayerBattleCtrl4P::update_reload_phase };
    (this->*tbl[phase])();
}
extern "C" {

}
void TPlayerBattleCtrl4P::initialize_battle() { init_battle__19TPlayerBattleCtrl4PFPv(((void*)this)); set_split_screen_battle_phase(((void*)this), (void*)1); }
extern "C" {

}
void TPlayerBattleCtrl4P::update_intro_phase() {
    static BattleAction tbl[9] = { &TPlayerBattleCtrl4P::open_intro_window, &TPlayerBattleCtrl4P::show_intro_text, &TPlayerBattleCtrl4P::wait_for_intro_text, &TPlayerBattleCtrl4P::show_team_matchup, &TPlayerBattleCtrl4P::wait_for_team_matchup, &TPlayerBattleCtrl4P::begin_ready_wait, &TPlayerBattleCtrl4P::update_ready_wait, &TPlayerBattleCtrl4P::wait_for_start_countdown, &TPlayerBattleCtrl4P::close_intro_and_start_battle };
    (this->*tbl[phase_state])();
}
extern "C" {

}
void TPlayerBattleCtrl4P::update_battle_phase() {
    static BattleAction tbl[2] = { &TPlayerBattleCtrl4P::start_battle, &TPlayerBattleCtrl4P::update_battle_time_and_rankings };
    (this->*tbl[phase_state])();
}
extern "C" {

}
void TPlayerBattleCtrl4P::update_results_phase() {
    static BattleAction tbl[10] = { &TPlayerBattleCtrl4P::begin_battle_results, &TPlayerBattleCtrl4P::wait_after_battle_end, &TPlayerBattleCtrl4P::wait_before_recording_results, &TPlayerBattleCtrl4P::open_result_windows, &TPlayerBattleCtrl4P::wait_for_result_window_close, &TPlayerBattleCtrl4P::update_rematch_menu, &TPlayerBattleCtrl4P::close_rematch_menu, &TPlayerBattleCtrl4P::wait_for_rematch_menu_button, &TPlayerBattleCtrl4P::record_battle_results_after_delay, &TPlayerBattleCtrl4P::close_battle_results };
    (this->*tbl[phase_state])();
}
extern "C" {

}
void TPlayerBattleCtrl4P::update_return_phase() {
    static BattleAction tbl[3] = { &TPlayerBattleCtrl4P::return_to_hunters_guild, &TPlayerBattleCtrl4P::sub_80311804, &TPlayerBattleCtrl4P::sub_80311800 };
    (this->*tbl[phase_state])();
}
extern "C" {

}
void TPlayerBattleCtrl4P::update_reload_phase() {
    static BattleAction tbl[4] = { &TPlayerBattleCtrl4P::begin_battle_reload, &TPlayerBattleCtrl4P::begin_battle_reload_fade, &TPlayerBattleCtrl4P::finish_battle_reload, &TPlayerBattleCtrl4P::sub_80311890 };
    (this->*tbl[phase_state])();
}
extern "C" {

#pragma defer_codegen off

void *TPlayerBattleCtrl4P_player_name_formats[4] = {
    (void *)&lbl_805DF230, (void *)&lbl_805DF234, (void *)&lbl_805DF238, (void *)&lbl_805DF23C,
};
void *__vt__19TPlayerBattleCtrl4P[6] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__19TPlayerBattleCtrl4PFs, (void *)&run_task__19TPlayerBattleCtrl4PFv,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};
#define __vt__19TPlayerBattleCtrl4P ((s32 *)__vt__19TPlayerBattleCtrl4P)
}
TPlayerBattleCtrl4P* TPlayerBattleCtrl4P::destroy(s16 should_free) {
    if (((void *)this) != NULL) {
        *(s32 **)((s8 *)((void *)this) + 0x18) = __vt__19TPlayerBattleCtrl4P;
        if ((u32) *(u32 *)((s8 *)((void *)this) + 0x20) != 0U) {
            TWindow__close(*(void **)((s8 *)((void *)this) + 0x20));
            *(u32 *)((s8 *)((void *)this) + 0x20) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)((void *)this) + 0x24) != 0U) {
            TWindow__close(*(void **)((s8 *)((void *)this) + 0x24));
            *(u32 *)((s8 *)((void *)this) + 0x24) = 0U;
        }
        close_player_windows__19TPlayerBattleCtrl4PFv(((void *)this));
        TPlayerBattleCtrl4P__instance = 0;
        __dt__7TObjectFv(((void *)this), 0);
        if (should_free > 0) {
            __dl__7TObjectFPv(((void *)this));
        }
    }
    return this;
}
extern "C" {

s32 get_player_by_client_id(s32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 export_character_data__10TObjPlayerFPvPv(s32, s32);
s32 clear_split_screen_battle_window_slots(void *);
extern s32 TPlayerBattleCtrl4P__name;
extern s32 current_language;

}
TPlayerBattleCtrl4P* TPlayerBattleCtrl4P::construct(TObject* parent) {
    s32 i;
    void **p;

    __ct__7TObjectFP7TObject(((void *)this), parent);
    *(void **)((s8 *)((void *)this) + 0x18) = __vt__19TPlayerBattleCtrl4P;
    *(s32 *)((s8 *)((void *)this) + 0) = TPlayerBattleCtrl4P__name;
    set_split_screen_battle_phase(((void *)this), 0);
    *(s32 *)((s8 *)((void *)this) + 0x20) = 0;
    *(s32 *)((s8 *)((void *)this) + 0x24) = 0;
    clear_split_screen_battle_window_slots(((void *)this));
    p = lbl_804E7D4C;
    if (current_language == 0) {
        p = TPlayerBattleCtrl4P__message_table_language0;
    }
    *(void ***)((s8 *)((void *)this) + 0x294) = p;
    for (i = 0; i < 4; i++) {
        s32 pl = get_player_by_client_id(i);
        if (pl != 0) {
            export_character_data__10TObjPlayerFPvPv(pl, get_char_index__23TAdSinglePlyChrSelectGCFUi(i));
        }
    }
    TPlayerBattleCtrl4P__instance = (s32)((void *)this);
    *(s32 *)((s8 *)((void *)this) + 0x1C) = 0;
    return this;
}
extern "C" {

}
