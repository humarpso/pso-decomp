#include "pso/misc/TPlayerBattleCtrl4P.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80311A64_TPlayerBattleCtrl4P__data_80542E90 {
    u16 value;
    u8 remaining[0x1E];
};

struct Ids_80311C2C { s32 a; s32 b; s32 c; s32 d; };

struct O_80311C2C { u8 pad[0x20]; void *w0; void *w1; u8 pad2[0x294 - 0x28]; Ids_80311C2C *ids; };

struct Ctl_803119BC { u8 pad[0x20]; void *w20; void *w24; };

extern "C" {
u32 get_player_by_client_id(s32);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK TWindow__close(void *);
M2C_UNK send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *, int, int);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
void close_rematch_menu__19TPlayerBattleCtrl4PFv(u8 *arg0);
u32 get_player_by_client_id(s32);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK release_attached_resource__10TObjPlayerFPv(int);
int close_player_windows__19TPlayerBattleCtrl4PFPv(void*);
M2C_UNK create_result_windows__19TPlayerBattleCtrl4PFPv(void *);
M2C_UNK remove_player__19TPlayerBattleCtrl4PFPvUsi(void *, int, int);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
void open_result_windows__19TPlayerBattleCtrl4PFv(s32 arg0);
M2C_UNK notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void *, void *, int);
M2C_UNK reset_score_counters__19TPlayerBattleCtrl4PFPv(void *);
M2C_UNK record_split_screen_battle_results(void *);
s32 set_state__19TPlayerBattleCtrl4PFPv(void *, int);
M2C_UNK calculate_split_screen_battle_rankings(void *);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
M2C_UNK update_all_players__19TPlayerBattleCtrl4PFv();
extern M2C_UNK lbl_80475BC4[];
extern M2C_UNK lbl_80475BCC[];
extern RecoveredGlobal_80311A64_TPlayerBattleCtrl4P__data_80542E90 split_screen_battle_rankings;
extern s32 local_client_id;
void record_battle_results_after_delay__19TPlayerBattleCtrl4PFv(u8 *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(void *);
s32 has_player_active_menu__11TWindowCtrlFi(s32);
s32 get_selected_menu_value(void *);
M2C_UNK align_menu_entry_positions(void *);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(void *);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(void *, s32, int, int);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
M2C_UNK send_and_handle__6TLobbyFPvii(void *, s32, int);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, int);
void *get_window_layout_position(int);
M2C_UNK set_split_screen_battle_phase(void *, int);
M2C_UNK shuffle_order__19TPlayerBattleCtrl4PFPv(void *);
extern u8 lbl_80475B70[];
extern s32 local_client_id;
void update_rematch_menu__19TPlayerBattleCtrl4PFv(O_80311C2C *o);
void init_fadeout_state__6TLobbyFi(void (*)());
void TLobby__sub_801036CC();
void clear_buffer__12TQuestThreadFPv(void *);
void TLobby__sub_8020BC50();
void stop_audio_streams__6TLobbyFv();
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
void init__19TPlayerBattleCtrl4PFv();
extern void *quest_mission_manager;
extern s32 TPlayerBattleCtrl4P__init_flag;
void begin_battle_reload_fade__19TPlayerBattleCtrl4PFv(void *arg0);
void obj_clear_flag30_20000(u32);
u32 get_player_by_client_id(s32);
M2C_UNK TWindow__close(void *);
void close_timer_window__11TWindowCtrlFv();
int close_player_windows__19TPlayerBattleCtrl4PFPv(void*);
M2C_UNK remove_player__19TPlayerBattleCtrl4PFPvUsi(void *, int, int);
void close_battle_results__19TPlayerBattleCtrl4PFv(Ctl_803119BC *arg0);
}

extern "C" {

void wait_for_result_window_close__19TPlayerBattleCtrl4PFv(void* p);
void wait_for_rematch_menu_button__19TPlayerBattleCtrl4PFv(s32 arg0);
void return_to_hunters_guild__19TPlayerBattleCtrl4PFv(void *arg0);
void sub_80311804__19TPlayerBattleCtrl4PFv(void);
void sub_80311800__19TPlayerBattleCtrl4PFv(void);
void begin_battle_reload__19TPlayerBattleCtrl4PFv(void *arg0);
void finish_battle_reload__19TPlayerBattleCtrl4PFv(s32 arg0);
void sub_80311890__19TPlayerBattleCtrl4PFv(void);
void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void);
int TKeyBoardControl__sub_8000F950(void);
u32 get_player_by_client_id(s32);
int close_windows_on_button__19TPlayerBattleCtrl4PFPv(void*);
M2C_UNK reset_players__19TPlayerBattleCtrl4PFPv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
s32 check_flag_100__10TObjPlayerFPv();
int clear_counter__6TLobbyFv(void);
void *init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
void queue_destruction__7TObjectFv(void *);
int reset_settings_to_default__6TLobbyFPv(void*);
M2C_UNK set_fade_params__6TLobbyFi(M2C_UNK *);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
int update_players__19TPlayerBattleCtrl4PFv(void*);

}
void TPlayerBattleCtrl4P::sub_80311800() {  }
extern "C" {
}
void TPlayerBattleCtrl4P::sub_80311804() {  }
extern "C" {

    extern unsigned char lobby_rule_settings[];
    extern int evt2_random_enemies_mode;
void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); reset_settings_to_default__6TLobbyFPv(lobby_rule_settings); }

