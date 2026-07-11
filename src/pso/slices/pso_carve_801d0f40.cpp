#include "types.h"

extern "C" {

void TObjPlayer__sub_801D0F40(void* p);
void TObjPlayer__sub_801D0F60(void* p);
void TObjPlayer__sub_801D0F70(void* p);
void* TObjPlayer__sub_801D0F80(void* p);
int TObjPlayer__sub_801D0F88(void* p);
int VecCopy__FP3VecPC3Vec(void*);

void TObjPlayer__sub_801D0F40(void* p) { TObjPlayer__sub_801D0F60(p); }
void TObjPlayer__sub_801D0F60(void* p) { *(u32*)((char*)p + 0x334) &= 0xfffffdff; }
void TObjPlayer__sub_801D0F70(void* p) { *(u32*)((char*)p + 0x334) |= 0x200; }
void* TObjPlayer__sub_801D0F80(void* p) { return (char*)p + 0x4; }
int TObjPlayer__sub_801D0F88(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x4); }

}
