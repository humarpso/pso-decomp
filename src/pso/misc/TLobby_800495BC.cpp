#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 check_flag__10TObjPlayerFl(void *, s32);

s32 TLobby::check_player_flag1() {
    return check_flag__10TObjPlayerFl(this, 1);
}

}
