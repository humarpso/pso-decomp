#include "types.h"
#include "pso/misc/TUnk_804D0658.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowChoiceSetting.h"

extern "C" {

void *TWindowCtrlMain__sub_8024CDD0(s32);
s32 find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(s32, s32, s32, s32);

s16 TWindowChoiceSetting::get_field_74() { return *(s16*)((char*)this + 0x74); }

int TUnk_804D0658::is_open() { return (*(u16*)((char*)this + 0x70) >> 1) & 0x1; }

}
