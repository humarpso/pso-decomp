#include "types.h"

extern "C" {

void fn_8035A628(void* p, s32 v);

void fn_8035A628(void* p, s32 v) { *(s32*)((char*)p + 0x38) = v; }

}
