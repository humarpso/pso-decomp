#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct W4_80072994 { u8 b[4]; };

struct W8_80072994 { u8 b[8]; };

struct S_80072994 {
    u16 h;
    u8 pad2[2];
    W4_80072994 a[0x17];
    u8 x60[0x50];
    u8 xB0[0x10];
    W8_80072994 c[3];
    u8 padD8[0xC];
    u8 xE4[8];
    W4_80072994 e[5];
};

struct Obj_80072BB0 { u8 pad[0x30]; u32 f30; };

extern "C" {
void TLobby__sub_80072880(u8 *arg0);
void byteswap_challenge_packet__6TLobbyFPv(void *arg0);
void byteswap_challenge_packet__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void send_challenge_packet__6TLobbyFPv(void *arg0);
void TLobby__sub_800728FC(u8 *arg0);
void read_be16_field2__10TObjPlayerFPv(void *);
M2C_UNK bswap_16__FPUs(s32);
void TLobby__send_and_handle_60(void *);
void bswap_6x7C_packet__6TLobbyFi(s32 arg0);
void send_6x7C_packet__6TLobbyFi(s32 arg0);
void init_pkt_cmd_7C__6TLobbyFPv(u8 *arg0);
void bswap_fields_0_4__6TLobbyFPv(void *arg0);
void bswap_fields_4_8_12__6TLobbyFPv(void *arg0);
M2C_UNK bswap_16__FPUs(s32);
void TLobby__sub_80072AB8(void *arg0);
void bswap_32__FPUl(void *);
void bswap_packet_field__6TLobbyFv(void * _w0);
s32 TLobby__sub_8006F23C();
s32 TLobby__sub_8006FBE4();
s32 is_ready_to_draw__6TLobbyFv(void);
int TWindow__close(void*);
void TLobby__sub_80072B70(u8 *arg0);
int TWindow__close(void*);
void close_window_2c__6TLobbyFPv(void* p);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK get_window_layout_position(M2C_UNK);
int TWindow__close(void*);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_loss_flag__6TLobbyFPv(u32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(u32, M2C_UNK);
void open_loss_menu__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_8024AC20(s32);
s32 get_player_by_client_id(s32);
M2C_UNK unsuppress_slot__11TWindowCtrlFi(s32);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
extern s32 lbl_805D53A0;
int TWindowCtrl__sub_8024AEAC(void*);
extern s32 lbl_805D53A0;
int TObjPlayer__sub_8024ABDC(void*);
extern s32 lbl_805D53A0;
s32 get_player_by_client_id(s32);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
extern s32 lbl_805D53A0;
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
u8 is_challenge_lobby__6TLobbyFv(void);
M2C_UNK TLobby__sub_8006F2CC();
void TLobby__sub_80072B70(u8 *arg0);
void close_window_2c__6TLobbyFPv(void* p);
void send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
void update_destroy_countdown__6TLobbyFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_80070DA8();
void TLobby__sub_80072B70(u8 *arg0);
void close_window_2c__6TLobbyFPv(void* p);
void open_loss_menu__6TLobbyFPv(void *arg0);
void send_45_and_close_windows__6TLobbyFv(void * _w0);
void play_player_default_effect__6TLobbyFv(s32 _w0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_cue_stream_file(M2C_UNK *);
extern M2C_UNK lbl_804385D4[];
void handle_loss_sequence(void *arg0);
M2C_UNK TLobby__sub_80072308(s32);
void close_window_2c__6TLobbyFPv(void* p);
void open_loss_menu__6TLobbyFPv(void *arg0);
void send_45_and_close_windows__6TLobbyFv(void * _w0);
void show_ctrl_and_play_effect__6TLobbyFPv(void* a0);
void play_player_default_effect__6TLobbyFv(s32 _w0);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_selected_menu_value(u32);
extern M2C_UNK lbl_8048D120[];
extern s8 lbl_8050E208[];
void update_challenge_retry__6TLobbyFPv(void *arg0);
void send_45_and_close_windows__6TLobbyFv(void * _w0);
void show_ctrl_and_play_effect__6TLobbyFPv(void* a0);
void play_default_effect__6TLobbyFPv(void* a0);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();
s32 get_player_by_client_id(s32);
extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;
void handle_challenge_retry_confirm(void *arg0);
void bswap_fields_0_4__6TLobbyFPv(void *arg0);
void bswap_fields_4_8_12__6TLobbyFPv(void *arg0);
M2C_UNK bswap_16__FPUs(s32);
void TLobby__sub_80072AB8(void *arg0);
void bswap_packet_field__6TLobbyFv(void * _w0);
M2C_UNK TLobby__sub_80072994(s32 arg0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
int TWindow__close(void*);
void set_field_1c__6TLobbyFPvf(u32, f32);
void send_and_handle__6TLobbyFPvii(u32, s32, s32);
u32 set_window_mode_4__6TLobbyFPvii(s32, void *, s32);
M2C_UNK get_window_layout_position(M2C_UNK);
extern u8 lbl_8048D12C[];
extern const f32 lbl_805D9110;
void TLobby__sub_80072BB0(Obj_80072BB0 *self);
}

extern "C" {

void TLobby__sub_80072724(void *arg0);
void TLobby__sub_80072758(u8 *arg0);
void TLobby__sub_800727A0(void *arg0);
void TLobby__sub_800727EC(u8 *arg0);
void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0);
void byteswap_challenge_time_packet__6TLobbyFPv(void *arg0);
void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0);
void send_state__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);

void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

void TLobby__sub_80072724(void *arg0) {
    bswap_challenge_dead_flag__6TLobbyFPv((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}

void TLobby__sub_80072758(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x9D;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0) {
    TLobby__sub_800727A0((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}

void TLobby__sub_800727A0(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
}

void TLobby__sub_800727EC(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x97;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

void byteswap_challenge_time_packet__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
}

void send_state__6TLobbyFPv(void *arg0) {
    byteswap_challenge_time_packet__6TLobbyFPv((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_80072880(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x95;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}
void byteswap_challenge_packet__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}
void send_challenge_packet__6TLobbyFPv(void *arg0) {
    byteswap_challenge_packet__6TLobbyFPv((void *)(arg0));
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_800728FC(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x8A;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}
void bswap_6x7C_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv((void *)(arg0));
    bswap_16__FPUs(arg0 + 4);
    TLobby__sub_80072994((s32)(arg0 + 8));
}
void send_6x7C_packet__6TLobbyFi(s32 arg0) {
    bswap_6x7C_packet__6TLobbyFi((s32)(arg0));
    TLobby__send_and_handle_60((void *)(arg0));
}
void init_pkt_cmd_7C__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0x7C;
    M2C_FIELD(arg0, s8 *, 1) = 0x42;
}

M2C_UNK TLobby__sub_80072994(s32 arg0) {
    S_80072994 *s = (S_80072994 *)arg0;
    s32 i;
    bswap_16__FPUs(arg0);
    for (i = 0; i < 0x17; i++) {
        bswap_packet_field__6TLobbyFv(&s->a[i]);
    }
    TLobby__sub_80072AB8(s->x60);
    bswap_fields_4_8_12__6TLobbyFPv(s->xB0);
    for (i = 0; i < 3; i++) {
        bswap_fields_0_4__6TLobbyFPv(&s->c[i]);
    }
    bswap_fields_0_4__6TLobbyFPv(s->xE4);
    for (i = 0; i < 5; i++) {
        bswap_packet_field__6TLobbyFv(&s->e[i]);
    }
}

void bswap_fields_0_4__6TLobbyFPv(void *arg0) {
    bswap_32__FPUl(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}
void bswap_fields_4_8_12__6TLobbyFPv(void *arg0) {
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
}
void TLobby__sub_80072AB8(void *arg0) {
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 4)));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
    bswap_32__FPUl((void *)((char *)arg0 + 20));
    bswap_32__FPUl((void *)((char *)arg0 + 24));
}
void bswap_packet_field__6TLobbyFv(void * _w0) {
    bswap_32__FPUl((void *)(_w0));
}
s32 is_ready_to_draw__6TLobbyFv(void) {
    if ((TLobby__sub_8006F23C() != 0) || (TLobby__sub_8006FBE4() <= 1)) {
        return 0;
    }
    return 1;
}
void TLobby__sub_80072B70(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, void **, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
}

void TLobby__sub_80072BB0(Obj_80072BB0 *self) {
    if (self->f30 != 0) {
        TWindow__close((void *)self->f30);
        self->f30 = 0;
    }
    self->f30 = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x39), lbl_8048D12C, 1);
    if (self->f30 != 0) {
        set_field_1c__6TLobbyFPvf(self->f30, lbl_805D9110);
        send_and_handle__6TLobbyFPvii(self->f30, TQuestVmDownLoadServer__sub_8006EF6C(0x5E), 1);
    }
}

void close_window_2c__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x2c))); *(int*)((char*)p + 0x2c) = 0; } }
void open_loss_menu__6TLobbyFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, u32 *, 0x2C)));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x3A), 3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5B), 5, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5C), 5, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5D), 5, 2);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        set_loss_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, u32 *, 0x2C), 2);
    }
}
void send_45_and_close_windows__6TLobbyFv(void * _w0) {
    s32 temp_r3;
    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
        send_code_45_1__10TObjPlayerFi(temp_r3);
    }
    unsuppress_slot__11TWindowCtrlFi(lbl_805D53A0);
    TLobby__sub_8024AC20(lbl_805D53A0);
}
void show_ctrl_and_play_effect__6TLobbyFPv(void* a0) { TWindowCtrl__sub_8024AEAC((void*)((*(int *)&lbl_805D53A0))); play_player_default_effect__6TLobbyFv((s32)(a0)); }
void play_default_effect__6TLobbyFPv(void* a0) { TObjPlayer__sub_8024ABDC((void*)((*(int *)&lbl_805D53A0))); play_player_default_effect__6TLobbyFv((s32)(a0)); }
void play_player_default_effect__6TLobbyFv(s32 _w0) {
    s32 temp_r3;
    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() == 0)) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
    }
}
u8 is_challenge_lobby__6TLobbyFv(void) {
    return (u8) (lbl_805D53A0 == TLobby__data_805D53AC);
}
void update_destroy_countdown__6TLobbyFPv(void *arg0) {
    s32 temp_r0;
    play_default_effect__6TLobbyFPv((void*)(arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if (temp_r0 <= 0) {
        TLobby__sub_8006F2CC();
        send_45_and_close_windows__6TLobbyFv((void *)(arg0));
        close_window_2c__6TLobbyFPv((void*)(arg0));
        TLobby__sub_80072B70((u8 *)(arg0));
        queue_destruction__7TObjectFv(arg0);
    }
}
void handle_loss_sequence(void *arg0) {
    s32 temp_r3;
    play_player_default_effect__6TLobbyFv((s32)(arg0));
    temp_r3 = TLobby__sub_80070DA8();
    switch (temp_r3) {
    case 0:
        play_cue_stream_file(lbl_804385D4);
        send_45_and_close_windows__6TLobbyFv(arg0);
        close_window_2c__6TLobbyFPv((void*)(arg0));
        TLobby__sub_80072B70((u8 *)(arg0));
        queue_destruction__7TObjectFv(arg0);
        return;
    case 1:
        play_sound_effect(0x52812, 0, 0, 0);
        send_45_and_close_windows__6TLobbyFv(arg0);
        play_default_effect__6TLobbyFPv((void*)(arg0));
        TLobby__sub_80072B70((u8 *)(arg0));
        close_window_2c__6TLobbyFPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x1C) = 4;
        return;
    default:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0)) {
            send_45_and_close_windows__6TLobbyFv(arg0);
            show_ctrl_and_play_effect__6TLobbyFPv((void*)(arg0));
            TLobby__sub_80072B70((u8 *)(arg0));
            open_loss_menu__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
        return;
    }
}
void update_challenge_retry__6TLobbyFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    show_ctrl_and_play_effect__6TLobbyFPv((void*)(arg0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        open_loss_menu__6TLobbyFPv(arg0);
    }
    var_r31 = 0;
    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = get_selected_menu_value(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 == 2) {
            var_r31 = 1;
            goto block_6;
        }
        TLobby__sub_80072308(lbl_8048D120[temp_r3]);
        send_45_and_close_windows__6TLobbyFv(arg0);
        play_player_default_effect__6TLobbyFv((s32)(arg0));
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        return;
    }
block_6:
    if ((var_r31 != 0) || (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0)) {
        close_window_2c__6TLobbyFPv((void*)(arg0));
        send_45_and_close_windows__6TLobbyFv(arg0);
        play_default_effect__6TLobbyFPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}
void handle_challenge_retry_confirm(void *arg0) {
    play_default_effect__6TLobbyFPv((void*)(arg0));
    if ((((u32)get_player_by_client_id(lbl_805D53A0)) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        send_45_and_close_windows__6TLobbyFv(arg0);
        show_ctrl_and_play_effect__6TLobbyFPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

}
