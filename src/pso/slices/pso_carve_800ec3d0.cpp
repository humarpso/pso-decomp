#include "types.h"

extern "C" {

int fn_800EC41C(void* p);
void fn_800EC470(void* p);
int TObjEneSlimeOne__sub_800EC47C(void* p);
int fn_801D2EA8(void*);

int fn_800EC3D0(void) { return 0; }
int fn_800EC41C(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }
int fn_800EC428(void) { return 0; }
void fn_800EC470(void* p) { *(s32*)((char*)p + 0x3f0) = 0; }
int TObjEneSlimeOne__sub_800EC47C(void* p) { return fn_801D2EA8((char*)p + 0x7cc); }

}
