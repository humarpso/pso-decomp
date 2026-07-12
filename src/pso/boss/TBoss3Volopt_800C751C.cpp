#include "types.h"

extern "C" {

void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0);

void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p |= 8;
    }
}

}
