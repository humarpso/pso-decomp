#include "types.h"

extern "C" {

void init_all__11TWindowCtrlFPvPv(void* p, void* a1);
int set_window_flags__11TWindowCtrlFPvii(void*, void*, void*);

void init_all__11TWindowCtrlFPvPv(void* p, void* a1) { { int i; for (i = 0; i < 12; i++) { set_window_flags__11TWindowCtrlFPvii((void*)i, p, a1); } } }

}
