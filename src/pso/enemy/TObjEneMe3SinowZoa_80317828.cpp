#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"

extern "C" {

void TObjEneMe3SinowZoa::action(s32) { if (get_target_info() != 0) { setup_move_bounds(); sub_8031A3D8(); } }

}
