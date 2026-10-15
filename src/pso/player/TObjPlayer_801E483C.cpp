#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int safe_free__23TAdSinglePlyChrSelectGCFUl(s32);
int TLobby__sub_803DA16C();

void TObjPlayer::free_if_valid(s32 arg0) {
    if (arg0 != 0) {
        TLobby__sub_803DA16C();
        safe_free__23TAdSinglePlyChrSelectGCFUl(arg0);
    }
}

}
