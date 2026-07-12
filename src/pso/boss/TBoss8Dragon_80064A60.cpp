#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80064A60(void* p, void* a1);
int VecCopy__FP3VecPC3Vec(void*, void*);
int fn_80065F4C(void*);

void TBoss8Dragon__sub_80064A60(void* p, void* a1) { *(short*)((char*)a1 + 0x2) = *(unsigned short*)((char*)p + 0x1c); VecCopy__FP3VecPC3Vec((char*)a1 + 0x4, (char*)p + 0x38); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x60); fn_80065F4C(a1); }

}
