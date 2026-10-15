#include "pso/map/FloorResourceCallbacks.h"

#include "types.h"

extern "C" {
s32 get_main_phase();
s32 is_split_screen();
s32 is_quest_active();
s32 create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
s32 init_area_lights();
void dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
s32 get_global_state__14TOKeyMachine01Fv();
void init_music_sequencer(s32);
s32 play_area_music(s32 *);
s32 load_floor_sound_bank();
void create_mist_ctrl__6TLobbyFPvPv(void *, void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_804651C0[];
extern void *tl_05;
s32 TLobby__sub_80299C7C(void);
}

extern "C" {

s32 init_particle_model__6TLobbyFv(void);
s32 init_scene_delo2(void);
s32 load_dragon2_scene(void);
void refresh_lobby_state__6TLobbyFv(void);
void update_field_state__6TLobbyFv(void);
void update_floor_state_deferred__6TLobbyFv(void);
void update_scene_alt__6TLobbyFv(void);
void update_subsystems__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
s32 TLobby__sub_801403B4(s32);
int stop_cue_stream(void);
int stop_audio_streams__6TLobbyFv(void);
s32 load_floor_sound_bank();
s32 play_area_music(s32 *);
s32 init_area_lights();
u32 __nw__7TObjectFUl(s32);
s32 check_disconnect_conditions__6TLobbyFv();
s32 create__15TBoss6EmptyWarpFv();
s32 create_boss8_demo_objects();
s32 create_instance__10TSceneSoraFPv(void*, s32);
s32 create_tasks__6TLobbyFv();
int fn_802F105C(void);
s32 fn_802F1084();
int fn_802FE9E0(void);
s32 fn_802FEA0C();
s32 get_global_state__14TOKeyMachine01Fv();
s32 init_scene_boss2_tunnel();
s32 is_split_screen();
int refresh_render_state__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);

void refresh_lobby_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); stop_cue_stream(); unload_current_floor_resources(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }

extern s32 tl_particlemodel;

s32 init_particle_model__6TLobbyFv(void) {
    void* obj;
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if ((is_split_screen() == 0) && ((obj = (void*)__nw__7TObjectFUl(0x3C)) != 0)) {
        create_instance__10TSceneSoraFPv((void*)(obj), (s32)(tl_particlemodel));
    }
    create__15TBoss6EmptyWarpFv();
    return 1;
}

void update_field_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); stop_cue_stream(); fn_802FE9E0(); unload_current_floor_resources(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }

extern s32 lbl_804651A0[];

s32 load_dragon2_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    fn_802FEA0C();
    init_area_lights();
    create_tasks__6TLobbyFv();
    create_boss8_demo_objects();
    play_area_music(lbl_804651A0);
    return 1;
}

void update_subsystems__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); stop_cue_stream(); fn_802F105C(); unload_current_floor_resources(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }

extern s32 lbl_804651B0[];
extern s32 tl_particlemodel;

s32 init_scene_delo2(void) {
    void *obj;
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_scene_boss2_tunnel();
    init_area_lights();
    create_tasks__6TLobbyFv();
    fn_802F1084();
    TLobby__sub_801403B4(0);
    play_area_music(lbl_804651B0);
    if ((is_split_screen() == 0) && ((obj = (void *)__nw__7TObjectFUl(0x3C)) != 0)) {
        create_instance__10TSceneSoraFPv((void*)(obj), (s32)(tl_particlemodel));
    }
    return 1;
}

void update_floor_state_deferred__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); unload_current_floor_resources(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }

s32 TLobby__sub_80299C7C(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if ((get_main_phase() != 0xE) || (is_quest_active() == 0)) {
        switch (((s32)get_global_state__14TOKeyMachine01Fv())) {
        case 0x17:
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x51);
            break;
        }
    }
    if (is_split_screen() != 0) {
        play_area_music((s32 *)(lbl_804651C0));
    } else {
        init_music_sequencer(5);
    }
    if ((is_not_split_screen__13TRaderMapCoreFv() == 0) && (((s32)get_global_state__14TOKeyMachine01Fv()) == 0x17)) {
        create_mist_ctrl__6TLobbyFPvPv(tl_05, NULL);
    }
    return 1;
}

void update_scene_alt__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); unload_current_floor_resources(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }

}

#include "types.h"

