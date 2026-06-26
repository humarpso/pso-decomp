#include "types.h"

extern "C" {

void fn_802FBB54(void* p);

void fn_802FBB54(void* p) { *(f32*)((char*)p + 0x688) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x68c) = *(f32*)((char*)p + 0x40); }

}
