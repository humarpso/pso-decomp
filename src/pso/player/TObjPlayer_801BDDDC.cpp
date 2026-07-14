#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__10TObjPlayerFUii(u32 arg0, s32 arg1);
s32 construct_player_instance__10TObjPlayerFPvisiPv(s32, s32, u16, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TLobby__sub_80072048(s32, s32);
s32 TObjPlayer__sub_801C22A4(s32);
s32 TObjPlayer__sub_801C22AC(s32);
s32 TObjPlayer__sub_801C22B4(s32);

extern s32 tl_03;

s32 create__10TObjPlayerFUii(u32 arg0, s32 arg1) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = __nw__7TObjectFUl(0xDB8);
    if (var_r30 != 0) {
        var_r30 = construct_player_instance__10TObjPlayerFPvisiPv(var_r30, tl_03, (u16)arg0, TObjPlayer__sub_801C22B4(arg1), TObjPlayer__sub_801C22AC(arg1));
    }
    TLobby__sub_80072048(var_r30 + 0xDAC, TObjPlayer__sub_801C22A4(arg1));
    return var_r30;
}

}
