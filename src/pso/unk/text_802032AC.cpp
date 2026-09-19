#include "types.h"
struct SurfaceAreaTable { s32 enabled[36]; };

extern "C" {
extern SurfaceAreaTable lbl_8044A894;
s32 get_global_state__14TOKeyMachine01Fv();
s32 player_auxiliary_surfaces_enabled();
}

extern "C" {

s32 player_auxiliary_surfaces_enabled() {
    SurfaceAreaTable table = lbl_8044A894;
    return table.enabled[get_global_state__14TOKeyMachine01Fv()];
}

}
