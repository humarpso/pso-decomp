#include "types.h"
extern "C" {
void reset_state__6TLobbyFv(void);
void TLobby__sub_801384E4(void);
s32 __ct__13GameListEntryFv(s32 arg0);
void TLobby__sub_801397E8(s32 arg0);
void show_seq_phase_message__6TLobbyFi(s32 arg0);
}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_801378AC { u8 b[0x43c]; };

typedef s32 M2C_UNK;

extern "C" {
extern void *TLobby__data_805D5580;
extern char lbl_8043F038[];
extern char lbl_8043F044[];
void TLobby__sub_8013A170(const char *fmt, ...);
s32 get_option_state__6TLobbyFv(void);
void send_login2__9TProtocolFi(void *proto, s32 opt);
void dispatch_by_index__6TLobbyFi(s32 arg0);
void handle_register_name_result__6TLobbyFi(s32 ok);
extern void *TLobby__data_805D5580;
extern char lbl_8043F05C[];
void TLobby__sub_8013A170(const char *fmt, ...);
s32 get_option_state__6TLobbyFv(void);
void send_login2__9TProtocolFi(void *proto, s32 opt);
void send_regist__9TProtocolFv(void *proto);
void handle_regist_check__6TLobbyFi(s32 ok);
extern Rec_801378AC TLobby__data_80506A6C[];
extern s32 TLobby__data_805D5590;
extern s16 TLobby__data_805D558C;
extern s16 TLobby__data_805D558E;
extern s32 TLobby__data_805D53AC;
void copy_member_record__6TLobbyFPvPv(Rec_801378AC *dst, Rec_801378AC *src);
void add_lobby_members__6TLobbyFPvisi(Rec_801378AC *src, s32 n, s16 v, s32 w);
void dispatch_by_index__6TLobbyFi(s32 arg0);
void TLobby__sub_8013A170(const char *fmt, ...);
void send_packet_96(void *, s32, s32);
s32 increment_frame__23TAdSinglePlyChrSelectGCFv(void);
s32 get_player_count__23TAdSinglePlyChrSelectGCFv(void);
void store_serial_access_key__22TAdEnterSerialAccessGCFiii(void *, void *, void *);
extern char lbl_8043F028[];
extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D55BC;
extern s32 lbl_805D55C4;
void handle_login_result__6TLobbyFUi(u32 arg0);
u8 *get_card_window__17TWindowSubComCardFUi(u32);
void *memset(void *, int, u32);
char *strncpy(char *, const char *, u32);
s32 open_hard_keyboard__6TLobbyFPv(void *);
void TLobby__sub_80077798(void *, void *);
char *get_card_window_field__6TLobbyFv(void);
void collect_active_card_ids__6TLobbyFPv(void *);
s32 get_flag_bit0__6TLobbyFv(void);
char *get_card_window_area__6TLobbyFv(void);
void TLobby__sub_800703D0(void *, void *);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
void send_player_data_61__9TProtocolFPvPvPvPvPvPvPv(void *, void *, void *, void *, void *, void *, void *);
extern s32 lbl_805D53A0;
extern void *TLobby__data_805D5580;
void send_selected_character__6TLobbyFv(void);
void dispatch_by_index__6TLobbyFi(s32 arg0);
s32 get_option_state__6TLobbyFv(void);
void TLobby__sub_8013A170(const char *fmt, ...);
M2C_UNK send_login_9e_extended__6TLobbyFPvPvi(int, void *, int);
M2C_UNK send_register_9c(int);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
extern char lbl_8043F05C[];
extern void *TLobby__data_805D5580;
void handle_verify_result__6TLobbyFUi(u32 arg0);
void dispatch_by_index__6TLobbyFi(s32 arg0);
s32 get_option_state__6TLobbyFv(void);
void TLobby__sub_8013A170(const char *fmt, ...);
void *get_player_by_client_id(s32);
M2C_UNK send_login_9e_extended__6TLobbyFPvPvi(int, void *, int);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
extern char lbl_8043F038[];
extern char lbl_8043F044[];
extern s32 lbl_805D53A0;
extern void *TLobby__data_805D5580;
void handle_register_result__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_801366AC(Rec_801378AC *, s16, s16, s32);
M2C_UNK make_players__6TLobbyFv();
M2C_UNK drain_deferred_packets__6TLobbyFv();
extern Rec_801378AC TLobby__data_80506A6C[];
extern s32 TLobby__data_805D53AC;
extern void *TLobby__data_805D5580;
extern s16 TLobby__data_805D558C;
extern s16 TLobby__data_805D558E;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D55FC;
void process_deferred_player_setup__6TLobbyFv(void);
}

extern "C" {

void queue_static_object_destruction__6TLobbyFv(void);
void reset_state_flags__6TLobbyFv(void);
M2C_UNK buffer_reset();
M2C_UNK queue_destruction__7TObjectFv(s32);

extern s32 TLobby__data_805D5604;

void queue_static_object_destruction__6TLobbyFv(void) {
    queue_destruction__7TObjectFv(TLobby__data_805D5604);
}

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D55FC;

typedef struct {
    u32 kb;
    u8 pad[0x14];
} A_80137384;
typedef struct {
    u8 pad[0x4];
    u8 b[0x100];
    u16 h[7];
    u32 w0;
    u32 w1;
} D_80137384;
void send_selected_character__6TLobbyFv(void) {
    A_80137384 a;
    u8 b[0x7C];
    char c[0xAC];
    D_80137384 d;
    u8 e[0x204];
    u8 *card;
    card = get_card_window__17TWindowSubComCardFUi(0xFFFF);
    memset(&a, 0, sizeof(a));
    a.kb = open_hard_keyboard__6TLobbyFPv((void *)lbl_805D53A0) != 0 ? 1 : 0;
    TLobby__sub_80077798(card + 0x22EC, &a);
    memset(c, 0, sizeof(c));
    strncpy(c, get_card_window_field__6TLobbyFv(), 0xAC);
    memset(b, 0, sizeof(b));
    collect_active_card_ids__6TLobbyFPv(b);
    memset(e, 0, sizeof(e));
    if (get_flag_bit0__6TLobbyFv() != 0) {
        e[1] = 1;
        strncpy((char *)e + 4, get_card_window_area__6TLobbyFv(), 0x200);
    }
    memset(&d, 0, sizeof(d));
    TLobby__sub_800703D0(d.b, card + 0x21C4);
    d.h[0] = *(u16 *)(card + 0x21A8);
    d.h[1] = *(u16 *)(card + 0x21AA);
    d.h[2] = *(u16 *)(card + 0x21AC);
    d.h[3] = *(u16 *)(card + 0x21AE);
    d.h[4] = *(u16 *)(card + 0x21B0);
    d.h[5] = *(u16 *)(card + 0x21B2);
    d.h[6] = *(u16 *)(card + 0x21B4);
    d.w0 = *(u32 *)(card + 0x21B8);
    d.w1 = *(u32 *)(card + 0x21BC);
    send_player_data_61__9TProtocolFPvPvPvPvPvPvPv(TLobby__data_805D5580, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF), &d, &a, b, e, c);
}

void handle_login_result__6TLobbyFUi(u32 arg0) {
    s32 temp_r31;
    switch (arg0) {
    case 0:
        TLobby__sub_8013A170(lbl_8043F028);
        store_serial_access_key__22TAdEnterSerialAccessGCFiii((char *)TLobby__data_805D5580 + 0x3F8A, (char *)TLobby__data_805D5580 + 0x3F9B, (char *)TLobby__data_805D5580 + 0x3F3A);
        if (TLobby__data_805D55BC != 0) {
            temp_r31 = increment_frame__23TAdSinglePlyChrSelectGCFv();
            send_packet_96(TLobby__data_805D5580, get_player_count__23TAdSinglePlyChrSelectGCFv(), temp_r31);
            TLobby__data_805D55BC = 0;
        }
        break;
    case 1:
        ((void (*)(s32))reset_state__6TLobbyFv)(0xA);
        break;
    case 2:
        dispatch_by_index__6TLobbyFi(0);
        ((void (*)(s32))reset_state__6TLobbyFv)(0xB);
        break;
    case 3:
        dispatch_by_index__6TLobbyFi(2);
        ((void (*)(s32))reset_state__6TLobbyFv)(0xD);
        break;
    case 4:
        dispatch_by_index__6TLobbyFi(0);
        ((void (*)(s32))reset_state__6TLobbyFv)(0xE);
        break;
    case 5:
        dispatch_by_index__6TLobbyFi(0);
        ((void (*)(s32))reset_state__6TLobbyFv)(0xF);
        break;
    case 6:
        lbl_805D55C4 = 1;
        dispatch_by_index__6TLobbyFi(2);
        ((void (*)(s32))reset_state__6TLobbyFv)(0x50);
        break;
    default:
        ((void (*)(s32))reset_state__6TLobbyFv)(8);
        break;
    }
}

