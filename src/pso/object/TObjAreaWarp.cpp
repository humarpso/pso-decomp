#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjAreaWarp__ct(void *arg0);
M2C_UNK TObjWarpBase__ct();
s32 TObjPlayer__sub_800196EC();

extern M2C_UNK __vt__12TObjAreaWarp[];
extern s32 lbl_805D3468;
extern s32 lbl_805D5C80;

void *TObjAreaWarp__ct(void *arg0) {
    TObjWarpBase__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjAreaWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3468;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) lbl_805D5C80 != 0) {
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (TObjPlayer__sub_800196EC() + 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8019CCF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0);
void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, u16);
M2C_UNK get_player_floor__6TLobbyFi(s32);
s32 TLobby__sub_8030A7B0();
s32 TObjCityMainWarp__sub_80186AF4();
s32 TObjWarpBase__vt13(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
s32 TObjLuker__sub_801329B0();
M2C_UNK fn_8019DD14(s32, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);

s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0) {
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

void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x33), 1, arg1);
        if (TLobby__sub_8030A7B0() == 1) {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjCityMainWarp__sub_80186AF4(), 2, 0, -1);
        } else {
            get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 0xBC));
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjLuker__sub_801329B0(), 2, 0, -1);
        }
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, u16 *, 0xB8) = arg1;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(M2C_FIELD(arg0, u16 *, 0xB8)));
        if (temp_r3 != 0U) {
            fn_8019DD14(temp_r3 + 0x550, 4);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80307B70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 find_active_player__12TObjAreaWarpFPv(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
u16 obj_getField1c();

u16 find_active_player__12TObjAreaWarpFPv(void *arg0) {
    u32 temp_r31;
    s32 var_r30;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x1C) & M2C_FIELD(arg0, s32 *, 0x20);
        var_r30 = 0;
loop_2:
        if (!((temp_r31 >> var_r30) & 1) && (TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U)) {
            return (u16) obj_getField1c();
        }
        var_r30 += 1;
        if (var_r30 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return 0U;
}

}
#endif
#endif