extern "C" {

s32 get_main_phase();
s32 is_split_screen();
s32 is_quest_active();
s32 create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
s32 init_area_lights();
s32 TLobby__sub_801403B4(s32);

s32 get_global_state__14TOKeyMachine01Fv();

s32 play_area_music(s32 *);
s32 load_floor_sound_bank();
u32 __nw__7TObjectFUl(s32);
#define CIS ((s32 (*)(s32, s32))create_instance__10TSceneSoraFPv)
extern s32 lbl_804651C8[];
extern s32 tl_particlemodel;

s32 initialize_boss_scene(void) {
    s32 temp_r3;
    u32 temp_new;

    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    if (is_split_screen() == 0) {
        temp_new = __nw__7TObjectFUl(0x3C);
        if (temp_new != 0U) {
            CIS(temp_new, tl_particlemodel);
        }
    }
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_804651C8);
    } else {
        init_music_sequencer(6);
    }
    if ((get_main_phase() != 0xE) || (is_quest_active() == 0)) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        switch (temp_r3) {
        case 28:
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x54);
            break;
        case 29:
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x55);
            break;
        }
    }
    return 1;
}

}

#include "types.h"

extern "C" {

s32 is_multi_ready__6TLobbyFv(void);
void close_window_field30__6TLobbyFPv(void* p);
void open_message_window__6TLobbyFPv(void *arg0);
void close_window__6TLobbyFPv(void* p);
void open_giveup_window__6TLobbyFPv(void *arg0);
void send_giveup_to_all_players__6TLobbyFv(void);
void close_giveup_window__6TLobbyFPv(void* a0);
void play_all_players_effect__6TLobbyFPv(void* a0);
void play_effect_all_players__6TLobbyFPv(void*);
u32 check_room_seq_4__16TAdChrSelASlotGCFl(s32, s32);
s32 check_player_flag1__6TLobbyFv();
s32 TLobby__sub_8024AC20(int);
s32 send_and_handle__6TLobbyFii(u32, s32, s32);
u32 set_window_mode_4__6TLobbyFPvll(s32, s32 *, s32);
s32 TLobby__sub_80292F5C();
s32 get_challenge_mode_flag__6TLobbyFv();
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
s32 get_player_by_client_id(int);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int suppress_slot__11TWindowCtrlFv(void*);
s32 unsuppress_slot__11TWindowCtrlFv(int);
s32 set_selected_index__17TWindowSubComCardFs(u32, s32);
s32 calc_window_size__17TWindowSubComCardFPv(u32);
s32 get_window_layout_position(s32);
int TWindow__close(void*);
s32 set_loss_flag__6TLobbyFv(u32);
int TObjPlayer__sub_8024ABDC(void*);
s32 play_effect_default__10TObjPlayerFii(s32, s32);
s32 send_code_45_1__10TObjPlayerFi(int);

s32 is_multi_ready__6TLobbyFv(void) {
    if ((get_challenge_mode_flag__6TLobbyFv() != 0) || (TLobby__sub_80292F5C() <= 1)) {
        return 0;
    }
    return 1;
}

void close_window_field30__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x30) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x30))); *(int*)((char*)p + 0x30) = 0; } }

s32 lbl_804DBE90[3] = { 1, 0, 0 };
__declspec(section ".data") s32 lbl_804DBE9C[2] = { 0x43B40000, 0x42FA0000 };

void open_message_window__6TLobbyFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
        TWindow__close((void*)(*(void **)((s8 *)arg0 + 0x30)));
        *(u32 *)((s8 *)arg0 + 0x30) = 0U;
    }
    *(u32 *)((s8 *)arg0 + 0x30) = set_window_mode_4__6TLobbyFPvll(get_window_layout_position(0x39), lbl_804DBE9C, 1);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
        send_and_handle__6TLobbyFii(*(u32 *)((s8 *)arg0 + 0x30), TQuestVmDownLoadServer__sub_8006EF6C(0x5E), 1);
    }
}

void close_window__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x2c))); *(int*)((char*)p + 0x2c) = 0; } }

void open_giveup_window__6TLobbyFPv(void *arg0) {
    u32 temp;

    temp = *(u32 *)((s8 *)arg0 + 0x2C);
    if (temp != 0U) {
        TWindow__close((void*)(temp));
        *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
    }
    *(u32 *)((s8 *)arg0 + 0x2C) = check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x3A), 3);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(*(u32 *)((s8 *)arg0 + 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5B), 5, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(*(u32 *)((s8 *)arg0 + 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5C), 5, 1);
        calc_window_size__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x2C));
        set_loss_flag__6TLobbyFv(*(u32 *)((s8 *)arg0 + 0x2C));
        set_selected_index__17TWindowSubComCardFs(*(u32 *)((s8 *)arg0 + 0x2C), 0);
    }
}

