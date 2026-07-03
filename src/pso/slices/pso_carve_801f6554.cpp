#include "types.h"

extern "C" {

int TWindow__close(void*);
void fn_801F6554(void* p);

void fn_801F6554(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close(*(void**)((char*)p + 0x34)); *(int*)((char*)p + 0x34) = 0; } }

}
