#include "types.h"

extern "C" {

s32 TItemData__sub_80076E84(s16);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s16);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s16, s32);
s32 TObjCityMainWarp__sub_80266354(s32, s32, s32, s16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TObjPlayer__sub_801D8044(u32, s32, u8);
int TWindowSubTechnique__sub_80286BD4(void* p);
int fn_80286B0C(void*, void* a1 = 0);

s32 TWindowSubTechnique__sub_80286B64(s16 *arg0, s32 *arg1) {
    s32 spC;
    s16 sp8;

    fn_80286B0C((void*)(&sp8), (void*)(&spC));
    if ((sp8 == (s16) *arg0) && (spC == (s32) *arg1)) {
        return 0;
    }
    *arg0 = sp8;
    *arg1 = spC;
    return 1;
}

}
