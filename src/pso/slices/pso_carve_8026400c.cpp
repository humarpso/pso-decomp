#include "types.h"

extern "C" {

int TWindow__close(void*);
void fn_8026400C(void* p);

void fn_8026400C(void* p) { if (*(unsigned int*)((char*)p + 0x24) != 0) { TWindow__close(*(void**)((char*)p + 0x24)); *(int*)((char*)p + 0x24) = 0; } }

}
