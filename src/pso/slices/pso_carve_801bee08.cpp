#include "types.h"

extern "C" {

void TObjPlayer__sub_801BEE08(void* p, f32 a, f32 b, f32 c);

void TObjPlayer__sub_801BEE08(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x38) = a; *(f32*)((char*)p + 0x3c) = b; *(f32*)((char*)p + 0x40) = c; }

}
