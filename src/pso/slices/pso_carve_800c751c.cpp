#include "types.h"
extern "C" {
void fn_800C751C(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p |= 8;
    }
}
}
