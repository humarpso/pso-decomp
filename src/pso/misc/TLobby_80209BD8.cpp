#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 pick_random_slot__6TLobbyFPv(s16 *arg0);
s32 TLobby__sub_802099FC(s16 *, s32);

extern s32 lobby_random_slot_id_table[];

s32 pick_random_slot__6TLobbyFPv(s16 *arg0) {
    s32 spC;
    s32 sp8;

    TLobby::pick_weighted_entry(&spC, &sp8);
    if ((spC != -1) && (sp8 != -1)) {
        *arg0 = (s16) lobby_random_slot_id_table[sp8];
        TLobby__sub_802099FC(arg0, spC);
        ((TLobby *)arg0)->pick_random_entry();
        return 0;
    }
    return 1;
}

}
