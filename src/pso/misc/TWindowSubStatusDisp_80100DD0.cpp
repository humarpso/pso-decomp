#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 mark_selected__6TLobbyFv();

extern s32 local_client_id;

void TWindowSubStatusDisp::refresh_if_current_player() {
    if ((s32) *(u16 *)((s8 *)this + 0xE4) == (s32) local_client_id) {
        mark_selected__6TLobbyFv();
    }
}

}
