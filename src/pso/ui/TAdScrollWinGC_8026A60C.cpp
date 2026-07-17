#include "types.h"

extern "C" {

void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v);

void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

}
