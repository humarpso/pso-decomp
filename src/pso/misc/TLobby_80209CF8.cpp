#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
