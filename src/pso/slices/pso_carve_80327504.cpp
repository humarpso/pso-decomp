#include "types.h"

extern "C" {

int fn_80244A14(void*);
void fn_80327504(void* p);

void fn_80327504(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { fn_80244A14(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }

}
