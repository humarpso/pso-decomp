#include "types.h"

extern "C" {

int update_fade__17TWindowSubComCardFPv(void*);
int TWindowDD__sub_8024664C(void*);
s32 TWindowDD__sub_80340820(void* p);
void TWindowDD__sub_80340910(void* p);

void update_draw__9TWindowDDFPv(void* p) { TWindowDD__sub_8024664C(p); update_fade__17TWindowSubComCardFPv(p); }

}