void handle_register_result__6TLobbyFi(s32 arg0) {
    s32 opt;
    if (arg0 != 0) {
        TLobby__sub_8013A170(lbl_8043F038);
        get_player_by_client_id(lbl_805D53A0);
        opt = get_option_state__6TLobbyFv();
        send_login_9e_extended__6TLobbyFPvPvi((int)TLobby__data_805D5580, (u8 *)get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370, opt);
        dispatch_by_index__6TLobbyFi(1);
        return;
    }
    TLobby__sub_8013A170(lbl_8043F044);
    dispatch_by_index__6TLobbyFi(2);
    ((void (*)(s32))reset_state__6TLobbyFv)(0x50);
}

void handle_register_name_result__6TLobbyFi(s32 ok) {
    if (ok) {
        TLobby__sub_8013A170(lbl_8043F038);
        send_login2__9TProtocolFi(TLobby__data_805D5580, get_option_state__6TLobbyFv());
    } else {
        TLobby__sub_8013A170(lbl_8043F044);
        dispatch_by_index__6TLobbyFi(2);
        ((void (*)(s32))reset_state__6TLobbyFv)(0xd);
    }
}

void handle_verify_result__6TLobbyFUi(u32 arg0) {
    s32 temp_r31;
    switch (arg0) {
    case 0:
    case 2:
        TLobby__sub_8013A170(lbl_8043F05C);
        dispatch_by_index__6TLobbyFi((int) (1));
        temp_r31 = get_option_state__6TLobbyFv();
        send_login_9e_extended__6TLobbyFPvPvi((int) (TLobby__data_805D5580), (void *) (((s32)get_char_index__23TAdSinglePlyChrSelectGCFUi((u32)(0xFFFF))) + 0x370), (int) (temp_r31));
        return;
    case 1:
        send_register_9c((int) (TLobby__data_805D5580));
        return;
    case 3:
        dispatch_by_index__6TLobbyFi((int) (0));
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x4E));
        return;
    case 4:
        dispatch_by_index__6TLobbyFi((int) (0));
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x4F));
        return;
    case 7:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1B));
        return;
    case 8:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1A));
        return;
    case 11:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x16));
        return;
    case 12:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x17));
        return;
    case 13:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x18));
        return;
    case 14:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x19));
        return;
    case 15:
    case 16:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x15));
        return;
    case 17:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1A));
        return;
    case 18:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1B));
        return;
    case 19:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1C));
        return;
    case 26:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1D));
        return;
    case 27:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1E));
        return;
    default:
        ((void (*)(s32))reset_state__6TLobbyFv)((int) (0x1D));
        return;
    }
}

void handle_regist_check__6TLobbyFi(s32 ok) {
    if (ok) {
        TLobby__sub_8013A170(lbl_8043F05C);
        send_login2__9TProtocolFi(TLobby__data_805D5580, get_option_state__6TLobbyFv());
    } else {
        send_regist__9TProtocolFv(TLobby__data_805D5580);
    }
}

void add_lobby_members__6TLobbyFPvisi(Rec_801378AC *src, s32 n, s16 v, s32 w) {
    s32 i;
    TLobby__data_805D5590 = 2;
    TLobby__data_805D558C = v;
    for (i = TLobby__data_805D558E; i < TLobby__data_805D558E + n; i++) {
        copy_member_record__6TLobbyFPvPv(&TLobby__data_80506A6C[i], &src[i]);
    }
    TLobby__data_805D558E += n;
    TLobby__data_805D53AC = w;
}

void process_deferred_player_setup__6TLobbyFv(void) {
    TLobby__data_805D55FC = 0;
    switch (TLobby__data_805D5590) {
    case 1:
    case 2:
        TLobby__sub_801366AC(TLobby__data_80506A6C, TLobby__data_805D558E, TLobby__data_805D558C, TLobby__data_805D53AC);
        break;
    case 3:
    case 4:
        make_players__6TLobbyFv();
        break;
    case 5:
        ((M2C_UNK (*)())TLobby__sub_801384E4)();
        break;
    }
    if (TLobby__data_805D5580 != NULL) {
        M2C_FIELD(TLobby__data_805D5580, s32 *, 0x191C) = 0;
        drain_deferred_packets__6TLobbyFv();
    }
    TLobby__data_805D5590 = 0;
    TLobby__data_805D558E = 0;
    TLobby__data_805D558C = 0;
}

void reset_state_flags__6TLobbyFv(void) {
    buffer_reset();
    M2C_FIELD(TLobby__data_805D5580, s32 *, 0x191C) = 1;
    TLobby__data_805D55FC = 1;
    if ((s32) TLobby__data_805D5594 == 0xC) {
        TLobby__data_805D5590 = 5;
        TLobby__data_805D5594 = 0x17;
    }
    TLobby__data_805D55D8 = 0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80137B50___vt__6TLobby {
    M2C_UNK value;
    u8 remaining[0x14];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80137C10 { s32 a; s32 b; };

extern "C" {
s32 __dt__7TObjectFv(void *, int);
void destroy_all_objects__6TLobbyFv(void);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80137B50___vt__6TLobby __vt__6TLobby;
extern s32 TLobby__data_805D4E30;
extern s32 TLobby__data_805D5584;
extern s32 TLobby__data_805D5588;
extern s16 TLobby__data_805D558C;
extern s16 TLobby__data_805D558E;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D5598;
extern s32 TLobby__data_805D559C;
extern s32 lbl_805D55A0;
extern s32 TLobby__data_805D55A4;
extern s32 TLobby__data_805D55A8;
extern s32 TLobby__data_805D55AC;
extern s32 TLobby__data_805D55B0;
extern s32 TLobby__data_805D55B4;
extern s32 TLobby__data_805D55B8;
extern s32 TLobby__data_805D55BC;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D55FC;
extern s32 lbl_805D5600;
extern s32 TLobby__data_805D5604;
u8 *__dt__6TLobbyFv(u8 *arg0, s16 arg1);
extern u32 TLobby__data_805D55CC;
extern s32 TLobby__data_805D5594;
extern const Pair_80137C10 lbl_8043EE00[];
s32 get_window_layout_position(s32);
void TQuestListOnline__sub_8013ACF4(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
void TLobby__sub_80137C10(s32 arg0);
}

extern "C" {

void destroy_all_objects__6TLobbyFv(void);
void init_player_window_effect__6TLobbyFv(void);
void update_com_card_window__6TLobbyFv(void);
void update_player_window__6TLobbyFv(void);
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
M2C_UNK unsuppress_slot__11TWindowCtrlFi(s32);
s32 get_selected_menu_value(void*);
M2C_UNK clear_lobby_flag__10TObjPlayerFPv();
void close_all_windows__6TLobbyFv(void);
M2C_UNK send_lobby_arrow__9TProtocolFUc(s32, s32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
M2C_UNK init_effect_5f0__10TObjPlayerFPv();
s32 is_visible__17TWindowSubComCardFPv(u32);

extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 lbl_805D55D4;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void destroy_all_objects__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55C8 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)TLobby__data_805D55C8);
        TLobby__data_805D55C8 = 0U;
    }
    if ((u32) TLobby__data_805D55CC != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)TLobby__data_805D55CC);
        TLobby__data_805D55CC = 0U;
    }
    if ((u32) TLobby__data_805D55D0 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0U;
    }
    if ((u32) lbl_805D55D4 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)lbl_805D55D4);
        lbl_805D55D4 = 0U;
    }
    if ((u32) (*(u32 *)&TLobby__data_805D55D8) != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)(*(u32 *)&TLobby__data_805D55D8));
        (*(u32 *)&TLobby__data_805D55D8) = 0U;
    }
    if ((u32) TLobby__data_805D55DC != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)TLobby__data_805D55DC);
        TLobby__data_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)lbl_805D55E0);
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)lbl_805D55E4);
        lbl_805D55E4 = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)lbl_805D55EC);
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)lbl_805D55F0);
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)lbl_805D55F4);
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        ((void (*)(void*))queue_destruction__7TObjectFv)((void*)lbl_805D55F8);
        lbl_805D55F8 = 0U;
    }
}

extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_80137B50___vt__6TLobby_size[sizeof(RecoveredGlobal_80137B50___vt__6TLobby) == 0x18 ? 1 : -1];
u8 *__dt__6TLobbyFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__6TLobby.value;
        destroy_all_objects__6TLobbyFv();
        (*(s32 *)&TLobby__data_805D5580) = 0;
        TLobby__data_805D5584 = 0;
        TLobby__data_805D5588 = 0;
        TLobby__data_805D558C = 0;
        TLobby__data_805D558E = 0;
        TLobby__data_805D5590 = 0;
        TLobby__data_805D5594 = 0;
        TLobby__data_805D5598 = 1;
        TLobby__data_805D559C = 0;
        lbl_805D55A0 = 0;
        TLobby__data_805D55A4 = 0;
        TLobby__data_805D55A8 = 0;
        TLobby__data_805D55AC = 0;
        TLobby__data_805D55B0 = 0;
        TLobby__data_805D55B4 = 0;
        TLobby__data_805D55B8 = 0;
        TLobby__data_805D55BC = 1;
        lbl_805D55C0 = 0;
        TLobby__data_805D55FC = 0;
        lbl_805D5600 = 0;
        TLobby__data_805D5604 = 0;
        TLobby__data_805D4E30 = 0;
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void TLobby__sub_80137C10(s32 arg0) {
    if (TLobby__data_805D55CC == 0) {
        Pair_80137C10 tmp = lbl_8043EE00[0];
        TLobby__data_805D55CC = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc6), &tmp);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55CC, arg0, 3);
    TLobby__data_805D5594 = 0x14;
    TQuestListOnline__sub_8013ACF4(0xb);
}

void update_player_window__6TLobbyFv(void) {
    if (((u32 (*)(s32))get_player_by_client_id)(lbl_805D53A0) != 0U) {
        clear_lobby_flag__10TObjPlayerFPv();
    }
    unsuppress_slot__11TWindowCtrlFi(lbl_805D53A0);
}

extern s32 lbl_805D53A0;

void init_player_window_effect__6TLobbyFv(void) {
    if (((u32 (*)(s32))get_player_by_client_id)(lbl_805D53A0) != 0U) {
        init_effect_5f0__10TObjPlayerFPv();
    }
    suppress_slot__11TWindowCtrlFi(lbl_805D53A0);
}

extern u32 lbl_805D55E4;

void update_com_card_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = get_selected_menu_value((void*)lbl_805D55E4);
        if (is_visible__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            send_lobby_arrow__9TProtocolFUc((*(s32 *)&(*(s32 *)&TLobby__data_805D5580)), temp_r31);
            close_all_windows__6TLobbyFv();
            return;
        }
        if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_city_warp_menu__6TLobbyFv(void);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK get_window_layout_position(M2C_UNK);

extern s32 TLobby__data_805D5594;

void open_city_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv((*(s32 *)&lbl_805D55E0));
    temp_r3 = get_window_layout_position(0xB5);
    (*(s32 *)&lbl_805D55E4) = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x4C), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x48), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x49), 6, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x4A), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x4B), 6, 4);
    calc_window_size__17TWindowSubComCardFPv((*(s32 *)&lbl_805D55E4));
    align_menu_entry_positions((*(s32 *)&lbl_805D55E4));
    set_ready_flag__18TCheckRoomSequenceFPv((*(s32 *)&lbl_805D55E4));
    TLobby__data_805D5594 = 0x19;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_set_state_12__6TLobbyFv(void);
void open_keyboard_window__6TLobbyFv(void);
void send_room_change__6TLobbyFi(s32 arg0);
s32 TKeyBoardControl__ct(s32, s32, s32, s32, s32, s32);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK TWindow__close(u32);
s32 __nw__7TObjectFUl(M2C_UNK);
void close_all_windows__6TLobbyFv(void);
M2C_UNK fn_80131B18(s32, s32);
M2C_UNK send_room_change__9TProtocolFi(s32, s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);

extern s32 TLobby__data_805D5588;
extern s32 TLobby__data_805D5594;

void send_room_change__6TLobbyFi(s32 arg0) {
    TLobby__data_805D5588 = 1;
    ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
    send_room_change__9TProtocolFi((*(s32 *)&TLobby__data_805D5580), arg0);
    TLobby__data_805D5594 = 0x13;
}

extern s32 TLobby__data_805D5594;

void close_and_set_state_12__6TLobbyFv(void) {
    close_all_windows__6TLobbyFv();
    ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
    TLobby__data_805D5594 = 0x12;
}

extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5594;
extern u32 lbl_805D55F0;
extern s32 TLobby__data_805D5604;
extern M2C_UNK *lbl_805D5614;
extern u8 lbl_805D5618;
extern M2C_UNK lbl_805DB0B4;

void open_keyboard_window__6TLobbyFv(void) {
    s32 var_r0;
    s32 tmp_r3;

    if ((u32) (*(u32 *)&TLobby__data_805D55D8) != 0U) {
        TWindow__close((*(u32 *)&TLobby__data_805D55D8));
        (*(u32 *)&TLobby__data_805D55D8) = 0U;
    }
    if ((u32) lbl_805D55F0 == 0U) {
        if ((s8) lbl_805D5618 == 0) {
            lbl_805D5614 = &lbl_805DB0B4;
            lbl_805D5618 = 1;
        }
        tmp_r3 = get_window_layout_position(0xC3);
        lbl_805D55F0 = ((u32 (*)(s32, M2C_UNK))check_room_seq_4__16TAdChrSelASlotGCFii)(tmp_r3, 2);
        ((M2C_UNK (*)(u32, M2C_UNK *, M2C_UNK, M2C_UNK))forward_trade_action_default__16TObjCityMainWarpFPviii)(lbl_805D55F0, ((M2C_UNK * (*)(M2C_UNK))get_seq_phase__6TLobbyFPv)(0x44), 2, 0);
        ((M2C_UNK (*)(u32, M2C_UNK *, M2C_UNK, M2C_UNK))forward_trade_action_default__16TObjCityMainWarpFPviii)(lbl_805D55F0, lbl_805D5614, 2, 1);
        ((M2C_UNK (*)(u32))calc_window_size__17TWindowSubComCardFPv)(lbl_805D55F0);
        ((M2C_UNK (*)(u32))align_menu_entry_positions)(lbl_805D55F0);
        set_flag_40__16TAdChrSelASlotGCFPv(lbl_805D55F0);
    }
    var_r0 = __nw__7TObjectFUl(0x2C);
    if (var_r0 != 0) {
        var_r0 = TKeyBoardControl__ct(var_r0, TLobby__data_805D5604, 0x10, 0, 0, lbl_805D53A0);
    }
    (*(s32 *)&lbl_805D55F4) = var_r0;
    set_sub_position__15TWindowMakeTeamFPvPv((*(s32 *)&lbl_805D55F4), get_window_layout_position(0xC4));
    fn_80131B18((*(s32 *)&lbl_805D55F4), get_window_layout_position(0xC5));
    TLobby__data_805D5594 = 9;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_send_text_list__6TLobbyFv(void);
void close_all_windows__6TLobbyFv(void);
M2C_UNK send_text_list__9TProtocolFv(s32);

void close_and_send_text_list__6TLobbyFv(void) {
    close_all_windows__6TLobbyFv();
    ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
    send_text_list__9TProtocolFv((*(s32 *)&TLobby__data_805D5580));
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_menu_windows__6TLobbyFv(void);
extern void open_ship_block_select_menu__6TLobbyFiPvPv(void);
M2C_UNK fn_801DB760(void *);

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;

void close_menu_windows__6TLobbyFv(void) {
    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(6);
    ((M2C_UNK (*)(s32))TWindow__close)((*(s32 *)&lbl_805D55E0));
    (*(s32 *)&lbl_805D55E0) = 0;
    ((M2C_UNK (*)(s32))TWindow__close)((*(s32 *)&lbl_805D55E4));
    (*(s32 *)&lbl_805D55E4) = 0;
    M2C_FIELD(TLobby__data_805D5580, void **, 0xBBE4) = (void *)open_ship_block_select_menu__6TLobbyFiPvPv;
    fn_801DB760(TLobby__data_805D5580);
    TLobby__data_805D5594 = 8;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void return_to_main_menu__6TLobbyFv(void);
void open_ship_block_select_menu__6TLobbyFiPvPv();
M2C_UNK TWindow__close(u32);
M2C_UNK fn_801DB7EC(void *);

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;

void return_to_main_menu__6TLobbyFv(void) {
    u32 t;

    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(6);
    t = lbl_805D55E0;
    if (t != 0U) {
        TWindow__close(t);
        lbl_805D55E0 = 0U;
    }
    t = lbl_805D55E4;
    if (t != 0U) {
        TWindow__close(t);
        lbl_805D55E4 = 0U;
    }
    t = TLobby__data_805D55CC;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55CC = 0U;
    }
    t = TLobby__data_805D55C8;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55C8 = 0U;
    }
    t = TLobby__data_805D55D0;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55D0 = 0U;
    }
    M2C_FIELD(TLobby__data_805D5580, void **, 0xBBE4) = (void *)&open_ship_block_select_menu__6TLobbyFiPvPv;
    fn_801DB7EC(TLobby__data_805D5580);
    TLobby__data_805D5594 = 7;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int close_all_windows__6TLobbyFPv(void* p);
void open_warp_menu__6TLobbyFv(void);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(s32);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);

