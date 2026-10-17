#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TObjPlayer::get_plot_state() { return *(s32 *)&this->texture_id; }

}
