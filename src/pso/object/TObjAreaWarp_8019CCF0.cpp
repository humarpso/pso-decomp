#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjAreaWarp__sub_8019CCF0(s32 arg0);
void TObjAreaWarp__sub_8019CD60(void *arg0, u16 arg1);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, u16);
M2C_UNK TLobby__sub_80207718(s32);
s32 TLobby__sub_8030A7B0();
s32 TObjCityMainWarp__sub_80186AF4();
s32 TObjWarpBase__vt13(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();
M2C_UNK TAdChrSelASlotGC__sub_800740FC(u32);
s32 TObjLuker__sub_801329B0();
M2C_UNK fn_8019DD14(s32, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);

s32 TObjAreaWarp__sub_8019CCF0(s32 arg0) {
    s32 var_r31;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r31 = 0;
loop_2:
        if ((TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31)) != 0U) && (check_flag_100__10TObjPlayerFPv() != 0)) {
            return 0;
        }
        var_r31 += 1;
        if (var_r31 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return TObjWarpBase__vt13(arg0);
}

void TObjAreaWarp__sub_8019CD60(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x33), 1, arg1);
        if (TLobby__sub_8030A7B0() == 1) {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjCityMainWarp__sub_80186AF4(), 2, 0, -1);
        } else {
            TLobby__sub_80207718(M2C_FIELD(arg0, s32 *, 0xBC));
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjLuker__sub_801329B0(), 2, 0, -1);
        }
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        TAdChrSelASlotGC__sub_800740FC(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, u16 *, 0xB8) = arg1;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(M2C_FIELD(arg0, u16 *, 0xB8)));
        if (temp_r3 != 0U) {
            fn_8019DD14(temp_r3 + 0x550, 4);
        }
    }
}

}
