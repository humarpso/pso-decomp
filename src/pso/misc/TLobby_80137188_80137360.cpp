#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_801378AC { u8 b[0x43c]; };

extern "C" {
extern void *TLobby__data_805D5580;
extern char lbl_8043F038[];
extern char lbl_8043F044[];
void TLobby__sub_8013A170(const char *fmt, ...);
s32 get_option_state__6TLobbyFv(void);
void send_login2__9TProtocolFi(void *proto, s32 opt);
void dispatch_by_index__6TLobbyFi(s32 arg0);
void reset_state__6TLobbyFv(s32);
void TLobby__sub_801376A0(s32 ok);
extern void *TLobby__data_805D5580;
extern char lbl_8043F05C[];
void TLobby__sub_8013A170(const char *fmt, ...);
s32 get_option_state__6TLobbyFv(void);
void send_login2__9TProtocolFi(void *proto, s32 opt);
void send_regist__9TProtocolFv(void *proto);
void TLobby__sub_8013785C(s32 ok);
extern Rec_801378AC TLobby__data_80506A6C[];
extern s32 TLobby__data_805D5590;
extern s16 TLobby__data_805D558C;
extern s16 TLobby__data_805D558E;
extern s32 TLobby__data_805D53AC;
void TLobby__sub_8013A5D4(Rec_801378AC *dst, Rec_801378AC *src);
void TLobby__sub_801378AC(Rec_801378AC *src, s32 n, s16 v, s32 w);
void dispatch_by_index__6TLobbyFi(s32 arg0);
void reset_state__6TLobbyFv(s32);
void TLobby__sub_8013A170(const char *fmt, ...);
void fn_801DB684(void *, s32, s32);
s32 increment_frame__23TAdSinglePlyChrSelectGCFv(void);
s32 get_player_count__23TAdSinglePlyChrSelectGCFv(void);
void store_serial_access_key__22TAdEnterSerialAccessGCFiii(void *, void *, void *);
extern char lbl_8043F028[];
extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D55BC;
extern s32 lbl_805D55C4;
void TLobby__sub_801374EC(u32 arg0);
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

void TLobby__sub_801374EC(u32 arg0) {
    s32 temp_r31;
    switch (arg0) {
    case 0:
        TLobby__sub_8013A170(lbl_8043F028);
        store_serial_access_key__22TAdEnterSerialAccessGCFiii((char *)TLobby__data_805D5580 + 0x3F8A, (char *)TLobby__data_805D5580 + 0x3F9B, (char *)TLobby__data_805D5580 + 0x3F3A);
        if (TLobby__data_805D55BC != 0) {
            temp_r31 = increment_frame__23TAdSinglePlyChrSelectGCFv();
            fn_801DB684(TLobby__data_805D5580, get_player_count__23TAdSinglePlyChrSelectGCFv(), temp_r31);
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

void TLobby__sub_801376A0(s32 ok) {
    if (ok) {
        TLobby__sub_8013A170(lbl_8043F038);
        send_login2__9TProtocolFi(TLobby__data_805D5580, get_option_state__6TLobbyFv());
    } else {
        TLobby__sub_8013A170(lbl_8043F044);
        dispatch_by_index__6TLobbyFi(2);
        reset_state__6TLobbyFv(0xd);
    }
}

void TLobby__sub_8013785C(s32 ok) {
    if (ok) {
        TLobby__sub_8013A170(lbl_8043F05C);
        send_login2__9TProtocolFi(TLobby__data_805D5580, get_option_state__6TLobbyFv());
    } else {
        send_regist__9TProtocolFv(TLobby__data_805D5580);
    }
}

void TLobby__sub_801378AC(Rec_801378AC *src, s32 n, s16 v, s32 w) {
    s32 i;
    TLobby__data_805D5590 = 2;
    TLobby__data_805D558C = v;
    for (i = TLobby__data_805D558E; i < TLobby__data_805D558E + n; i++) {
        TLobby__sub_8013A5D4(&TLobby__data_80506A6C[i], &src[i]);
    }
    TLobby__data_805D558E += n;
    TLobby__data_805D53AC = w;
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
