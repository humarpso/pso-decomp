#include "types.h"
#include "pso/enemy/TObjEneRecobox.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

int get_target_info__9TObjEneDDFv(void*);

void TObjEneRecobox::update_if_800BB858() { if (get_target_info__9TObjEneDDFv(this) != 0) { sub_8031F800(); } }

}
