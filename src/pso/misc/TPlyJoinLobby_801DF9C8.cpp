#include "pso/misc/TPlyJoinLobby.h"
#include "pso/misc/TPlyJoinLobbyEntry_801DFA18.h"

void TPlyJoinLobby::bswap() {
    header.bswap();
    for (int i = 0; i < 12; ++i) {
        bswap__18TPlyJoinLobbyEntryFv((s32)&entries[i]);
    }
}
