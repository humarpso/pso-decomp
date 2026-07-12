#include "types.h"

extern "C" {

void run_task__14TWindowBreakInFv(void* p);
int TWindowDD__sub_8024664C(void*);
int TWindowSubStatusDisp__sub_80246980(void*);
int fn_80257C28(void*, void*);

void run_task__14TWindowBreakInFv(void* p) { TWindowSubStatusDisp__sub_80246980(p); TWindowDD__sub_8024664C(p); fn_80257C28(p, (char*)p + 0x24); }

}
