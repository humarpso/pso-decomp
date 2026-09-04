#include "types.h"

extern "C" {

void apply_stat_multipliers_and_reset__10TObjPlayerFPv(void* p);
s32 get_slot_value__10TObjPlayerFPvi(s32 *arg0, s32 arg1);
int apply_stat_multipliers__10TObjPlayerFiif(void*);
int set_stat_scale__10TObjPlayerFPvf(void*);

s32 get_slot_value__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    if (arg1 < 0 || arg1 >= 13) {
        return 0;
    }
    return arg0[arg1];
}

void apply_stat_multipliers_and_reset__10TObjPlayerFPv(void* p) { apply_stat_multipliers__10TObjPlayerFiif(p); set_stat_scale__10TObjPlayerFPvf(p); }

}