extern s32 TLobby__data_805D5594;

void open_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv((*(s32 *)&lbl_805D55E0));
    temp_r3 = get_window_layout_position(0xB5);
    (*(s32 *)&lbl_805D55E4) = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x3E), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x3F), 6, 1);
    calc_window_size__17TWindowSubComCardFPv((*(s32 *)&lbl_805D55E4));
    align_menu_entry_positions((*(s32 *)&lbl_805D55E4));
    set_ready_flag__18TCheckRoomSequenceFPv((*(s32 *)&lbl_805D55E4));
    TLobby__data_805D5594 = 5;
}

int close_all_windows__6TLobbyFPv(void* p) { return ((int (*)(void*))close_all_windows__6TLobbyFv)(p); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_make_team_window__6TLobbyFi(s32 arg0);
s32 TWindowMakeTeam__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D5604;

void open_make_team_window__6TLobbyFi(s32 arg0) {
    s32 var_r4;

    var_r4 = __nw__7TObjectFUl(0x38);
    if (var_r4 != 0) {
        var_r4 = TWindowMakeTeam__ct(var_r4, TLobby__data_805D5604, arg0);
    }
    (*(s32 *)&lbl_805D55EC) = var_r4;
    TLobby__data_805D5594 = 0xA;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu_window__6TLobbyFv(void);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(s32, M2C_UNK);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, s32);
M2C_UNK get_window_layout_position(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern u32 lbl_805D55E4;
extern s32 lbl_805D55E8;

void open_menu_window__6TLobbyFv(void) {
    u32 tmp_e4 = lbl_805D55E4;
    if (tmp_e4 != 0U) {
        ((M2C_UNK (*)(u32))open__17TWindowOptionCtrlFPv)(tmp_e4);
    }
    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(0x11);
    lbl_805D55E8 = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0xB6), 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E8, get_seq_phase__6TLobbyFPv(0x45), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E8, get_seq_phase__6TLobbyFPv(0x46), 6, 1);
    calc_window_size__17TWindowSubComCardFPv(lbl_805D55E8);
    align_menu_entry_positions(lbl_805D55E8);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E8);
    set_selected_index__17TWindowSubComCardFPvs(lbl_805D55E8, 0);
    TLobby__data_805D5594 = 0x18;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_game_list__6TLobbyFv(void);
M2C_UNK send_game_list__9TProtocolFv(s32);

extern s32 TLobby__data_805D5594;

void request_game_list__6TLobbyFv(void) {
    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(4);
    if ((void *) (*(void * *)&lbl_805D55E0) != 0) {
        ((M2C_UNK (*)(void*))TWindow__close)((*(void * *)&lbl_805D55E0));
        (*(void * *)&lbl_805D55E0) = 0;
    }
    if ((void *) (*(void * *)&lbl_805D55E4) != 0) {
        ((M2C_UNK (*)(void*))TWindow__close)((*(void * *)&lbl_805D55E4));
        (*(void * *)&lbl_805D55E4) = 0;
    }
    send_game_list__9TProtocolFv((*(s32 *)&TLobby__data_805D5580));
    TLobby__data_805D5594 = 6;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TLobby__sub_80139894(s32 arg0);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK reparent_to_main_ctrl__17TWindowSubComCardFi(s32);
int sprintf(char *, const char *, ...);
extern char lbl_80509D3C[];
extern char lbl_8050AC38[];
extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D55FC;
}

extern "C" {

void close_and_set_state_13__6TLobbyFv(void);
void create_warp_menu__6TLobbyFv(void);
void open_lobby_warp_menu__6TLobbyFv(void);
void update_state__6TLobbyFv(void);
M2C_UNK reparent_to_main_ctrl__17TWindowSubComCardFi(s32);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(s32);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);

extern s32 TLobby__data_805D5594;

void create_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv((*(s32 *)&lbl_805D55E0));
    temp_r3 = get_window_layout_position(0xB5);
    (*(s32 *)&lbl_805D55E4) = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x39), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&lbl_805D55E4), get_seq_phase__6TLobbyFPv(0x3A), 6, 1);
    calc_window_size__17TWindowSubComCardFPv((*(s32 *)&lbl_805D55E4));
    align_menu_entry_positions((*(s32 *)&lbl_805D55E4));
    set_ready_flag__18TCheckRoomSequenceFPv((*(s32 *)&lbl_805D55E4));
    TLobby__data_805D5594 = 4;
}

extern s32 TLobby__data_805D5594;

void close_and_set_state_13__6TLobbyFv(void) {
    ((M2C_UNK (*)())TLobby__sub_801397E8)();
    ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
    TLobby__data_805D5594 = 0xD;
}

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;

void reset_state__6TLobbyFv(void) {
    ((M2C_UNK (*)())TLobby__sub_801397E8)();
    ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
    TLobby__data_805D55B4 = 0;
    TLobby__data_805D5594 = 0xC;
    lbl_805D55C0 = 1;
}

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D55FC;

void update_state__6TLobbyFv(void) {
    if ((u32) (*(u32 *)&(*(u32 *)&TLobby__data_805D5604)) != 0U) {
        if ((s32) TLobby__data_805D55FC == 0) {
            if ((s32) TLobby__data_805D5594 != 0xC) {
                ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(0x21);
                reparent_to_main_ctrl__17TWindowSubComCardFi(TLobby__data_805D55D8);
                ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
                TLobby__data_805D55B4 = 0;
                TLobby__data_805D5594 = 0xC;
                if ((void *) TLobby__data_805D5580 != NULL) {
                    M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) = (u8) (M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) | 1);
                }
            }
        } else {
            TLobby__data_805D5590 = 5;
            TLobby__data_805D5594 = 0x17;
        }
        lbl_805D55C0 = 1;
    }
}

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B0;

void TLobby__sub_801384E4(void) {
    if ((u32) (*(u32 *)&(*(u32 *)&TLobby__data_805D5604)) != 0U) {
        if ((s32) TLobby__data_805D55FC == 0) {
            if ((s32) TLobby__data_805D5594 != 0xC) {
                sprintf(lbl_8050AC38, (const char *)get_seq_phase__6TLobbyFPv(7), lbl_80509D3C);
                TLobby__sub_80139894((s32)lbl_8050AC38);
                reparent_to_main_ctrl__17TWindowSubComCardFi(TLobby__data_805D55D8);
                ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
                TLobby__data_805D55B4 = 0;
                TLobby__data_805D5594 = 0xC;
                if ((void *) TLobby__data_805D5580 != NULL) {
                    M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) = (u8) (M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) | 1);
                }
            }
        } else {
            TLobby__data_805D5590 = 5;
            TLobby__data_805D5594 = 0x17;
        }
        lbl_805D55C0 = 1;
    }
}

