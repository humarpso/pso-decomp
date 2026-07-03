#include "types.h"

extern "C" {

int TWindow__close(void*);
void fn_80299E84(void* p);

void fn_80299E84(void* p) { if (*(unsigned int*)((char*)p + 0x30) != 0) { TWindow__close(*(void**)((char*)p + 0x30)); *(int*)((char*)p + 0x30) = 0; } }

}
