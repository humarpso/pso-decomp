#include "types.h"

extern "C" {

int fn_80244A14(void*);
void fn_802E4B9C(void* p);

void fn_802E4B9C(void* p) { if (*(unsigned int*)((char*)p + 0x154) != 0) { fn_80244A14(*(void**)((char*)p + 0x154)); *(int*)((char*)p + 0x154) = 0; } }

}
