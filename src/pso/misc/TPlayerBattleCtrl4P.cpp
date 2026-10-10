#include "pso/misc/TPlayerBattleCtrl4P.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Ctl_80311FA0 {
    u8 pad0[0x244];
    s32 total;
    s32 f248;
    u8 pad24C[4];
    s64 start;
    s32 remain;
    s32 f25C;
};

struct VBase_18_26c590 { char pad[0x18]; };

struct VObj_18_26c590 : VBase_18_26c590 {
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
    virtual char *m10();
};

struct Cnt_8031224C { s32 n[2]; };

struct Strs_8031224C { u8 pad[0x18]; char *fmt; };

struct O_8031224C { u8 pad[0x20]; s32 w0; u8 pad2[0x240 - 0x24]; s32 timer; u8 pad3[0x274 - 0x244]; s32 team[4]; u8 pad4[0x294 - 0x284]; Strs_8031224C *strs; };

extern "C" {
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
void begin_ready_wait__19TPlayerBattleCtrl4PFv(u8 *arg0);
s64 OSGetTime(void);
void set_timer_window_time__11TWindowCtrlFi(s32);
M2C_UNK set_split_screen_battle_phase(void *, M2C_UNK);
s32 is_battle_decided__19TPlayerBattleCtrl4PFPv(void *);
void update_timed_events__19TPlayerBattleCtrl4PFPvi(void *, s32);
void update_player_alive_flags__19TPlayerBattleCtrl4PFPv(void *);
void calculate_split_screen_battle_rankings(void *);
void update_battle_time_and_rankings__19TPlayerBattleCtrl4PFv(Ctl_80311FA0 *o);
VObj_18_26c590 *get_player_by_client_id(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, void *, int);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
int sprintf(char *, const char *, ...);
char *strncpy(char *, const char *, u32);
extern Cnt_8031224C lbl_80475B68[];
extern char lbl_80542EB0[];
void show_team_matchup__19TPlayerBattleCtrl4PFv(O_8031224C *o);
void update__19TPlayerBattleCtrl4PFv(void *);
M2C_UNK __ct__15TDuelEffectCtrlFP7TObjectUc(void *, void *, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
void close_timer_window__11TWindowCtrlFv(void);
void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *, u16, s32);
VObj_18_26c590 *get_player_by_client_id(s32);
void set_type__10TObjPlayerFPvi(void *, s32);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
M2C_UNK update_all_players__19TPlayerBattleCtrl4PFv();
void begin_battle_results__19TPlayerBattleCtrl4PFv(void *arg0);
}

