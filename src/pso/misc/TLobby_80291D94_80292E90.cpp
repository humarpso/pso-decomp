#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_clamped_time_limit__6TLobbyFv(void);
s32 get_valid_slot__6TLobbyFi(s32);
s32 is_challenge_mode_active();

extern M2C_UNK lbl_804DB1F0[];

s32 get_clamped_time_limit__6TLobbyFv(void) {
    s32 var_r3;

    if (is_challenge_mode_active() == 0) {
        return 0x12C;
    }
    var_r3 = get_valid_slot__6TLobbyFi(M2C_FIELD(lbl_804DB1F0, s32 *, 0x10));
    if ((var_r3 < 0x3C) || (var_r3 > 0xE10)) {
        var_r3 = 0x12C;
    }
    return var_r3;
}

}
