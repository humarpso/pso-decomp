#include "types.h"

extern "C" {

s32 fn_8001ED88(void* p);
int fn_8001ED90(void* p);

s32 fn_8001ED88(void* p) { return *(s32*)((char*)p + 0x428); }
int fn_8001ED90(void* p) { return (*(u32*)((char*)p + 0x0) >> 10) & 0x1; }
int fn_8001ED9C(void) { return 0; }
int TObjFish__sub_8001EDB0(void) { return 0; }
int TObjFish__sub_8001EDC4(void) { return 0; }
int fn_8001EDD8(void) { return 0; }

}
