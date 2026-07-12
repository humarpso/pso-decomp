#include "types.h"

extern "C" {

s32 TItemData__sub_80076E84(s16);
s32 TWindowSubComCard__sub_802661D4(s32, s32, s32, s16);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s16, s32);
s32 TObjCityMainWarp__sub_80266354(s32, s32, s32, s16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TObjPlayer__sub_801D8044(u32, s32, u8);
int TWindowSubTechnique__sub_80286BD4(void* p);
int fn_80286B0C(void*, void* a1 = 0);

int TWindowSubTechnique__sub_80286BD4(void* p) { return fn_80286B0C(p); }
int TWindowSubTechnique__sub_80286BF4(void* a0 = 0, void* a1 = 0) { return 0; }

}
