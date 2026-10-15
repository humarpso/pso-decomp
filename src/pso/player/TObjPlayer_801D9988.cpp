#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 TObjPlayer::is_invalid_slot(u8 arg0) {
    return (u8) (arg0 == 0xFF);
}

}
