#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 pick_random_slot__6TLobbyFPv(s16 *arg0);
M2C_UNK pick_random_entry__6TLobbyFPv(s16 *);
M2C_UNK TLobby__sub_802099FC(s16 *, s32);
M2C_UNK pick_weighted_entry__6TLobbyFPvPv(s32 *, s32 *);

extern s32 lbl_8044BAF8[];

s32 pick_random_slot__6TLobbyFPv(s16 *arg0) {
    s32 spC;
    s32 sp8;

    pick_weighted_entry__6TLobbyFPvPv(&spC, &sp8);
    if ((spC != -1) && (sp8 != -1)) {
        *arg0 = (s16) lbl_8044BAF8[sp8];
        TLobby__sub_802099FC(arg0, spC);
        pick_random_entry__6TLobbyFPv(arg0);
        return 0;
    }
    return 1;
}

}
