#include "types.h"
#include "pso/misc/TTecLuker.h"

extern "C" {

void TTecLuker::set_state(s32 v) { *(s32*)((char*)this + 0x0) = v; }

}
