#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 DCInvalidateRange();

void TLobby::invalidate_cache() {
    DCInvalidateRange();
}

}
