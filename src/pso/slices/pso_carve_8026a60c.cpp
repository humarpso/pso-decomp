#include "types.h"

extern "C" {

void fn_8026A60C(void* p, f32 v);

void fn_8026A60C(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

}
