#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_destroy_countdown__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_8006F2CC();
M2C_UNK TLobby__sub_80072B70(void *);
M2C_UNK close_window_2c__6TLobbyFPv(void *);
M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK play_default_effect__6TLobbyFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_destroy_countdown__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    play_default_effect__6TLobbyFPv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if (temp_r0 <= 0) {
        TLobby__sub_8006F2CC();
        send_45_and_close_windows__6TLobbyFv(arg0);
        close_window_2c__6TLobbyFPv(arg0);
        TLobby__sub_80072B70(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