void open_lobby_warp_menu__6TLobbyFv(void) {
    M2C_UNK temp_r3;
    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(3);
    temp_r3 = get_window_layout_position(0xB4);
    if ((s32) TLobby__data_805D55B0 < 0xD) {
        (*(s32 *)&(*(s32 *)&lbl_805D55E0)) = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&(*(s32 *)&lbl_805D55E0)), get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&(*(s32 *)&lbl_805D55E0)), get_seq_phase__6TLobbyFPv(0x36), 6, 1);
    } else {
        (*(s32 *)&(*(s32 *)&lbl_805D55E0)) = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&(*(s32 *)&lbl_805D55E0)), get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&(*(s32 *)&lbl_805D55E0)), get_seq_phase__6TLobbyFPv(0x36), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii((*(s32 *)&(*(s32 *)&lbl_805D55E0)), get_seq_phase__6TLobbyFPv(0x47), 6, 3);
    }
    calc_window_size__17TWindowSubComCardFPv((*(s32 *)&(*(s32 *)&lbl_805D55E0)));
    align_menu_entry_positions((*(s32 *)&(*(s32 *)&lbl_805D55E0)));
    set_ready_flag__18TCheckRoomSequenceFPv((*(s32 *)&(*(s32 *)&lbl_805D55E0)));
    ((M2C_UNK (*)())init_player_window_effect__6TLobbyFv)();
    TLobby__data_805D5594 = 3;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_lobby_ui__6TLobbyFv(void);
void set_menu_mode_0__6TLobbyFv(void);
void set_menu_mode_1__6TLobbyFv(void);
void set_menu_mode_2__6TLobbyFv(void);

extern s32 TLobby__data_805D5594;

void set_menu_mode_2__6TLobbyFv(void) {
    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(2);
    TLobby__data_805D5594 = 0x15;
}

extern s32 TLobby__data_805D5594;

void set_menu_mode_1__6TLobbyFv(void) {
    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(1);
    TLobby__data_805D5594 = 1;
}

extern s32 TLobby__data_805D5594;

void set_menu_mode_0__6TLobbyFv(void) {
    ((M2C_UNK (*)(M2C_UNK))show_seq_phase_message__6TLobbyFi)(0);
    TLobby__data_805D5594 = 1;
}

extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F8;

void destroy_lobby_ui__6TLobbyFv(void) {
    void *temp;
    temp = (void*)(u32)TLobby__data_805D55C8;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        TLobby__data_805D55C8 = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55CC;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        TLobby__data_805D55CC = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55D0;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        TLobby__data_805D55D0 = 0U;
    }
    temp = (void*)(u32)(*(u32 *)&TLobby__data_805D55D8);
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        (*(u32 *)&TLobby__data_805D55D8) = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55DC;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        TLobby__data_805D55DC = 0U;
    }
    temp = (void*)(u32)lbl_805D55E0;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        lbl_805D55E0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55E4;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        lbl_805D55E4 = 0U;
    }
    temp = (void*)(u32)(*(u32 *)&lbl_805D55E8);
    if (temp != 0) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(temp));
        (*(u32 *)&lbl_805D55E8) = 0U;
    }
    temp = (void*)(u32)lbl_805D55EC;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *)(temp));
        lbl_805D55EC = 0U;
    }
    temp = (void*)(u32)lbl_805D55F0;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *)(temp));
        lbl_805D55F0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55F8;
    if (temp != 0) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *)(temp));
        lbl_805D55F8 = 0U;
    }
    TLobby__data_805D5594 = 0xE;
}

extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void close_all_windows__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55C8 != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(TLobby__data_805D55C8));
        TLobby__data_805D55C8 = 0U;
    }
    if ((u32) TLobby__data_805D55CC != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(TLobby__data_805D55CC));
        TLobby__data_805D55CC = 0U;
    }
    if ((u32) TLobby__data_805D55D0 != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(TLobby__data_805D55D0));
        TLobby__data_805D55D0 = 0U;
    }
    if ((u32) (*(u32 *)&(*(u32 *)&TLobby__data_805D55D8)) != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)((*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))));
        (*(u32 *)&(*(u32 *)&TLobby__data_805D55D8)) = 0U;
    }
    if ((u32) TLobby__data_805D55DC != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(TLobby__data_805D55DC));
        TLobby__data_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(lbl_805D55E0));
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)(lbl_805D55E4));
        lbl_805D55E4 = 0U;
    }
    if ((u32) (*(u32 *)&(*(u32 *)&lbl_805D55E8)) != 0U) {
        ((M2C_UNK (*)(void *))TWindow__close)((void *)((*(u32 *)&(*(u32 *)&lbl_805D55E8))));
        (*(u32 *)&(*(u32 *)&lbl_805D55E8)) = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *)(lbl_805D55EC));
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *)(lbl_805D55F0));
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *)(lbl_805D55F4));
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        ((M2C_UNK (*)(void *))queue_destruction__7TObjectFv)((void *)(lbl_805D55F8));
        lbl_805D55F8 = 0U;
    }
    ((M2C_UNK (*)())update_player_window__6TLobbyFv)();
    TLobby__data_805D5594 = 0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Entry_80138B7C { u8 b[0x1C]; };

struct Card_80138B7C { u8 b[0x98]; };

struct Lobby_80138B7C { u8 pad[0x2C68]; Card_80138B7C cards[1]; };

