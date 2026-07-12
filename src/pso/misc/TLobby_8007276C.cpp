#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void TLobby__sub_800727A0(void *);

void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0) {
    TLobby__sub_800727A0(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
