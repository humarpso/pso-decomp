#include "types.h"

extern "C" {

u32 clamp_min_drop__6TLobbyFUi(u32 arg0);
u32 item_drop_rng_below(s32);

extern s32 item_drop_rng;

u32 clamp_min_drop__6TLobbyFUi(u32 arg0) {
    u32 var_r3;

    var_r3 = item_drop_rng_below(item_drop_rng);
    if (var_r3 < arg0) {
        var_r3 = arg0;
    }
    return var_r3;
}

}