extern "C" {
void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
void return_to_main_menu__6TLobbyFv(void);
void close_all_windows__6TLobbyFv(void);
s32 get_status_flag__6TLobbyFPv(u32);
void send_info__9TProtocolFR16TPlyGuildCardTag(s32, void *);
void send_action__9TProtocolFR13GameListEntryPcPc(s32, void *, void *, void *);
M2C_UNK TWindow__close(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
M2C_UNK complete_reveal__14TWindowMessageFPv(u32);
extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D55A4;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern char TLobby__data_805DB0B0[4];
void update_card_list_window__6TLobbyFv(void);
}

extern "C" {

void update_scroll_close__6TLobbyFv(void);
void handle_short_list_input__6TLobbyFv(void);
void update_short_list__6TLobbyFv(void);
M2C_UNK close__14TAdScrollWinGCFPv(u32);
void close_all_windows__6TLobbyFv(void);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK reset_controller_input_state();
M2C_UNK send_message_box_closed__9TProtocolFv(s32);
s32 is_message_window_ready(u32);
M2C_UNK complete_reveal__14TWindowMessageFPv(u32);

extern s8 lbl_8050E208[];
extern u32 lbl_805D55F8;

void update_scroll_close__6TLobbyFv(void) {
    if ((u32) lbl_805D55F8 != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 0xE) != 0) {
            close__14TAdScrollWinGCFPv(lbl_805D55F8);
            lbl_805D55F8 = 0U;
            ((M2C_UNK (*)())destroy_lobby_ui__6TLobbyFv)();
            reset_controller_input_state();
            send_message_box_closed__9TProtocolFv((*(s32 *)&(*(s32 *)&TLobby__data_805D5580)));
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55DC;

void handle_short_list_input__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) TLobby__data_805D55DC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (is_message_window_ready(TLobby__data_805D55DC) == 0) {
                complete_reveal__14TWindowMessageFPv(TLobby__data_805D55DC);
            } else {
                TWindow__close(TLobby__data_805D55DC);
                TLobby__data_805D55DC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(TLobby__data_805D55DC);
            TLobby__data_805D55DC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    reset_controller_input_state();
}

extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55CC;

void update_short_list__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) TLobby__data_805D55CC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (is_message_window_ready(TLobby__data_805D55CC) == 0) {
                complete_reveal__14TWindowMessageFPv(TLobby__data_805D55CC);
            } else {
                TWindow__close(TLobby__data_805D55CC);
                TLobby__data_805D55CC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(TLobby__data_805D55CC);
            TLobby__data_805D55CC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    reset_controller_input_state();
}
void update_card_list_window__6TLobbyFv(void) {
    s32 sel;
    u32 btn;
    if (TLobby__data_805D55D0 == 0) {
        return;
    }
    if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
        Entry_80138B7C e;
        sel = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
        TWindow__close(TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0;
        ((void (*)(void *))__ct__13GameListEntryFv)(&e);
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&e, &((Lobby_80138B7C *)(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))->cards[sel]);
        send_action__9TProtocolFR13GameListEntryPcPc((*(s32 *)&(*(s32 *)&TLobby__data_805D5580)), &e, TLobby__data_805DB0B0, TLobby__data_805DB0B0);
        if (TLobby__data_805D55C8 != 0) {
            TWindow__close(TLobby__data_805D55C8);
            TLobby__data_805D55C8 = 0;
        }
        close_all_windows__6TLobbyFv();
        return;
    }
    if (TLobby__data_805D55CC != 0) {
        sel = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
        if (sel != TLobby__data_805D55A4) {
            ((void (*)(u32, void *, s32))send_and_handle__6TLobbyFPvii)(TLobby__data_805D55CC, &((Lobby_80138B7C *)(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))->cards[sel].b[0x28], 3);
            complete_reveal__14TWindowMessageFPv(TLobby__data_805D55CC);
            if (TLobby__data_805D55C8 != 0) {
                TWindow__close(TLobby__data_805D55C8);
                TLobby__data_805D55C8 = 0;
            }
            TLobby__data_805D55A4 = sel;
            return;
        }
    }
    btn = (*(u32 **)lbl_8050E208)[4];
    if (btn & 0x400) {
        Entry_80138B7C e2;
        sel = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
        ((void (*)(void *))__ct__13GameListEntryFv)(&e2);
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&e2, &((Lobby_80138B7C *)(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))->cards[sel]);
        send_info__9TProtocolFR16TPlyGuildCardTag((*(s32 *)&(*(s32 *)&TLobby__data_805D5580)), &e2);
    } else if (btn & 2) {
        if (TLobby__data_805D55C8 != 0) {
            TWindow__close(TLobby__data_805D55C8);
            TLobby__data_805D55C8 = 0;
        } else {
            return_to_main_menu__6TLobbyFv();
        }
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GLE_80138D3C_80137188 { char pad[0x1c]; };
struct GBig_80138D3C_80137188 { char pad[0x1da8]; GLE_80138D3C_80137188 arr[1]; };

extern "C" {
void open_make_team_window__6TLobbyFi(s32);
void close_all_windows__6TLobbyFv(void);
void close_com_card_window__6TLobbyFv(void);
s32 get_selected_menu_value(void *);
extern s32 lbl_805D560C;
extern u8 lbl_805D5610;
void update_make_team_menu__6TLobbyFv(void);
}

extern "C" {

void handle_comcard_window__6TLobbyFv(void);
M2C_UNK __ct__16TPlyGuildCardTagFv();
void close_all_windows__6TLobbyFv(void);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 is_keyboard_active__17TWindowSubComCardFPv(u32);
s32 realloc_buffer__17TWindowSubComCardFPv(u32);
s32 update_keyboard__17TWindowSubComCardFPv(u32);

s32 __ct__13GameListEntryFv(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}

extern u32 lbl_805D55F4;
extern s32 lbl_805D5600;

void handle_comcard_window__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55F4 != 0U) {
        if (is_keyboard_active__17TWindowSubComCardFPv(lbl_805D55F4) != 0) {
            ((M2C_UNK (*)(u32))queue_destruction__7TObjectFv)(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            close_all_windows__6TLobbyFv();
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv(lbl_805D55F4) != 0) {
            temp_r3 = realloc_buffer__17TWindowSubComCardFPv(lbl_805D55F4);
            ((M2C_UNK (*)(GBig_80138D3C_80137188 *, GLE_80138D3C_80137188 *, M2C_UNK *, s32, GBig_80138D3C_80137188 *))send_action__9TProtocolFR13GameListEntryPcPc)((*(GBig_80138D3C_80137188 * *)&TLobby__data_805D5580), &(*(GBig_80138D3C_80137188 * *)&TLobby__data_805D5580)->arr[lbl_805D5600], &(*(M2C_UNK *)&TLobby__data_805DB0B0), temp_r3, (*(GBig_80138D3C_80137188 * *)&TLobby__data_805D5580));
            free__11TOBoss4RockFUi(temp_r3);
            ((M2C_UNK (*)(u32))queue_destruction__7TObjectFv)(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            ((M2C_UNK (*)(s32))TWindow__close)((*(s32 *)&lbl_805D55F0));
            (*(s32 *)&lbl_805D55F0) = 0;
            ((M2C_UNK (*)())destroy_lobby_ui__6TLobbyFv)();
        }
    }
}
void update_make_team_menu__6TLobbyFv(void) {
    s32 temp_r3;
    if ((s8) lbl_805D5610 == 0) {
        lbl_805D560C = 0;
        lbl_805D5610 = 1;
    }
    if ((void *) (*(u8 * *)&lbl_805D55E8) != NULL) {
        temp_r3 = get_selected_menu_value((*(u8 * *)&lbl_805D55E8));
        if ((s32) lbl_805D560C != temp_r3) {
            lbl_805D560C = temp_r3;
            switch (temp_r3) {
            case 0:
                ((void (*)(s32))show_seq_phase_message__6TLobbyFi)(0x11);
                break;
            case 1:
                ((void (*)(s32))show_seq_phase_message__6TLobbyFi)(0x12);
                break;
            }
        }
        if (((int (*)(void *))is_visible__17TWindowSubComCardFPv)((*(u8 * *)&lbl_805D55E8)) != 0) {
            ((M2C_UNK (*)(s32))TWindow__close)((s32)((*(u8 * *)&lbl_805D55E8)));
            (*(u8 * *)&lbl_805D55E8) = NULL;
            close_com_card_window__6TLobbyFv();
            if ((void *) (*(u8 * *)&lbl_805D55E0) != NULL) {
                ((M2C_UNK (*)(s32))TWindow__close)((s32)((*(u8 * *)&lbl_805D55E0)));
                (*(u8 * *)&lbl_805D55E0) = NULL;
            }
            if ((void *) (*(u8 * *)&lbl_805D55E4) != NULL) {
                ((M2C_UNK (*)(s32))TWindow__close)((s32)((*(u8 * *)&lbl_805D55E4)));
                (*(u8 * *)&lbl_805D55E4) = NULL;
            }
            switch (temp_r3) {
            case 0:
                open_make_team_window__6TLobbyFi(1);
                return;
            case 1:
                open_make_team_window__6TLobbyFi(2);
                return;
            }
        } else if (((int (*)(void *))get_status_flag__17TWindowSubComCardFPv)((*(u8 * *)&lbl_805D55E8)) != 0) {
            close_all_windows__6TLobbyFv();
        }
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pad_80139094 { u8 pad[0x10]; u32 flags; };

struct Pad_80139104 { u8 pad[0x10]; u32 flags; };

struct Ent_80139104 { u8 b[0x1C]; };

struct Lst_80139104 { u8 pad[0x1DA8]; Ent_80139104 e[1]; };

struct Pad_801391BC { u8 pad[0x10]; u32 flags; };

struct Ent_801391BC { u8 b[0x1C]; };

struct Lst_801391BC { u8 pad[0x1DA8]; Ent_801391BC e[1]; };

typedef s32 M2C_UNK;
struct Ent_801392F8 { u8 b[0x1B]; u8 flags; };

struct Lst_801392F8 { u8 pad[0x1920]; s32 count; u8 pad2[0x1DA8 - 0x1924]; Ent_801392F8 e[1]; };

struct Pad_801392F8 { u8 pad[0x10]; u32 flags; };

extern "C" {
extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D55B4;
void init__23TAdSinglePlyChrSelectGCFv(void);
void TKeyBoardControl__sub_8000F91C(s32);
void TKeyBoardControl__sub_8000F9CC(s32);
void TLobby__sub_80139094(void *self);
void close_and_set_state_12__6TLobbyFv();
s32 get_status_flag__6TLobbyFPv(u32);
M2C_UNK TWindow__close(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern char lbl_8043F06C[];
extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55D0;
void update_block_jump_list__6TLobbyFv(void);
void close_and_set_state_12__6TLobbyFv();
s32 get_status_flag__6TLobbyFPv(u32);
M2C_UNK TWindow__close(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern char lbl_8043F078[];
extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55D0;
void update_ship_select_window__6TLobbyFv(void);
void close_all_windows__6TLobbyFv(void);
s32 get_status_flag__6TLobbyFPv(u32);
s32 get_flag_bit2__6TLobbyFPv(u32);
M2C_UNK TWindow__close(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55D0;
extern s32 lbl_805D5600;
void update_game_list_menu__6TLobbyFv(void);
}

extern "C" {

void handle_com_card__6TLobbyFv(void);
void handle_create_game_window__6TLobbyFv(void);
void update__6TLobbyFv(void);
M2C_UNK reset_controller_input_state();
s32 TLobby__sub_8013AD50(u32);
s32 TLobby__sub_8013AD5C(u32);
s8 TLobby__sub_8013AD6C(u32);
s32 TLobby__sub_8013AD74(u32);
M2C_UNK complete_reveal__14TWindowMessageFPv(u32);
s32 is_message_window_ready(u32);
s32 TWindowMakeTeam__sub_80264B24(u32);
s32 TWindowMakeTeam__sub_80264B38(u32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
void close_all_windows__6TLobbyFv(void);
M2C_UNK send_server_time_accepted__9TProtocolFv(s32);
s8 get_mode__6TLobbyFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 is_enabled__15TWindowMakeTeamFPv(u32);
M2C_UNK send_create_game__9TProtocolFPcPcUcUcUcUc(s32, s32, s32, u8, u8, u8, s32);

extern u32 lbl_805D55EC;

void handle_create_game_window__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r30;
    u8 temp_r29;
    u8 temp_r28;
    u8 temp_r27;
    s32 temp_r0;

    if ((u32) lbl_805D55EC != 0U) {
        if (TLobby__sub_8013AD74(lbl_805D55EC) != 0) {
            temp_r3 = TWindowMakeTeam__sub_80264B38(lbl_805D55EC);
            if (temp_r3 != 0) {
                temp_r30 = TWindowMakeTeam__sub_80264B24(lbl_805D55EC);
                temp_r29 = TLobby__sub_8013AD6C(lbl_805D55EC) == 2;
                temp_r28 = is_enabled__15TWindowMakeTeamFPv(lbl_805D55EC);
                temp_r27 = get_mode__6TLobbyFPv(lbl_805D55EC) == 1;
                temp_r0 = TLobby__sub_8013AD5C(lbl_805D55EC);
                send_create_game__9TProtocolFPcPcUcUcUcUc((*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))), temp_r3, temp_r30, temp_r28, temp_r29, temp_r27, temp_r0);
                ((M2C_UNK (*)())destroy_lobby_ui__6TLobbyFv)();
                return;
            }
            close_all_windows__6TLobbyFv();
            return;
        }
        if (TLobby__sub_8013AD50(lbl_805D55EC) != 0) {
            close_all_windows__6TLobbyFv();
        }
    }
}

extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55DC;

void update__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55DC != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 8) != 0) {
            if (is_message_window_ready(TLobby__data_805D55DC) == 0) {
                complete_reveal__14TWindowMessageFPv(TLobby__data_805D55DC);
            } else {
                TWindow__close(TLobby__data_805D55DC);
                TLobby__data_805D55DC = 0U;
                close_all_windows__6TLobbyFv();
                send_server_time_accepted__9TProtocolFv((*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))));
            }
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    reset_controller_input_state();
}

extern u32 lbl_805D55E4;

void TLobby__sub_80139094(void *self) {
    if (((*(Pad_80139094 **)lbl_8050E208)->flags & 8) || TLobby__data_805D55B4++ > 0xe10) {
        init__23TAdSinglePlyChrSelectGCFv();
        TKeyBoardControl__sub_8000F91C(2);
        TKeyBoardControl__sub_8000F9CC(0x12);
        ((void (*)(void *))queue_destruction__7TObjectFv)(self);
    }
}

void update_block_jump_list__6TLobbyFv(void) {
    s32 idx;
    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            ((void (*)(void *, void *, char *, char *))send_action__9TProtocolFR13GameListEntryPcPc)((*(Lst_80139104 * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))))), &(*(Lst_80139104 * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->e[idx], lbl_8043F06C, &(*(char *)&(*(char *)&(*(char *)&TLobby__data_805DB0B0))));
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if ((*(Pad_80139104 **)lbl_8050E208)->flags & 0x400) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            ((void (*)(void *, void *))send_info__9TProtocolFR16TPlyGuildCardTag)((*(Lst_80139104 * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))))), &(*(Lst_80139104 * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->e[idx]);
        }
    }
}

