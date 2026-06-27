#include "types.h"

extern "C" {

s32 TWindowSubStatusDisp__sub_80223B88(void* p, int i);

s32 TWindowSubStatusDisp__sub_80223B88(void* p, int i) { return ((s32*)*(void**)((char*)p + 0x28))[i]; }

}
