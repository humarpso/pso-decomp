#include "types.h"
#include "pso/unk/text_801C5454.h"

void clear_trap_counts(s8 *arg0) {
    s32 var_ctr;

    for (var_ctr = 4; var_ctr != 0; var_ctr -= 1) {
        *arg0 = 0;
        arg0 += 1;
    }
}
