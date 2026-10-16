#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TOKeyMachine01.h"

extern "C" {

int is_item_area_enabled(void);

void TObjPlayer::reset_key_machine_state() { TOKeyMachine01::get_global_state(); is_item_area_enabled(); }

}
