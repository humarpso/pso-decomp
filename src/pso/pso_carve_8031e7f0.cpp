#include "types.h"

extern "C" {

f32 fn_8031E7F0(void* p);
f32 fn_8031E7F8(void* p);

f32 fn_8031E7F0(void* p) { return *(f32*)((char*)p + 0x4d4); }
f32 fn_8031E7F8(void* p) { return *(f32*)((char*)p + 0x4d0); }

}
