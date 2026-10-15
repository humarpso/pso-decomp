#include "types.h"

extern "C" {

void set_tech_level__10TObjPlayerFPvs(void *arg0, s16 arg1);

void set_tech_level__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0xA)) {
        var_r4 = 0;
    }
    *(s16 *)((s8 *)arg0 + 6) = var_r4;
}

}
