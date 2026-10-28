#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/map/FloorArea.h"

extern "C" {

int is_item_area_enabled(void);

void TObjPlayer::reset_key_machine_state() { get_current_floor_area(); is_item_area_enabled(); }

}
