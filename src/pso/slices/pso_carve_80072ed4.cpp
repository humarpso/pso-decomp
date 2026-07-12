#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_80070DA8();
M2C_UNK TLobby__sub_80072B70(void *);
M2C_UNK close_window_2c__6TLobbyFPv(void *);
M2C_UNK open_loss_menu__6TLobbyFPv(void *);
M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK TLobby__sub_80072DA0(void *);
M2C_UNK play_default_effect__6TLobbyFPv(void *);
M2C_UNK play_player_default_effect__6TLobbyFv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TLobby__sub_8022727C(M2C_UNK *);
extern M2C_UNK lbl_804385D4[];

void handle_loss_sequence(void *arg0) {
    s32 temp_r3;

    play_player_default_effect__6TLobbyFv();
    temp_r3 = TLobby__sub_80070DA8();
    switch (temp_r3) {
    case 0:
        TLobby__sub_8022727C(lbl_804385D4);
        send_45_and_close_windows__6TLobbyFv(arg0);
        close_window_2c__6TLobbyFPv(arg0);
        TLobby__sub_80072B70(arg0);
        queue_destruction__7TObjectFv(arg0);
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x52812, 0, 0, 0);
        send_45_and_close_windows__6TLobbyFv(arg0);
        play_default_effect__6TLobbyFPv(arg0);
        TLobby__sub_80072B70(arg0);
        close_window_2c__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x1C) = 4;
        return;
    default:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0)) {
            send_45_and_close_windows__6TLobbyFv(arg0);
            TLobby__sub_80072DA0(arg0);
            TLobby__sub_80072B70(arg0);
            open_loss_menu__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
        return;
    }
}

}
