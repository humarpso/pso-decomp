#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK TLobby__sub_8024AC20(int);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
u32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
s32 TLobby__sub_80292F5C();
s32 TLobby__sub_80292F7C();
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
s32 get_player_by_client_id(int);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
int suppress_slot__11TWindowCtrlFi(void*);
M2C_UNK unsuppress_slot__11TWindowCtrlFi(int);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(u32, M2C_UNK);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK get_window_layout_position(M2C_UNK);
int TWindow__close(void*);
M2C_UNK set_loss_flag__6TLobbyFPv(u32);
int TObjPlayer__sub_8024ABDC(void*);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(int);

s32 is_multi_ready__6TLobbyFv(void) {
    if ((TLobby__sub_80292F7C() != 0) || (TLobby__sub_80292F5C() <= 1)) {
        return 0;
    }
    return 1;
}

void close_window_field30__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x30) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x30))); *(int*)((char*)p + 0x30) = 0; } }

M2C_UNK lbl_804DBE90[3] = { 1, 0, 0 };
__declspec(section ".data") M2C_UNK lbl_804DBE9C[2] = { 0x43B40000, 0x42FA0000 };

void open_message_window__6TLobbyFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, void **, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x30) = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x39), lbl_804DBE9C, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TQuestVmDownLoadServer__sub_8006EF6C(0x5E), 1);
    }
}

void close_window__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x2c))); *(int*)((char*)p + 0x2c) = 0; } }

void open_giveup_window__6TLobbyFPv(void *arg0) {
    u32 temp;

    temp = M2C_FIELD(arg0, u32 *, 0x2C);
    if (temp != 0U) {
        TWindow__close((void*)(temp));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x3A), 3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5B), 5, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5C), 5, 1);
        calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        set_loss_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, u32 *, 0x2C), 0);
    }
}

void send_giveup_to_all_players__6TLobbyFv(void) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = get_player_by_client_id((int)(var_r31));
        if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
            send_code_45_1__10TObjPlayerFi(temp_r3);
        }
        unsuppress_slot__11TWindowCtrlFi(var_r31);
        TLobby__sub_8024AC20(var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

    extern int lbl_805D53A0;
void close_giveup_window__6TLobbyFPv(void* a0) { suppress_slot__11TWindowCtrlFi((void*)(lbl_805D53A0)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

    extern int lbl_805D53A0;
void play_all_players_effect__6TLobbyFPv(void* a0) { TObjPlayer__sub_8024ABDC((void*)(lbl_805D53A0)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

void play_effect_all_players__6TLobbyFPv(void*) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    do {
        var_r30 = get_player_by_client_id((int)(var_r31));
        if (var_r30 != 0) {
            if (check_player_flag1__6TLobbyFPv() == 0) {
                play_effect_default__10TObjPlayerFii(var_r30, -1);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TLobby__sub_8029A16C(void);

extern s32 TLobby__data_805D53AC;

u8 TLobby__sub_8029A16C(void) {
    return (u8) (lbl_805D53A0 == TLobby__data_805D53AC);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void countdown_and_destroy__6TLobbyFPv(void *arg0);
M2C_UNK start_challenge_countdown__6TLobbyFv();

M2C_UNK queue_destruction__7TObjectFv(void *);

void countdown_and_destroy__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    ((M2C_UNK (*)())play_all_players_effect__6TLobbyFPv)();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if (temp_r0 <= 0) {
        start_challenge_countdown__6TLobbyFv();
        ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
        close_window__6TLobbyFPv(arg0);
        close_window_field30__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TKeyBoardControl__sub_8000F950();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_quest_active();
M2C_UNK clear_counter__6TLobbyFv();
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_cue_stream_file(M2C_UNK *);
s32 TLobby__sub_80291F9C();

extern M2C_UNK lbl_804651E8[];
extern s32 evt2_random_enemies_mode;

void giveup_window_handle_select(void *arg0) {
    s32 temp_r3;

    ((M2C_UNK (*)())play_effect_all_players__6TLobbyFPv)();
    temp_r3 = TLobby__sub_80291F9C();
    switch (temp_r3) {
    case 0:
        play_cue_stream_file(lbl_804651E8);
        ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
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
        ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
        play_all_players_effect__6TLobbyFPv(arg0);
        close_window_field30__6TLobbyFPv(arg0);
        close_window__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x1C) = 4;
        return;
    default:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0)) {
            ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            close_giveup_window__6TLobbyFPv(arg0);
            close_window_field30__6TLobbyFPv(arg0);
            open_giveup_window__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
        break;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_retry_menu_select__6TLobbyFPv(void *arg0);
M2C_UNK set_retry_selection__6TLobbyFi(M2C_UNK);

s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_selected_menu_value(u32);

extern M2C_UNK lbl_804DBE90[];

void handle_retry_menu_select__6TLobbyFPv(void *arg0) {
    s32 temp_r3;

    ((M2C_UNK (*)())close_giveup_window__6TLobbyFPv)();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        open_giveup_window__6TLobbyFPv(arg0);
    }
    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = get_selected_menu_value(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 != 2) {
            set_retry_selection__6TLobbyFi(lbl_804DBE90[temp_r3]);
            ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            play_effect_all_players__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 obj_testFlags30(s32, M2C_UNK);

s32 get_global_state__14TOKeyMachine01Fv();
s32 TWindowCtrlMain__sub_8024CE58();

void update_giveup__6TLobbyFPv(void *arg0);
}

extern "C" {

void update_challenge_4p_retry__6TLobbyFPv(void *arg0);

s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();

extern s8 lbl_8050E208[];

void update_challenge_4p_retry__6TLobbyFPv(void *arg0) {
    ((M2C_UNK (*)())play_all_players_effect__6TLobbyFPv)();
    if ((get_player_by_client_id(lbl_805D53A0) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
        close_giveup_window__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
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
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            close_giveup_window__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        } else {
            ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)(arg0);
            play_effect_all_players__6TLobbyFPv(arg0);
            open_message_window__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}

#include "pso/TObjChallenge4PRetry.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_multi_ready__6TLobbyFv();

}

extern "C" {

void *__ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__20TObjChallenge4PRetry[];
extern s32 lbl_805D3CF8;
void *create__20TObjChallenge4PRetryFPv(void *arg0);
void *TObjChallenge4PRetry__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void run_task__20TObjChallenge4PRetryFv(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x20) = ((s32 (*)(void *))TLobby__sub_8029A16C)((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
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
        ((M2C_UNK (*)(void *))send_giveup_to_all_players__6TLobbyFv)((void *) (arg0));
        close_window__6TLobbyFPv((void *) (arg0));
        close_window_field30__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

TObjChallenge4PRetry::~TObjChallenge4PRetry() {
    if (m_20 != 0 && m_24 == 0) {
        set_retry_selection__6TLobbyFi(0);
    }
}

void *TObjChallenge4PRetry__ct(void *arg0, void *parent) {
    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjChallenge4PRetry;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3CF8;
    M2C_FIELD(arg0, s32 *, 0x20) = ((s32 (*)(void *))TLobby__sub_8029A16C)(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

void *create__20TObjChallenge4PRetryFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TObjChallenge4PRetry__ct(o, arg0);
    }
    return o;
}

}
