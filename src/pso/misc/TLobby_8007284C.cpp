#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void send_state__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void byteswap_challenge_time_packet__6TLobbyFPv(void *);

void send_state__6TLobbyFPv(void *arg0) {
    byteswap_challenge_time_packet__6TLobbyFPv(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
