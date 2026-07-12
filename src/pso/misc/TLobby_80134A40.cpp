#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_by_index__6TLobbyFi(s32 arg0);
M2C_UNK TAdEnterSerialAccessGC__sub_8032B000();
M2C_UNK clear_state();
M2C_UNK TAdEnterSerialAccessGC__sub_8032B0A8(s32, s32, s32);

extern s32 TLobby__data_805D5580;

void dispatch_by_index__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if ((var_r3 > 3) || (var_r3 < 0)) {
        var_r3 = 0;
    }
    switch (var_r3) {
    case 0:
        clear_state();
        return;
    case 1:
        TAdEnterSerialAccessGC__sub_8032B0A8(TLobby__data_805D5580 + 0x3F8A, TLobby__data_805D5580 + 0x3F9B, TLobby__data_805D5580 + 0x3F3A);
        return;
    case 2:
        TAdEnterSerialAccessGC__sub_8032B000();
        return;
    }
}

}
