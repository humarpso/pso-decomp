#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Blk_8001DF0C { s32 w[6]; };

struct Obj_8001DF0C { Blk_8001DF0C a; Blk_8001DF0C b; };

extern "C" {
Obj_8001DF0C *copy_pair__6TLobbyFPvPv(Obj_8001DF0C *d, Obj_8001DF0C *s);
}

extern "C" {

void TLobby__sub_8001DEA8(s32 arg0);
void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1);
s32 get_player_entry__6TLobbyFii(s32, s32);
s32 is_valid_player_index__6TLobbyFi();

extern s32 TLobby__data_805D4ABC;

void TLobby__sub_8001DEA8(s32 arg0) {
    TLobby__data_805D4ABC = arg0;
}

void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (is_valid_player_index__6TLobbyFi() != 0) {
        var_r31 = 0;
        do {
            copy_pair__6TLobbyFPvPv((Obj_8001DF0C *)(get_player_entry__6TLobbyFii(var_r31, arg0)), (Obj_8001DF0C *)(arg1));
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}
Obj_8001DF0C *copy_pair__6TLobbyFPvPv(Obj_8001DF0C *d, Obj_8001DF0C *s) {
    d->a = s->a;
    d->b = s->b;
    return d;
}

}
