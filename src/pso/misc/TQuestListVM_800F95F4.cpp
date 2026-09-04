#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C2FC(M2C_UNK *, void *, s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(M2C_UNK *, u32);
M2C_UNK TLobby__sub_800F7DAC(void *, s32);
M2C_UNK bswap_32__FPUl(u32 *);
M2C_UNK init_single_player_chr_select__6TLobbyFPv(M2C_UNK *);

u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    M2C_UNK sp10[60];
    u32 spC;
    u32 sp8;

    spC = M2C_FIELD(arg0, u32 *, 0);
    sp8 = M2C_FIELD(arg0, u32 *, 4);
    bswap_32__FPUl(&spC);
    bswap_32__FPUl(&sp8);
    if (spC > arg3) {
        return 0U;
    }
    init_single_player_chr_select__6TLobbyFPv(&sp10[0]);
    TAdSinglePlyChrSelectGC__sub_8007C48C(&sp10[0], sp8);
    TAdSinglePlyChrSelectGC__sub_8007C2FC(&sp10[0], arg0 + 8, arg1 - 8);
    TLobby__sub_800F7DAC(arg0 + 8, arg2);
    return spC;
}

}
