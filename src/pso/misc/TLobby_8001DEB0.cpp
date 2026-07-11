#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_8001DF0C(s32, s32);
s32 TLobby__sub_8001E1B8();
s32 TLobby__sub_8001E200(s32, s32);

void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (TLobby__sub_8001E1B8() != 0) {
        var_r31 = 0;
        do {
            TLobby__sub_8001DF0C(TLobby__sub_8001E200(var_r31, arg0), arg1);
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

}
