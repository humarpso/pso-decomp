#include "types.h"

extern "C" {

void init_window__9TWindowDDFPv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int TWindowDD__sub_8024664C(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);

void init_window__9TWindowDDFPv(void* p) { TWindowDD__sub_8024664C(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