void send_giveup_to_all_players__6TLobbyFv(void) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = get_player_by_client_id((int)(var_r31));
        if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFv() != 0)) {
            send_code_45_1__10TObjPlayerFi(temp_r3);
        }
        unsuppress_slot__11TWindowCtrlFv(var_r31);
        TLobby__sub_8024AC20(var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

    extern int local_client_id;
void close_giveup_window__6TLobbyFPv(void* a0) { suppress_slot__11TWindowCtrlFv((void*)(local_client_id)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

    extern int local_client_id;
void play_all_players_effect__6TLobbyFPv(void* a0) { TObjPlayer__sub_8024ABDC((void*)(local_client_id)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

void play_effect_all_players__6TLobbyFPv(void*) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    do {
        var_r30 = get_player_by_client_id((int)(var_r31));
        if (var_r30 != 0) {
            if (check_player_flag1__6TLobbyFv() == 0) {
                play_effect_default__10TObjPlayerFii(var_r30, -1);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}

#include "types.h"

extern "C" {

u8 TLobby__sub_8029A16C(void);

extern s32 TLobby__designated_client_id;

u8 TLobby__sub_8029A16C(void) {
    return (u8) (local_client_id == TLobby__designated_client_id);
}

}

#include "types.h"

extern "C" {

void countdown_and_destroy__6TLobbyFPv(void *arg0);
s32 start_challenge_countdown__6TLobbyFv();

s32 queue_destruction__7TObjectFv(void *);

void countdown_and_destroy__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    ((s32 (*)())play_all_players_effect__6TLobbyFPv)();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x28) - 1;
    *(s32 *)((s8 *)arg0 + 0x28) = temp_r0;
    if (temp_r0 <= 0) {
        start_challenge_countdown__6TLobbyFv();
        ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
        close_window__6TLobbyFPv(arg0);
        close_window_field30__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}

#include "types.h"

extern "C" {

s32 TKeyBoardControl__sub_8000F950();
s32 queue_destruction__7TObjectFv(void *);
s32 is_quest_active();
s32 clear_counter__6TLobbyFv();
s32 play_sound_effect(s32, s32, s32, s32);
s32 play_cue_stream_file(s32 *);
s32 TLobby__sub_80291F9C();

extern s32 lbl_804651E8[];
extern s32 evt2_random_enemies_mode;

void giveup_window_handle_select(void *arg0) {
    s32 temp_r3;

    ((s32 (*)())play_effect_all_players__6TLobbyFPv)();
    temp_r3 = TLobby__sub_80291F9C();
    switch (temp_r3) {
    case 0:
        play_cue_stream_file(lbl_804651E8);
        ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
        close_window__6TLobbyFPv(arg0);
        close_window_field30__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
        if (is_quest_active() == 1) {
            clear_counter__6TLobbyFv();
            evt2_random_enemies_mode = 0;
            TKeyBoardControl__sub_8000F950();
        }
        return;
    case 1:
        play_sound_effect(0x52812, 0, 0, 0);
        ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
        play_all_players_effect__6TLobbyFPv(arg0);
        close_window_field30__6TLobbyFPv(arg0);
        close_window__6TLobbyFPv(arg0);
        *(s32 *)((s8 *)arg0 + 0x28) = 0x1E;
        *(s32 *)((s8 *)arg0 + 0x1C) = 4;
        return;
    default:
        if (((s32) *(s32 *)((s8 *)arg0 + 0x20) != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0x24) == 0)) {
            ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            close_giveup_window__6TLobbyFPv(arg0);
            close_window_field30__6TLobbyFPv(arg0);
            open_giveup_window__6TLobbyFPv(arg0);
            *(s32 *)((s8 *)arg0 + 0x1C) = 2;
        }
        break;
    }
}

}

#include "types.h"

extern "C" {

void handle_retry_menu_select__6TLobbyFPv(void *arg0);
s32 set_retry_selection__6TLobbyFl(s32);

s32 is_visible__17TWindowSubComCardFv(u32);
s32 get_selected_menu_value(u32);

extern s32 lbl_804DBE90[];

void handle_retry_menu_select__6TLobbyFPv(void *arg0) {
    s32 temp_r3;

    ((s32 (*)())close_giveup_window__6TLobbyFPv)();
    if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) == 0U) {
        open_giveup_window__6TLobbyFPv(arg0);
    }
    if (is_visible__17TWindowSubComCardFv(*(u32 *)((s8 *)arg0 + 0x2C)) != 0) {
        temp_r3 = get_selected_menu_value(*(u32 *)((s8 *)arg0 + 0x2C));
        if (temp_r3 != 2) {
            set_retry_selection__6TLobbyFl(lbl_804DBE90[temp_r3]);
            ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            play_effect_all_players__6TLobbyFPv(arg0);
            *(s32 *)((s8 *)arg0 + 0x24) = 1;
            *(s32 *)((s8 *)arg0 + 0x1C) = 3;
        }
    }
}

}

#include "types.h"

extern "C" {
s32 obj_testFlags30(s32, s32);

s32 get_global_state__14TOKeyMachine01Fv();
s32 TWindowCtrlMain__sub_8024CE58();

void update_giveup__6TLobbyFPv(void *arg0);
}

extern "C" {

void update_challenge_4p_retry__6TLobbyFPv(void *arg0);

s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 check_flag_100__10TObjPlayerFPv();

extern s8 controller_input_state[];

void update_challenge_4p_retry__6TLobbyFPv(void *arg0) {
    ((s32 (*)())play_all_players_effect__6TLobbyFPv)();
    if ((get_player_by_client_id(local_client_id) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0)) {
        ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
        close_giveup_window__6TLobbyFPv(arg0);
        *(s32 *)((s8 *)arg0 + 0x1C) = 2;
    }
}
void update_giveup__6TLobbyFPv(void *arg0) {
    s32 flag;
    s32 i;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
    case 0x12:
        if (TWindowCtrlMain__sub_8024CE58() != 0) {
            break;
        }
        return;
    default:
        return;
    }
    play_effect_all_players__6TLobbyFPv(arg0);
    flag = 1;
    for (i = 0; i < 4; i++) {
        u32 ctrl = get_player_by_client_id(i);
        if (ctrl != 0U && obj_testFlags30(ctrl, 0x02000000) != 0) {
            flag = 0;
            break;
        }
    }
    if (flag != 0) {
        if (*(s32 *)((s8 *)arg0 + 0x20) != 0) {
            ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            close_giveup_window__6TLobbyFPv(arg0);
            *(s32 *)((s8 *)arg0 + 0x1C) = 2;
        } else {
            ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            play_effect_all_players__6TLobbyFPv(arg0);
            open_message_window__6TLobbyFPv(arg0);
            *(s32 *)((s8 *)arg0 + 0x1C) = 3;
        }
    }
}

}

#include "pso/TObjChallenge4PRetry.h"

#include "types.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 is_multi_ready__6TLobbyFv();

}

extern "C" {

void *__ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__20TObjChallenge4PRetry[];
extern s32 TObjChallenge4PRetry__class_name;
void *TObjChallenge4PRetry__ct(void *, void *);

void TObjChallenge4PRetry::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    *(s32 *)((s8 *)arg0 + 0x20) = ((s32 (*)(void *))TLobby__sub_8029A16C)((void *) (arg0));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
        update_giveup__6TLobbyFPv((void *) (arg0));
        break;
    case 1:
        update_challenge_4p_retry__6TLobbyFPv((void *) (arg0));
        break;
    case 2:
        handle_retry_menu_select__6TLobbyFPv((void *) (arg0));
        break;
    case 3:
        giveup_window_handle_select((void *) (arg0));
        break;
    case 4:
        countdown_and_destroy__6TLobbyFPv((void *) (arg0));
        break;
    }
    if (is_multi_ready__6TLobbyFv() == 0) {
        ((s32 (*)(void *))send_giveup_to_all_players__6TLobbyFv)((void *) (arg0));
        close_window__6TLobbyFPv((void *) (arg0));
        close_window_field30__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

TObjChallenge4PRetry::~TObjChallenge4PRetry() {
    if (m_20 != 0 && m_24 == 0) {
        set_retry_selection__6TLobbyFl(0);
    }
}

void *TObjChallenge4PRetry__ct(void *arg0, void *parent) {
    __ct__7TObjectFP7TObject(arg0, parent);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TObjChallenge4PRetry;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjChallenge4PRetry__class_name;
    *(s32 *)((s8 *)arg0 + 0x20) = ((s32 (*)(void *))TLobby__sub_8029A16C)(arg0);
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void *TObjChallenge4PRetry::create(void *arg0) {
    void *o = ((void *(*)(int))__nw__7TObjectFUl)(0x34);
    if (o != NULL) {
        o = TObjChallenge4PRetry__ct(o, arg0);
    }
    return o;
}

}
