#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 TLobby__sub_80077798(s32, s32 *);
s32 send_choice_search__9TProtocolFR22ChoiceSearchParameters(s32, s32 *);

extern s32 TLobby__protocol_instance;

void TLobby::send_packet(s32 arg0, s32 arg1) {
    s32 sp8[4];

    TLobby__sub_80077798(arg1, sp8);
    send_choice_search__9TProtocolFR22ChoiceSearchParameters(TLobby__protocol_instance, sp8);
}

}
