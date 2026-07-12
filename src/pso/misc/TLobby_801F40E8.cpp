#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_msg_type1__6TLobbyFi(s32 arg0);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK TLobby__sub_801F3AD8(void *, s32);
s32 get_player_floor__6TLobbyFi(s32);
M2C_UNK TLobby__sub_8020AA94(void *, u32, s32);
M2C_UNK TLobby__sub_8020B3E4(s32, void *, s32);

extern u8 *TLobby__data_805D5EE0;

s32 handle_msg_type1__6TLobbyFi(s32 arg0) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 *temp_r31;
    u8 *var_r31;

    if ((var_r31 = TLobby__data_805D5EE0) != NULL) {
loop_1:
        sp14 = M2C_FIELD(var_r31, s32 *, 0);
        sp10 = M2C_FIELD(var_r31, s32 *, 4);
        spC = M2C_FIELD(var_r31, s32 *, 8);
        sp8 = M2C_FIELD(var_r31, s32 *, 0xC);
        bswap_32__FPUl(&sp14);
        bswap_32__FPUl(&sp10);
        bswap_32__FPUl(&spC);
        bswap_32__FPUl(&sp8);
        if ((sp14 == 1) && (spC == arg0)) {
            temp_r31 = var_r31 + 0x10;
            TLobby__sub_801F3AD8(temp_r31, sp8);
            TLobby__sub_8020AA94(temp_r31, (u32) sp8 / 68U, get_player_floor__6TLobbyFi(spC));
            TLobby__sub_8020B3E4(spC, temp_r31, sp8);
            return 1;
        }
        if (sp14 != 0) {
            var_r31 += sp10;
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    return 0;
}

}
