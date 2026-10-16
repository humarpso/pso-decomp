#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneRecobox.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

void TObjEneRecobox::update_if_800BB858() { if (get_target_info() != 0) { sub_8031F800(); } }

}
