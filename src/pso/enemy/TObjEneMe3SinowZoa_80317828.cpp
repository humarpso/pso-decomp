#include "types.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"

extern "C" {

int TObjEneMe3SinowZoa__sub_8031A3D8(void*);
int get_target_info__9TObjEneDDFPv(void*);
int setup_move_bounds__18TObjEneMe3SinowZoaFv(void*);

void TObjEneMe3SinowZoa::update_move() { if (get_target_info__9TObjEneDDFPv(this) != 0) { setup_move_bounds__18TObjEneMe3SinowZoaFv(this); TObjEneMe3SinowZoa__sub_8031A3D8(this); } }

}
