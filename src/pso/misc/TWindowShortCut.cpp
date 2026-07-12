#include "types.h"

extern "C" {

void run_task__15TWindowShortCutFv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
int update_subwindow__20TWindowSubStatusDispFPv(void*);

void run_task__15TWindowShortCutFv(void* p) { update_subwindow__20TWindowSubStatusDispFPv(*(void**)((char*)p + 0x60)); initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
