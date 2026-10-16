#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
s32 TWindowSubComCard__sub_8026906C(void);

int TWindowSubStatusDisp::is_flag80_set() { return *(u16 *)&this->m_name & 0x80; }

}
