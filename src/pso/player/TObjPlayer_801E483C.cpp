#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

int TLobby__sub_803DA16C();

void TObjPlayer::free_if_valid(s32 arg0) {
    if (arg0 != 0) {
        TLobby__sub_803DA16C();
        TAdSinglePlyChrSelectGC::safe_free(arg0);
    }
}

}
