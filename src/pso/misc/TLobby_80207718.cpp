#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_player_floor__6TLobbyFi(s32 idx);
s32 TLobby__sub_802077CC(s32, struct Buf12_80207718 *);

struct Buf12_80207718 { s32 a, b, c; };

s32 get_player_floor__6TLobbyFi(s32 idx) {
    struct Buf12_80207718 buf;

    if (TLobby__sub_802077CC(idx, &buf) == 1) {
        return buf.a;
    }
    return -1;
}

}