void update_ship_select_window__6TLobbyFv(void) {
    s32 idx;
    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            ((void (*)(void *, void *, char *, char *))send_action__9TProtocolFR13GameListEntryPcPc)((*(Lst_801391BC * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))))), &(*(Lst_801391BC * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->e[idx], lbl_8043F078, &(*(char *)&(*(char *)&(*(char *)&TLobby__data_805DB0B0))));
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if ((*(Pad_801391BC **)lbl_8050E208)->flags & 0x400) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            ((void (*)(void *, void *))send_info__9TProtocolFR16TPlyGuildCardTag)((*(Lst_801391BC * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))))), &(*(Lst_801391BC * *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->e[idx]);
        }
    }
}

void handle_com_card__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E4 != 0U) {
        if (((s32 (*)(void*))is_visible__17TWindowSubComCardFPv)((void*)lbl_805D55E4) != 0) {
            ((M2C_UNK (*)())close_com_card_window__6TLobbyFv)();
            temp_r3 = ((s32 (*)(u32))get_selected_menu_value)(lbl_805D55E4);
            switch (temp_r3) {
            case 0:
                ((M2C_UNK (*)())return_to_main_menu__6TLobbyFv)();
                return;
            case 1:
                ((M2C_UNK (*)())close_menu_windows__6TLobbyFv)();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}
void update_game_list_menu__6TLobbyFv(void) {
    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            lbl_805D5600 = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            if ((*(Lst_801392F8 **)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->e[lbl_805D5600].flags & 2) {
                ((M2C_UNK (*)())open_keyboard_window__6TLobbyFv)();
                return;
            }
            ((void (*)(void *, void *, char *, char *))send_action__9TProtocolFR13GameListEntryPcPc)((*(Lst_801392F8 **)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))))), &(*(Lst_801392F8 **)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->e[lbl_805D5600], &(*(char *)&(*(char *)&(*(char *)&TLobby__data_805DB0B0))), &(*(char *)&(*(char *)&(*(char *)&TLobby__data_805DB0B0))));
            ((M2C_UNK (*)())destroy_lobby_ui__6TLobbyFv)();
            return;
        }
        if (get_flag_bit2__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            close_all_windows__6TLobbyFv();
            return;
        }
        if ((*(Pad_801392F8 **)lbl_8050E208)->flags & 0x400) {
            lbl_805D5600 = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            if (lbl_805D5600 < (*(Lst_801392F8 **)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->count) {
                ((void (*)(void *, void *))send_info__9TProtocolFR16TPlyGuildCardTag)((*(Lst_801392F8 **)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580)))))), &(*(Lst_801392F8 **)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&(*(s32 *)&TLobby__data_805D5580))))))->e[lbl_805D5600]);
            }
        }
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GameListEntry_80139538_80137188 { char pad[0x1C]; };
struct Root_80139538_80137188 { char pad[0x1DA8]; struct GameListEntry_80139538_80137188 entries[1]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_801397E8 { s32 a; s32 b; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80139894 { s32 a; s32 b; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_8013990C { s32 a; s32 b; };

struct Pad_801395D8 { u8 pad[0x10]; u32 flags; };

struct Ent_801395D8 { u8 b[0x1C]; };

struct Lst_801395D8 { u8 pad[0x1DA8]; Ent_801395D8 e[1]; };

struct Flag_80139690 { u8 pad[0x2A]; s8 flag; };

extern "C" {
extern u32 TLobby__data_805D55DC;
extern const Pair_801397E8 lbl_8043EDF8[];
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
s32 get_seq_phase__6TLobbyFPv(s32);
extern const Pair_80139894 lbl_8043EDF0[];
extern const f32 lbl_805DB0B8;
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
void set_field_1c__6TLobbyFPvf(u32 p, f32 f);
void TLobby__sub_80139894(s32 arg0);
extern const Pair_8013990C lbl_8043EDE8[];
extern const f32 lbl_805DB0B8;
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
s32 get_seq_phase__6TLobbyFPv(s32);
void set_field_1c__6TLobbyFPvf(u32 p, f32 f);
s32 get_status_flag__6TLobbyFPv(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern char lbl_8043F084[];
extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55D0;
void handle_team_select__6TLobbyFv(void);
void func_80019A68__Fv(void);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
void update_com_card_window__6TLobbyFv(void);
void update_state__6TLobbyFv(void);
void update_scroll_close__6TLobbyFv(void);
void handle_short_list_input__6TLobbyFv(void);
void update_short_list__6TLobbyFv(void);
void update_card_list_window__6TLobbyFv(void);
void handle_comcard_window__6TLobbyFv(void);
void update_make_team_menu__6TLobbyFv(void);
void handle_create_game_window__6TLobbyFv(void);
void update__6TLobbyFv(void);
void update_block_jump_list__6TLobbyFv(void);
void update_ship_select_window__6TLobbyFv(void);
void handle_com_card__6TLobbyFv(void);
void update_game_list_menu__6TLobbyFv(void);
void update_menu_window__6TLobbyFv(void);
void handle_warp_menu_input__6TLobbyFv(void);
void handle_game_list_select__6TLobbyFv(void);
void handle_team_select__6TLobbyFv(void);
s32 query_task_active__6TLobbyFv(void);
s32 get_link_status__Fv(void);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
void close_windows_and_reset__16TQuestListOnlineFv(void *);
extern s32 lbl_805D61AC;
void run_task__6TLobbyFv(void *self);
}

extern "C" {

void close_com_card_window__6TLobbyFv(void);
void handle_game_list_select__6TLobbyFv(void);
void handle_warp_menu_input__6TLobbyFv(void);
void update_menu_window__6TLobbyFv(void);
s32 get_selected_menu_value(void*);
void close_all_windows__6TLobbyFv(void);
s32 get_flag_bit2__6TLobbyFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 get_status_flag__6TLobbyFPv(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);

extern u32 lbl_805D55E4;

void update_menu_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = get_selected_menu_value((void*)((void*)lbl_805D55E4));
        if (((s32 (*)(void*))is_visible__17TWindowSubComCardFPv)((void*)(lbl_805D55E4)) != 0) {
            switch (temp_r31) {
            case 0:
                ((M2C_UNK (*)())request_game_list__6TLobbyFv)();
                return;
            case 1:
                ((M2C_UNK (*)())open_menu_window__6TLobbyFv)();
                return;
            case 2:
                ((M2C_UNK (*)())close_all_windows__6TLobbyFPv)();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern u32 lbl_805D55E0;

void handle_warp_menu_input__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E0 != 0U) {
        if (((s32 (*)(void*))is_visible__17TWindowSubComCardFPv)((void*)((void*)lbl_805D55E0)) != 0) {
            temp_r3 = get_selected_menu_value((void*)(lbl_805D55E0));
            switch (temp_r3) {
            case 0:
                ((M2C_UNK (*)())create_warp_menu__6TLobbyFv)();
                return;
            case 1:
                ((M2C_UNK (*)())open_warp_menu__6TLobbyFv)();
                return;
            case 2:
                ((M2C_UNK (*)())close_and_send_text_list__6TLobbyFv)();
                return;
            case 3:
                ((M2C_UNK (*)())open_city_warp_menu__6TLobbyFv)();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E0) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern u32 TLobby__data_805D55D0;

void handle_game_list_select__6TLobbyFv(void) {
    s32 temp_r31;

    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            temp_r31 = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            ((void (*)(void*))TWindow__close)((void*)(TLobby__data_805D55D0));
            TLobby__data_805D55D0 = 0U;
            ((M2C_UNK (*)(void *, void *, M2C_UNK *, M2C_UNK *))send_action__9TProtocolFR13GameListEntryPcPc)((*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580))), &(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580)))->entries[temp_r31], &(*(M2C_UNK *)&(*(M2C_UNK *)&TLobby__data_805DB0B0)), &(*(M2C_UNK *)&(*(M2C_UNK *)&TLobby__data_805DB0B0)));
            ((M2C_UNK (*)())close_and_set_state_12__6TLobbyFv)();
            return;
        }
        if (get_flag_bit2__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            ((void (*)(void*))TWindow__close)((void*)(TLobby__data_805D55D0));
            TLobby__data_805D55D0 = 0U;
            close_all_windows__6TLobbyFv();
        }
    }
}

void handle_team_select__6TLobbyFv(void) {
    s32 idx;
    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            ((void (*)(void*))TWindow__close)((void*)(TLobby__data_805D55D0));
            TLobby__data_805D55D0 = 0U;
            ((M2C_UNK (*)(void *, void *, M2C_UNK *, M2C_UNK *))send_action__9TProtocolFR13GameListEntryPcPc)((void *)((*(Lst_801395D8 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580))))), (void *)(&(*(Lst_801395D8 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580))))->e[idx]), (M2C_UNK *)(lbl_8043F084), (M2C_UNK *)(&(*(M2C_UNK *)&(*(M2C_UNK *)&TLobby__data_805DB0B0))));
            ((M2C_UNK (*)())close_and_set_state_12__6TLobbyFv)();
            return;
        }
        if ((*(Pad_801395D8 **)lbl_8050E208)->flags & 0x400) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            ((void (*)(void *, void *))send_info__9TProtocolFR16TPlyGuildCardTag)((*(Lst_801395D8 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580)))), &(*(Lst_801395D8 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580))))->e[idx]);
        }
    }
}

