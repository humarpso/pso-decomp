#include "types.h"

extern "C" {

f32 fn_800AFB28(void* p);

f32 fn_800AFB28(void* p) { return *(f32*)((char*)p + 0x10); }

}
