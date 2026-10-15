#include "types.h"

extern "C" {

void refresh_if_current_player__20TWindowSubStatusDispFPv(void *arg0);
s32 mark_selected__6TLobbyFv();

extern s32 local_client_id;

void refresh_if_current_player__20TWindowSubStatusDispFPv(void *arg0) {
    if ((s32) *(u16 *)((s8 *)arg0 + 0xE4) == (s32) local_client_id) {
        mark_selected__6TLobbyFv();
    }
}

}
