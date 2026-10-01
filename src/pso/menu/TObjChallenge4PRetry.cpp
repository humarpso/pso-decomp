#include "pso/TObjChallenge4PRetry.h"

extern "C" void set_retry_selection__6TLobbyFi(int);

TObjChallenge4PRetry::~TObjChallenge4PRetry() {
    if (m_20 != 0 && m_24 == 0) {
        set_retry_selection__6TLobbyFi(0);
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_multi_ready__6TLobbyFv();
M2C_UNK close_window_field30__6TLobbyFPv(void *);
M2C_UNK close_window__6TLobbyFPv(void *);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
s32 TLobby__sub_8029A16C(void *);
M2C_UNK countdown_and_destroy__6TLobbyFPv(void *);
M2C_UNK giveup_window_handle_select(void *);
M2C_UNK handle_retry_menu_select__6TLobbyFPv(void *);
M2C_UNK update_challenge_4p_retry__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_8029A414(void *);
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
    M2C_FIELD(arg0, s32 *, 0x20) = TLobby__sub_8029A16C((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        TLobby__sub_8029A414((void *) (arg0));
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
        send_giveup_to_all_players__6TLobbyFv((void *) (arg0));
        close_window__6TLobbyFPv((void *) (arg0));
        close_window_field30__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *TObjChallenge4PRetry__ct(void *arg0, void *parent) {
    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjChallenge4PRetry;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3CF8;
    M2C_FIELD(arg0, s32 *, 0x20) = TLobby__sub_8029A16C(arg0);
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
