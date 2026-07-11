#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_difficulty__6TLobbyFi(s32 arg0);

extern s32 enable_v2_features;
extern s32 TLobby__data_805D4AB4;

void clamp_difficulty__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    } else if ((s32) enable_v2_features != 0) {
        if (var_r3 >= 4) {
            var_r3 = 3;
        }
    } else if (var_r3 >= 3) {
        var_r3 = 2;
    }
    TLobby__data_805D4AB4 = var_r3;
}

}
