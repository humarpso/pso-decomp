#include "types.h"
struct SurfaceAreaTable { s32 enabled[36]; };

extern "C" {
extern SurfaceAreaTable player_auxiliary_surface_flag_table;
s32 get_global_state__14TOKeyMachine01Fv();
s32 player_auxiliary_surfaces_enabled();
}

extern "C" {

s32 player_auxiliary_surfaces_enabled() {
    SurfaceAreaTable table = player_auxiliary_surface_flag_table;
    return table.enabled[get_global_state__14TOKeyMachine01Fv()];
}

}
