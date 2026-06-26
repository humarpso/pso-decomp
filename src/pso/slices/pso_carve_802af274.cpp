#include "types.h"

extern "C" {

void fn_802AF274(void* p, f32 v);

void fn_802AF274(void* p, f32 v) { *(f32*)((char*)p + 0x704) = v; }

}
