#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(s32);
f32 fn_8013157C(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;
s32 TObjWarpBossMulti__sub_8019E570(s32 arg0, f32 farg0);
s32 get_main_phase();
extern s32 lbl_805D55C0;
s32 TObjWarpBossMulti__sub_8019E4B4(void);
}

extern "C" {

void close_windows__17TObjWarpBossMultiFPv(void *arg0);
void handle_6x6A_set_boss_warp_flags(void *arg0);
s32 is_lobby_active__17TObjWarpBossMultiFv(void);
void *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindowSubTradeMain__sub_80187CCC();
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_state__6TLobbyFv();

s32 is_lobby_active__17TObjWarpBossMultiFv(void) {
    return get_state__6TLobbyFv() ? 1 : 0;
}

extern s32 lbl_805D53A0;

s32 TObjWarpBossMulti__sub_8019E4B4(void) {
    return ((get_main_phase() - 0xF) == 0) ? lbl_805D55C0 : 0;
}

#pragma push
#pragma fp_contract on
s32 TObjWarpBossMulti__sub_8019E570(s32 arg0, f32 farg0) {
    s32 temp_r31;
    s32 temp_r3b;
    s32 temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        temp_r31 = TObjPlayer__sub_800196EC();
        temp_r3b = get_field_3e4__10TObjPlayerFPv(temp_r3);
        if ((temp_r3b == temp_r31) && (fn_8013157C(arg0 + 0x38, temp_r3 + 0x38) < (farg0 * farg0))) {
            return temp_r3;
        }
    }
    return 0;
}
#pragma pop

void close_windows__17TObjWarpBossMultiFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x168));
        M2C_FIELD(arg0, u32 *, 0x168) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x164));
        M2C_FIELD(arg0, u32 *, 0x164) = 0U;
    }
    TWindowChat__sub_8024AD30(lbl_805D53A0);
    clear_flag__11TWindowCtrlFv();
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

void handle_6x6A_set_boss_warp_flags(void *arg0) {
    void *temp_r3;

    TWindowSubTradeMain__sub_80187CCC();
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0xDC) = (s16) M2C_FIELD(arg0, s16 *, 4);
    }
}

}
