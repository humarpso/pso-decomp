#include "types.h"

extern "C" {

void run_task__15TWindowShortCutFv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int TWindowDD__sub_8024664C(void*);
int fn_80257C28(void*, void*);
int fn_80288050(void*);

void run_task__15TWindowShortCutFv(void* p) { fn_80288050(*(void**)((char*)p + 0x60)); TWindowDD__sub_8024664C(p); update_fade__17TWindowSubComCardFPv(p); fn_80257C28(p, (char*)p + 0x24); }

}
