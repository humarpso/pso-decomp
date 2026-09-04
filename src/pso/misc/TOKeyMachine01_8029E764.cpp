#include "types.h"

extern "C" {

s32 is_state_active__14TOKeyMachine01Fv(void);
s32 get_global_state__14TOKeyMachine01Fv();

s32 is_state_active__14TOKeyMachine01Fv(void) {
    if ((get_global_state__14TOKeyMachine01Fv() == 0x1C) || (get_global_state__14TOKeyMachine01Fv() == 0x1D) || (get_global_state__14TOKeyMachine01Fv() == 0x20) || (get_global_state__14TOKeyMachine01Fv() == 0x1F)) {
        return 1;
    }
    return 0;
}

}
