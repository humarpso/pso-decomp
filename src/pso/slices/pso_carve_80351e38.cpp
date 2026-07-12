#include "types.h"

extern "C" {

s32 TLobby__sub_80351DFC();

u8 is_lobby_event_active(void) {
    return (u8) (TLobby__sub_80351DFC() != 0);
}

}
