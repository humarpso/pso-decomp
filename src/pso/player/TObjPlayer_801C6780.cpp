#include "types.h"

extern "C" {

void apply_stat_multipliers_and_reset__10TObjPlayerFPv(void* p);
int apply_stat_multipliers__10TObjPlayerFiif(void*);
int set_stat_scale__10TObjPlayerFPvf(void*);

void apply_stat_multipliers_and_reset__10TObjPlayerFPv(void* p) { apply_stat_multipliers__10TObjPlayerFiif(p); set_stat_scale__10TObjPlayerFPvf(p); }

}
