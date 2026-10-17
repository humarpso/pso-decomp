#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TObjPlayer__sub_803E2248(void);

void TLobby::reset_player_state() {
    TObjPlayer__sub_803E2248();
}

}
