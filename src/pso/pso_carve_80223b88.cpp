#include "types.h"

extern "C" {

s32 fn_80223B88(void* p, int i);

s32 fn_80223B88(void* p, int i) { return ((s32*)*(void**)((char*)p + 0x28))[i]; }

}
