#include "types.h"

extern "C" {

s32 TItemData__sub_80076E84(s16);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s16);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s16, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TObjPlayer__sub_801D8044(u32, s32, u8);
int TWindowSubTechnique__sub_80286BD4(void* p);
int get_selection__19TWindowSubTechniqueFPvPvi(void*, void* a1 = 0);

s32 update_selection__19TWindowSubTechniqueFPvPv(s16 *arg0, s32 *arg1) {
    s32 spC;
    s16 sp8;

    get_selection__19TWindowSubTechniqueFPvPvi((void*)(&sp8), (void*)(&spC));
    if ((sp8 == (s16) *arg0) && (spC == (s32) *arg1)) {
        return 0;
    }
    *arg0 = sp8;
    *arg1 = spC;
    return 1;
}

}
