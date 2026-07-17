#include "types.h"

extern "C" {

s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
int get_player_list__10TObjPlayerFv(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void handle_tunnel_state_0__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80129124(void* p);

void TObjPlayer__sub_801290A0(u32 arg0) {
    if (arg0 != 0U) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1FC, 2);
    }
}

}
