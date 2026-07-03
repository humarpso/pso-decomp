#include "types.h"

extern "C" {

int TWindow__close(void*);
void fn_80299F44(void* p);

void fn_80299F44(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
