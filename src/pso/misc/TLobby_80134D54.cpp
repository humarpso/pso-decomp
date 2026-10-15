#include "types.h"

extern "C" {

void clear_counters__6TLobbyFv(void);

extern void *TLobby__protocol_instance;

void clear_counters__6TLobbyFv(void) {
    *(s32 *)((s8 *)TLobby__protocol_instance + 0xBC04) = 0;
    *(s32 *)((s8 *)TLobby__protocol_instance + 0xBC18) = 0;
}

}
