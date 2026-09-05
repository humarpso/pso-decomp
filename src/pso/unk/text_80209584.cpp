#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 init_single_player_chr_select__6TLobbyFPv(void *);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
u8 *TLobby__sub_80209584(u8 *arg0, s32 arg1);
}

extern "C" {

u8 *TLobby__sub_80209584(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0xE8);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = init_single_player_chr_select__6TLobbyFPv((void *) temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    M2C_FIELD(arg0, s32 *, 4) = alloc_buffer__11TOBoss4RockFPv((void *) (arg1 * 4));
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    return arg0;
}

}
