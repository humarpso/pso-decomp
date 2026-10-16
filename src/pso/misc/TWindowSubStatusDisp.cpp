#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 TUnk_804CE018::get_array_entry(int i) { return ((s32*)*(void**)((char*)this + 0x28))[i]; }

}
