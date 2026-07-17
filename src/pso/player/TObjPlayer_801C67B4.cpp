#include "types.h"

extern "C" {

void apply_stats_and_update__10TObjPlayerFPv(void* p);
int apply_stat_multipliers_default__10TObjPlayerFv(void*);
int set_stat_scale__10TObjPlayerFPvf(void*);

void apply_stats_and_update__10TObjPlayerFPv(void* p) { apply_stat_multipliers_default__10TObjPlayerFv(p); set_stat_scale__10TObjPlayerFPvf(p); }

}
