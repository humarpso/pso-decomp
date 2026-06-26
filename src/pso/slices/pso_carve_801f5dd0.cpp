#include "types.h"

extern "C" {

int memset(void*, void*, void*);
void fn_801F5DD0(void* p);

void fn_801F5DD0(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { memset(*(void**)((char*)p + 0x2c), (void*)0, (void*)1024); } }

}
