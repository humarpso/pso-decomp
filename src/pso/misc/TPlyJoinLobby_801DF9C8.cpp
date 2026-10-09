#include "pso/misc/TPlyJoinLobby.h"

extern "C" void bswap__18TPlyJoinLobbyEntryFv(TPlyJoinLobbyEntry *);

void TPlyJoinLobby::bswap() {
    header.bswap();
    for (int i = 0; i < 12; ++i) {
        bswap__18TPlyJoinLobbyEntryFv(&entries[i]);
    }
}
