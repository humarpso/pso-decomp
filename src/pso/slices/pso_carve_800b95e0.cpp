#include "types.h"

extern "C" {

int TObjEneEpsilon__sub_800B96FC(void*, void*, void*);
int TObjEneEpsilon__sub_800B9680(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int TObjEneEpsilon__sub_800B95E0(void) { return 0; }
int TObjEneEpsilon__sub_800B965C(void) { return 0; }
int TObjEneEpsilon__sub_800B9680(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x394); }
int TObjEneEpsilon__sub_800B96A4(void) { return 0; }
void TObjEneEpsilon__sub_800B96D4(void* p) { TObjEneEpsilon__sub_800B96FC(p, (char*)p + 0x3b0, *(void**)((char*)p + 0x3b4)); }

}