extern "C" {

void wait_for_team_matchup__19TPlayerBattleCtrl4PFv(void *arg0);
void update_ready_wait__19TPlayerBattleCtrl4PFv(void *arg0);
void wait_for_start_countdown__19TPlayerBattleCtrl4PFv(void *arg0);
void close_intro_and_start_battle__19TPlayerBattleCtrl4PFv(void *arg0);
void start_battle__19TPlayerBattleCtrl4PFv(void* p);
void wait_after_battle_end__19TPlayerBattleCtrl4PFv(void *arg0);
void wait_before_recording_results__19TPlayerBattleCtrl4PFv(void *arg0);
void wait_for_intro_text__19TPlayerBattleCtrl4PFv(void *arg0);
M2C_UNK __ct__15TDuelEffectCtrlFP7TObjectUc(void *, void *, M2C_UNK);
u8 get_rule_field_a__6TLobbyFPv(M2C_UNK *);
M2C_UNK set_split_screen_battle_phase(void *, M2C_UNK);
int start_duel__19TPlayerBattleCtrl4PFPv(void*);
M2C_UNK TWindow__close(void *);
void *__nw__7TObjectFUl(M2C_UNK);
s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void *);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
M2C_UNK update_all_players__19TPlayerBattleCtrl4PFv();

}
void TPlayerBattleCtrl4P::wait_before_recording_results() {
    s32 temp_r0;

    update_all_players__19TPlayerBattleCtrl4PFv();
    temp_r0 = frame_timer - 1;
    frame_timer = temp_r0;
    if (temp_r0 <= 0) {
        ready_timer = 0x1E;
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void *)this)), (void*)(8));
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::wait_after_battle_end() {
    s32 temp_r0;

    update_all_players__19TPlayerBattleCtrl4PFv();
    temp_r0 = frame_timer - 1;
    frame_timer = temp_r0;
    if (temp_r0 <= 0) {
        frame_timer = 0x5A;
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void *)this)), (void*)(2));
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::begin_battle_results() {
    s32 i;
    VObj_18_26c590 *p;
    update__19TPlayerBattleCtrl4PFv(((void *)this));
    {
        void *temp = __nw__7TObjectFUl(0x28);
        if (temp != 0) {
            __ct__15TDuelEffectCtrlFP7TObjectUc(temp, ((void *)this), 1);
        }
    }
    frame_timer = 0x1E;
    close_timer_window__11TWindowCtrlFv();
    for (i = 0; i < 4; i++) {
        remove_player__19TPlayerBattleCtrl4PFPvUsi(((void *)this), i, 1);
    }
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0) {
            set_type__10TObjPlayerFPvi((u8 *)p + 0x644, 0xE10);
        }
    }
    ((M2C_UNK (*)(void *))update_all_players__19TPlayerBattleCtrl4PFv)(((void *)this));
    set_score__19TPlayerBattleCtrl4PFPvi(((void *)this), (void *)1);
}
extern "C" {

}
void TPlayerBattleCtrl4P::update_battle_time_and_rankings() {
    s32 secs;
    s32 r;
    secs = (OSGetTime() - battle_start_ticks) / (*(u32 *)0x800000F8 / 4);
    r = battle_duration - secs;
    remaining_seconds = r > 0 ? r : 0;
    set_timer_window_time__11TWindowCtrlFi(remaining_seconds);
    if (remaining_seconds == 0) {
        set_split_screen_battle_phase(((Ctl_80311FA0 *)this), 3);
        return;
    }
    if (is_battle_decided__19TPlayerBattleCtrl4PFPv(((Ctl_80311FA0 *)this)) != 0) {
        if (--result_confirm_timer <= 0) {
            set_split_screen_battle_phase(((Ctl_80311FA0 *)this), 3);
        }
    } else {
        result_confirm_timer = 300;
    }
    update_timed_events__19TPlayerBattleCtrl4PFPvi(((Ctl_80311FA0 *)this), secs);
    if (--player_refresh_timer <= 0) {
        update_player_alive_flags__19TPlayerBattleCtrl4PFPv(((Ctl_80311FA0 *)this));
        player_refresh_timer = 0x5A;
    }
    calculate_split_screen_battle_rankings(((Ctl_80311FA0 *)this));
}
extern "C" {

}
void TPlayerBattleCtrl4P::start_battle() { start_duel__19TPlayerBattleCtrl4PFPv(((void*)this)); set_score__19TPlayerBattleCtrl4PFPvi((void*)((void*)(((void*)this))), (void*)((void*)((void*)1))); }
extern "C" {

}
void TPlayerBattleCtrl4P::close_intro_and_start_battle() {
    void *temp_r3 = M2C_FIELD(((void *)this), void **, 0x20);
    if ((u32) temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(((void *)this), u32 *, 0x20) = 0U;
    }
    set_split_screen_battle_phase(((void *)this), 2);
}
extern "C" {

}
void TPlayerBattleCtrl4P::wait_for_start_countdown() {
    s32 temp_r0;

    temp_r0 = frame_timer - 1;
    frame_timer = temp_r0;
    if (temp_r0 <= 0) {
        set_score__19TPlayerBattleCtrl4PFPvi((void*)((void*)(((void *)this))), (void*)((void*)(8)));
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::update_ready_wait() {
    ready_timer = (s32) (ready_timer - 1);
    if ((check_all_players_flag__19TPlayerBattleCtrl4PFv(((void *)this)) != 0) || ((s32) ready_timer >= 0)) {
        if (M2C_FIELD(((void *)this), void **, 0x20) != (void *) 0) {
        TWindow__close(M2C_FIELD(((void *)this), void **, 0x20));
        M2C_FIELD(((void *)this), u32 *, 0x20) = 0U;
        {
            void *temp = __nw__7TObjectFUl(0x28);
            if (temp != 0) {
                __ct__15TDuelEffectCtrlFP7TObjectUc(temp, ((void *)this), 0);
            }
        }
        frame_timer = 0x96;
        set_score__19TPlayerBattleCtrl4PFPvi((void*)((void*)(((void *)this))), (void*)((void*)(7)));
        }
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::begin_ready_wait() {
    ready_timer = 0x384;
    set_score__19TPlayerBattleCtrl4PFPvi((void*)(((u8 *)this)), (void*)(6));
}
extern "C" {

}
void TPlayerBattleCtrl4P::wait_for_team_matchup() {
    s32 temp_r0;

    temp_r0 = frame_timer - 1;
    frame_timer = temp_r0;
    if (temp_r0 <= 0) {
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void *)this)), (void*)(5));
    }
}
extern "C" {

extern M2C_UNK lobby_rule_settings[];

}
void TPlayerBattleCtrl4P::show_team_matchup() {
    Cnt_8031224C cnt = lbl_80475B68[0];
    char names[4][16];
    s32 i;
    s32 team;
    VObj_18_26c590 *p;
    for (i = 0; i < 4; i++) {
        names[i][0] = 0;
    }
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != NULL) {
            team = ((O_8031224C *)this)->team[i] != 1 ? 1 : 0;
            if (cnt.n[team] < 2) {
                strncpy(names[team * 2 + cnt.n[team]], p->m10(), 16);
                cnt.n[team]++;
            }
        }
    }
    sprintf(lbl_80542EB0, ((O_8031224C *)this)->strs->fmt, names[0], names[1], names[2], names[3]);
    send_and_handle__6TLobbyFPvii(((O_8031224C *)this)->w0, lbl_80542EB0, 0x80);
    ((O_8031224C *)this)->timer = 0xF0;
    set_score__19TPlayerBattleCtrl4PFPvi(((O_8031224C *)this), (void *)4);
}
extern "C" {

}
void TPlayerBattleCtrl4P::wait_for_intro_text() {
    s32 temp_r0;

    temp_r0 = frame_timer - 1;
    frame_timer = temp_r0;
    if (temp_r0 <= 0) {
        if (get_rule_field_a__6TLobbyFPv(lobby_rule_settings) == 1) {
            set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void *)this)), (void*)(3));
            return;
        }
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void *)this)), (void*)(5));
    }
}
extern "C" {

}
