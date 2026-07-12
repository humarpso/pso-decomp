#include "types.h"

extern "C" {

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0);

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p &= ~8;
    }
}

}