struct Root_80139538_80137188;
#define CALL_80139690(f) ((void (*)(void *))f)(self)
void run_task__6TLobbyFv(void *self) {
    s32 r;
    switch ((*(u32 *)&TLobby__data_805D5594)) {
    case 1:
        CALL_80139690(handle_team_select__6TLobbyFv);
        break;
    case 2:
        CALL_80139690(handle_team_select__6TLobbyFv);
        break;
    case 3:
        CALL_80139690(handle_warp_menu_input__6TLobbyFv);
        break;
    case 4:
        CALL_80139690(update_menu_window__6TLobbyFv);
        break;
    case 6:
        CALL_80139690(update_game_list_menu__6TLobbyFv);
        break;
    case 9:
        CALL_80139690(handle_comcard_window__6TLobbyFv);
        break;
    case 10:
        CALL_80139690(handle_create_game_window__6TLobbyFv);
        break;
    case 5:
        CALL_80139690(handle_com_card__6TLobbyFv);
        break;
    case 7:
        CALL_80139690(update_ship_select_window__6TLobbyFv);
        break;
    case 8:
        CALL_80139690(update_block_jump_list__6TLobbyFv);
        break;
    case 12:
        CALL_80139690(TLobby__sub_80139094);
        return;
    case 13:
        CALL_80139690(update__6TLobbyFv);
        break;
    case 17:
        CALL_80139690(update_card_list_window__6TLobbyFv);
        break;
    case 20:
        CALL_80139690(update_short_list__6TLobbyFv);
        break;
    case 22:
        CALL_80139690(handle_short_list_input__6TLobbyFv);
        break;
    case 21:
        CALL_80139690(handle_game_list_select__6TLobbyFv);
        break;
    case 24:
        CALL_80139690(update_make_team_menu__6TLobbyFv);
        break;
    case 26:
        CALL_80139690(update_scroll_close__6TLobbyFv);
        break;
    case 25:
        CALL_80139690(update_com_card_window__6TLobbyFv);
        break;
    case 23:
        return;
    }
    if (lbl_805D61AC != 0) {
        func_80019A68__Fv();
    }
    r = query_task_active__6TLobbyFv();
    if (((Flag_80139690 *)(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580))))->flag != 0 || get_link_status__Fv() == 0 || r < 0) {
        Flag_80139690 *d = (Flag_80139690 *)(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&(*(struct Root_80139538_80137188 * *)&TLobby__data_805D5580)));
        d->flag = 0;
        close_windows_and_reset__16TQuestListOnlineFv(d);
        if (r < 0) {
            update_state__6TLobbyFv();
            return;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) == -1) {
        }
        ((void (*)(void))TLobby__sub_801384E4)();
    }
}

void TLobby__sub_801397E8(s32 arg0) {
    if (TLobby__data_805D55DC == 0) {
        Pair_801397E8 tmp = lbl_8043EDF8[0];
        TLobby__data_805D55DC = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc2), &tmp);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55DC, get_seq_phase__6TLobbyFPv(arg0), 1);
}

void close_com_card_window__6TLobbyFv(void) {
    if ((u32) (*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))) != 0U) {
        ((void (*)(void*))TWindow__close)((void*)((void*)(*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8)))));
        (*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))) = 0U;
    }
}
void TLobby__sub_80139894(s32 arg0) {
    if ((*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))) == 0) {
        Pair_80139894 tmp = lbl_8043EDF0[0];
        (*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))) = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc1), &tmp);
        set_field_1c__6TLobbyFPvf((*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))), lbl_805DB0B8);
    }
    send_and_handle__6TLobbyFPvii((*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))), arg0, 1);
}
void show_seq_phase_message__6TLobbyFi(s32 arg0) {
    if ((*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))) == 0) {
        Pair_8013990C tmp = lbl_8043EDE8[0];
        (*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))) = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc1), &tmp);
        set_field_1c__6TLobbyFPvf((*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))), lbl_805DB0B8);
    }
    send_and_handle__6TLobbyFPvii((*(u32 *)&(*(u32 *)&(*(u32 *)&TLobby__data_805D55D8))), get_seq_phase__6TLobbyFPv(arg0), 1);
}

}
