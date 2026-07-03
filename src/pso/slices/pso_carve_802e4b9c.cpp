#include "types.h"

extern "C" {

int TWindow__close(void*);
void fn_802E4B9C(void* p);

void fn_802E4B9C(void* p) { if (*(unsigned int*)((char*)p + 0x154) != 0) { TWindow__close(*(void**)((char*)p + 0x154)); *(int*)((char*)p + 0x154) = 0; } }

}
