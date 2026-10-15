#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TLobby__sub_8001FE7C(void*, int);

extern u32 lobby_pigeon_bml_archive;

void TObjPlayer::free_static_instance() {
    if ((u32) lobby_pigeon_bml_archive != 0U) {
        TLobby__sub_8001FE7C((void*)lobby_pigeon_bml_archive, 1);
        lobby_pigeon_bml_archive = 0U;
    }
}

}
