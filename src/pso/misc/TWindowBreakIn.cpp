#include "types.h"

extern "C" {

void run_task__14TWindowBreakInFv(void* p);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80246980(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);

void run_task__14TWindowBreakInFv(void* p) { TWindowSubStatusDisp__sub_80246980(p); initialize_subwindow__9TWindowDDFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
