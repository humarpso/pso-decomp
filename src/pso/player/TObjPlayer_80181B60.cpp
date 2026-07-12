#include "types.h"

extern "C" {

void TObjPlayer__sub_80181B60(void);
void dispatch_lobby_action__10TObjPlayerFi(s32 arg0);
s32 process_lobby_action_14__6TLobbyFPv(s32);
s32 TObjPlayer__sub_80181BAC(s32);
s32 fn_80181E10();

void TObjPlayer__sub_80181B60(void) {  }
void dispatch_lobby_action__10TObjPlayerFi(s32 arg0) {
    if (fn_80181E10() != 0) {
        TObjPlayer__sub_80181BAC(arg0);
        return;
    }
    process_lobby_action_14__6TLobbyFPv(arg0);
}

}
