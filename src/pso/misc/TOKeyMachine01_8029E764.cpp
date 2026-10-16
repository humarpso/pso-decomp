#include "types.h"
#include "pso/misc/TOKeyMachine01.h"

extern "C" {

s32 TOKeyMachine01::is_state_active() {
    if ((TOKeyMachine01::get_global_state() == 0x1C) || (TOKeyMachine01::get_global_state() == 0x1D) || (TOKeyMachine01::get_global_state() == 0x20) || (TOKeyMachine01::get_global_state() == 0x1F)) {
        return 1;
    }
    return 0;
}

}
