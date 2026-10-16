#include "types.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"

extern "C" {

int get_target_info__9TObjEneDDFv(void*);

void TObjEneMe3SinowZoa::action(s32) { if (get_target_info__9TObjEneDDFv(this) != 0) { setup_move_bounds(); sub_8031A3D8(); } }

}
