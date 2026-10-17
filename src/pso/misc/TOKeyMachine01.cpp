#include "types.h"
#include "pso/misc/TOKeyMachine01.h"

extern s32 current_floor_area_type;

s32 TOKeyMachine01::get_global_state() {
    return current_floor_area_type;
}
