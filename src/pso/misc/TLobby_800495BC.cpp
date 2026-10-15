#include "types.h"

extern "C" {

s32 check_player_flag1__6TLobbyFPv(void *arg0);
s32 check_flag__10TObjPlayerFPvi(void *, s32);

s32 check_player_flag1__6TLobbyFPv(void *arg0) {
    return check_flag__10TObjPlayerFPvi(arg0, 1);
}

}