extern void *tl_00;

}
void TPlayerBattleCtrl4P::return_to_hunters_guild() {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, (M2C_UNK *)reset_random_enemies_mode__19TPlayerBattleCtrl4PFv);
    }
    queue_destruction__7TObjectFv(((void *)this));
}
extern "C" {

}
void TPlayerBattleCtrl4P::sub_80311890() {  }
extern "C" {

extern M2C_UNK reset_ctrl_to_default__19TPlayerBattleCtrl4PFv[];
extern s32 TPlayerBattleCtrl4P__init_flag;

}
void TPlayerBattleCtrl4P::finish_battle_reload() {
    if ((s32) TPlayerBattleCtrl4P__init_flag != 0) {
        reset_players__19TPlayerBattleCtrl4PFPv();
        set_fade_params__6TLobbyFi(reset_ctrl_to_default__19TPlayerBattleCtrl4PFv);
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(((s32)this)), (void*)(3));
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::begin_battle_reload_fade() {
    if (--*(s32 *)((u8 *)((void *)this) + 0x240) <= 0) {
        TLobby__sub_8020BC50();
        TLobby__sub_801036CC();
        if (quest_mission_manager != NULL) {
            clear_buffer__12TQuestThreadFPv(quest_mission_manager);
        }
        stop_audio_streams__6TLobbyFv();
        TPlayerBattleCtrl4P__init_flag = 0;
        init_fadeout_state__6TLobbyFi(init__19TPlayerBattleCtrl4PFv);
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void *)this)), (void*)((void *)2));
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::begin_battle_reload() {
    s32 var_r31;
    u32 ret;

    var_r31 = 0;
    do {
        ret = get_player_by_client_id(var_r31);
        if (ret != 0U) {
            play_effect_default__10TObjPlayerFii(ret, -1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    frame_timer = 0xF;
    set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void *)this)), (void*)(1));
}
extern "C" {

extern s8 controller_input_state[];
extern s32 local_client_id;

typedef char RecoveredGlobal_80311A64_TPlayerBattleCtrl4P__data_80542E90_size[sizeof(RecoveredGlobal_80311A64_TPlayerBattleCtrl4P__data_80542E90) == 0x20 ? 1 : -1];

}
void TPlayerBattleCtrl4P::close_battle_results() {
    s32 i;
    u32 p;
    if (intro_window != NULL) {
        TWindow__close(intro_window);
        intro_window = NULL;
    }
    if (menu_window != NULL) {
        TWindow__close(menu_window);
        menu_window = NULL;
    }
    close_player_windows__19TPlayerBattleCtrl4PFPv((void*)(((Ctl_803119BC *)this)));
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0) {
            obj_clear_flag30_20000(p);
        }
    }
    close_timer_window__11TWindowCtrlFv();
    for (i = 0; i < 4; i++) {
        ((s32 (*)(void *, u16, int))remove_player__19TPlayerBattleCtrl4PFPvUsi)(((Ctl_803119BC *)this), i, 1);
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::record_battle_results_after_delay() {
    s32 temp_r4;
    update_all_players__19TPlayerBattleCtrl4PFv();
    temp_r4 = ready_timer;
    ready_timer = (s32) (temp_r4 - 1);
    if ((set_state__19TPlayerBattleCtrl4PFPv((void *) (((u8 *)this)), (int) (temp_r4)) != 0) || ((s32) ready_timer <= 0)) {
        reset_score_counters__19TPlayerBattleCtrl4PFPv((void *) (((u8 *)this)));
        calculate_split_screen_battle_rankings((void *) (((u8 *)this)));
        record_split_screen_battle_results((void *) (((u8 *)this)));
        if ((s32) split_screen_battle_rankings.value == (s32) local_client_id) {
            notify_lobby__19TPlayerBattleCtrl4PFPvPvPv((void *) (((u8 *)this)), (void *) (lbl_80475BC4), (int) (0x96));
        } else {
            notify_lobby__19TPlayerBattleCtrl4PFPvPvPv((void *) (((u8 *)this)), (void *) (lbl_80475BCC), (int) (0x96));
        }
        set_score__19TPlayerBattleCtrl4PFPvi((void*)((void *) (((u8 *)this))), (void*)((int) (3)));
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::wait_for_rematch_menu_button() {
    if ((get_player_by_client_id(local_client_id) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 6) != 0)) {
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(((s32)this)), (void*)(5));
    }
}
extern "C" {

#pragma push
#pragma scheduling off
}
void TPlayerBattleCtrl4P::close_rematch_menu() {
    u32 var_r31;
    if ((u32) M2C_FIELD(((u8 *)this), u32 *, 0x20) != 0U) {
        TWindow__close(M2C_FIELD(((u8 *)this), void **, 0x20));
        M2C_FIELD(((u8 *)this), u32 *, 0x20) = 0U;
    }
    if ((u32) M2C_FIELD(((u8 *)this), u32 *, 0x24) != 0U) {
        TWindow__close(M2C_FIELD(((u8 *)this), void **, 0x24));
        M2C_FIELD(((u8 *)this), u32 *, 0x24) = 0U;
    }
    var_r31 = 0;
    do {
        if ((((s32)get_player_by_client_id((s32)(var_r31))) != 0U) && (check_player_flag1__6TLobbyFPv() != 0)) {
            send_code_45_to_window__19TPlayerBattleCtrl4PFPvii((void *) (((u8 *)this)), (int) ((u16) var_r31), (int) (1));
        }
        var_r31 += 1;
    } while ((s32) var_r31 < 4);
    set_score__19TPlayerBattleCtrl4PFPvi((void*)((void *) (((u8 *)this))), (void*)((int) (7)));
}
extern "C" {

#pragma pop

}
void TPlayerBattleCtrl4P::update_rematch_menu() {
    if (has_player_active_menu__11TWindowCtrlFi(local_client_id) == 0) {
        if (((O_80311C2C *)this)->w0 == NULL) {
            ((O_80311C2C *)this)->w0 = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x53), lbl_80475B70, 1);
            if (((O_80311C2C *)this)->w0 != NULL) {
                send_and_handle__6TLobbyFPvii(((O_80311C2C *)this)->w0, ((O_80311C2C *)this)->ids->a, 0x80);
            }
        }
        if (((O_80311C2C *)this)->w1 == NULL) {
            ((O_80311C2C *)this)->w1 = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x54), 2);
            forward_trade_action_default__16TObjCityMainWarpFPviii(((O_80311C2C *)this)->w1, ((O_80311C2C *)this)->ids->b, 6, 1);
            forward_trade_action_default__16TObjCityMainWarpFPviii(((O_80311C2C *)this)->w1, ((O_80311C2C *)this)->ids->d, 6, 3);
            calc_window_size__17TWindowSubComCardFPv(((O_80311C2C *)this)->w1);
            align_menu_entry_positions(((O_80311C2C *)this)->w1);
            set_ready_flag__18TCheckRoomSequenceFPv(((O_80311C2C *)this)->w1);
        }
        if (((O_80311C2C *)this)->w1 != NULL) {
            if (is_visible__17TWindowSubComCardFPv(((O_80311C2C *)this)->w1) != 0) {
                switch (get_selected_menu_value(((O_80311C2C *)this)->w1)) {
                case 1:
                    shuffle_order__19TPlayerBattleCtrl4PFPv(((O_80311C2C *)this));
                    break;
                case 2:
                    break;
                case 3:
                    set_split_screen_battle_phase(((O_80311C2C *)this), 4);
                    break;
                }
            } else {
                get_status_flag__17TWindowSubComCardFPv(((O_80311C2C *)this)->w1);
            }
        }
    }
}
extern "C" {

}
void TPlayerBattleCtrl4P::wait_for_result_window_close() { if (close_windows_on_button__19TPlayerBattleCtrl4PFPv(((void*)this)) != 0) { close_player_windows__19TPlayerBattleCtrl4PFPv((void*)(((void*)this))); update_players__19TPlayerBattleCtrl4PFv(((void*)this)); set_score__19TPlayerBattleCtrl4PFPvi((void*)(((void*)this)), (void*)((void*)5)); } }
extern "C" {

#pragma scheduling off
}
#pragma push
#pragma optimization_level 1
void TPlayerBattleCtrl4P::open_result_windows() {
  u32 var_r31;
  s32 temp_r3;
  if (!((s32)this))
  {
  }
  close_player_windows__19TPlayerBattleCtrl4PFPv((void*)(((s32)this)));
  create_result_windows__19TPlayerBattleCtrl4PFPv((void *) ((s32)this));
  var_r31 = 0;
  do
  {
    temp_r3 = ((s32)get_player_by_client_id((s32)(var_r31)));
    if (temp_r3 != 0)
    {
      if (check_player_flag1__6TLobbyFPv() == 0)
      {
        remove_player__19TPlayerBattleCtrl4PFPvUsi((void *) ((s32)this), (int) ((u16) var_r31), (int) 1);
      }
      release_attached_resource__10TObjPlayerFPv((int) temp_r3);
    }
    var_r31 += 1;
  }
  while (((s32) var_r31) < 4);
  set_score__19TPlayerBattleCtrl4PFPvi((void*)((void *) ((s32)this)), (void*)((int) 4));
}
#pragma pop
extern "C" {

}
