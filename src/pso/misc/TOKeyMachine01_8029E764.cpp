#include "types.h"
#include "pso/misc/TOKeyMachine01.h"

extern "C" {

s32 get_global_state__14TOKeyMachine01Fv();

s32 TOKeyMachine01::is_state_active() {
    if ((get_global_state__14TOKeyMachine01Fv() == 0x1C) || (get_global_state__14TOKeyMachine01Fv() == 0x1D) || (get_global_state__14TOKeyMachine01Fv() == 0x20) || (get_global_state__14TOKeyMachine01Fv() == 0x1F)) {
        return 1;
    }
    return 0;
}

}
