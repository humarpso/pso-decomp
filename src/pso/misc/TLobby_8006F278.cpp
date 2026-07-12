#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_challenge_time_limit__6TLobbyFv(void);
s32 TLobby__sub_8006F994(s32);
s32 TLobby__sub_80070AB0();

extern M2C_UNK lbl_8048C9D8[];

s32 calc_challenge_time_limit__6TLobbyFv(void) {
    s32 var_r3;

    if (TLobby__sub_80070AB0() == 0) {
        return 0x12C;
    }
    var_r3 = TLobby__sub_8006F994(M2C_FIELD(lbl_8048C9D8, s32 *, 0x10));
    if ((var_r3 < 0x3C) || (var_r3 > 0xE10)) {
        var_r3 = 0x12C;
    }
    return var_r3;
}

}
