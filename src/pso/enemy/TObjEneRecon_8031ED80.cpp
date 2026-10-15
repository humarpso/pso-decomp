#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

int get_target_info__9TObjEneDDFPv(void*);
int TObjEneRecon__sub_8031F800(void*);

void TObjEneRecon::update_if_800BB858() { if (get_target_info__9TObjEneDDFPv(this) != 0) { TObjEneRecon__sub_8031F800(this); } }

}
