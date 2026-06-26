#include "types.h"

extern "C" {

f32 fn_801811FC(void* p);
f32 fn_80181204(void* p);

f32 fn_801811FC(void* p) { return *(f32*)((char*)p + 0x94); }
f32 fn_80181204(void* p) { return *(f32*)((char*)p + 0x90); }

}
