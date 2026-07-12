#include "types.h"

extern "C" {

void TObjPlayer__sub_801D9C88(void* p);
int TObjPlayer__sub_801D9AD0(void*, void*, void*, void*);

void TObjPlayer__sub_801D9C88(void* p) { *(short*)((char*)p + 0x6) = 0; { int i; for (i = 0; i < 10; i++) { TObjPlayer__sub_801D9AD0(p, (void*)i, (void*)65535, (void*)0); } } }

}
