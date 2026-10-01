#include "pso/TObjChallengeRetry.h"

extern "C" void TLobby__sub_80072308(int);

TObjChallengeRetry::~TObjChallengeRetry() {
    if (m_20 != 0 && m_24 == 0) {
        TLobby__sub_80072308(0);
    }
}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_ready_to_draw__6TLobbyFv();
M2C_UNK TLobby__sub_80072B70(void *);
M2C_UNK close_window_2c__6TLobbyFPv(void *);
M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
s32 is_challenge_lobby__6TLobbyFv(void *);
M2C_UNK update_destroy_countdown__6TLobbyFPv(void *);
M2C_UNK handle_loss_sequence(void *);
M2C_UNK update_challenge_retry__6TLobbyFPv(void *);
M2C_UNK handle_challenge_retry_confirm(void *);
M2C_UNK fn_8007313C(void *);
void *fn_800733C4(void *arg0);
void *__ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__18TObjChallengeRetry[];
extern s32 lbl_805D2860;
void *TObjChallengeRetry__ct(void *, void *);
void *__nw__7TObjectFUl(int);
void *fn_800733C4(void *arg0);
}

extern "C" {

int is_visible__17TWindowSubComCardFPv(void* p);
void set_loss_flag__6TLobbyFPv(void* p);

void run_task__18TObjChallengeRetryFv(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x20) = is_challenge_lobby__6TLobbyFv((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        fn_8007313C((void *) (arg0));
        break;
    case 1:
        handle_challenge_retry_confirm((void *) (arg0));
        break;
    case 2:
        update_challenge_retry__6TLobbyFPv((void *) (arg0));
        break;
    case 3:
        handle_loss_sequence((void *) (arg0));
        break;
    case 4:
        update_destroy_countdown__6TLobbyFPv((void *) (arg0));
        break;
    }
    if (is_ready_to_draw__6TLobbyFv() == 0) {
        send_45_and_close_windows__6TLobbyFv((void *) (arg0));
        close_window_2c__6TLobbyFPv((void *) (arg0));
        TLobby__sub_80072B70((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *TObjChallengeRetry__ct(void *arg0, void *parent) {
    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjChallengeRetry;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2860;
    M2C_FIELD(arg0, s32 *, 0x20) = is_challenge_lobby__6TLobbyFv(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

void *fn_800733C4(void *arg0) {
    void *o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TObjChallengeRetry__ct(o, arg0);
    }
    return o;
}

}
