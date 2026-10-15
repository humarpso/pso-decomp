#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

extern s32 lbl_805D586C;

s32 TLobby::get_game_mode() {
    return lbl_805D586C;
}

}
