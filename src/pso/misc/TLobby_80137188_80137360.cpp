#include "types.h"
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
void reset_state__6TLobbyFv(s32);
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
void reset_state__6TLobbyFv(s32);
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
void reset_state__6TLobbyFv(s32);
void TLobby__sub_8013A170(const char *fmt, ...);
M2C_UNK send_login_9e_extended__6TLobbyFPvPvi(int, void *, int);
M2C_UNK send_register_9c(int);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
extern char lbl_8043F05C[];
extern void *TLobby__data_805D5580;
void handle_verify_result__6TLobbyFUi(u32 arg0);
void dispatch_by_index__6TLobbyFi(s32 arg0);
s32 get_option_state__6TLobbyFv(void);
void reset_state__6TLobbyFv(s32);
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
M2C_UNK TLobby__sub_801384E4();
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
        reset_state__6TLobbyFv(0xA);
        break;
    case 2:
        dispatch_by_index__6TLobbyFi(0);
        reset_state__6TLobbyFv(0xB);
        break;
    case 3:
        dispatch_by_index__6TLobbyFi(2);
        reset_state__6TLobbyFv(0xD);
        break;
    case 4:
        dispatch_by_index__6TLobbyFi(0);
        reset_state__6TLobbyFv(0xE);
        break;
    case 5:
        dispatch_by_index__6TLobbyFi(0);
        reset_state__6TLobbyFv(0xF);
        break;
    case 6:
        lbl_805D55C4 = 1;
        dispatch_by_index__6TLobbyFi(2);
        reset_state__6TLobbyFv(0x50);
        break;
    default:
        reset_state__6TLobbyFv(8);
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
    reset_state__6TLobbyFv(0x50);
}

void handle_register_name_result__6TLobbyFi(s32 ok) {
    if (ok) {
        TLobby__sub_8013A170(lbl_8043F038);
        send_login2__9TProtocolFi(TLobby__data_805D5580, get_option_state__6TLobbyFv());
    } else {
        TLobby__sub_8013A170(lbl_8043F044);
        dispatch_by_index__6TLobbyFi(2);
        reset_state__6TLobbyFv(0xd);
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
        reset_state__6TLobbyFv((int) (0x4E));
        return;
    case 4:
        dispatch_by_index__6TLobbyFi((int) (0));
        reset_state__6TLobbyFv((int) (0x4F));
        return;
    case 7:
        reset_state__6TLobbyFv((int) (0x1B));
        return;
    case 8:
        reset_state__6TLobbyFv((int) (0x1A));
        return;
    case 11:
        reset_state__6TLobbyFv((int) (0x16));
        return;
    case 12:
        reset_state__6TLobbyFv((int) (0x17));
        return;
    case 13:
        reset_state__6TLobbyFv((int) (0x18));
        return;
    case 14:
        reset_state__6TLobbyFv((int) (0x19));
        return;
    case 15:
    case 16:
        reset_state__6TLobbyFv((int) (0x15));
        return;
    case 17:
        reset_state__6TLobbyFv((int) (0x1A));
        return;
    case 18:
        reset_state__6TLobbyFv((int) (0x1B));
        return;
    case 19:
        reset_state__6TLobbyFv((int) (0x1C));
        return;
    case 26:
        reset_state__6TLobbyFv((int) (0x1D));
        return;
    case 27:
        reset_state__6TLobbyFv((int) (0x1E));
        return;
    default:
        reset_state__6TLobbyFv((int) (0x1D));
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
        TLobby__sub_801384E4();
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
