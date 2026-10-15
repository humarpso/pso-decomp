#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int get_global_state__14TOKeyMachine01Fv(void);
int is_item_area_enabled(void);

void TObjPlayer::reset_key_machine_state() { get_global_state__14TOKeyMachine01Fv(); is_item_area_enabled(); }

}
