#include "types.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 TWindowSubComCard__sub_8026906C(void);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);

void TWindowSubTradeMain::clear_flag() { *(u16*)((char*)this + 0x70) &= 0xffffffbf; }

void TWindowSubTradeMain::clear_flag70_bit80() { *(u16*)((char*)this + 0x70) &= 0xffffff7f; }

}
