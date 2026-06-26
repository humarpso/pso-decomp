#include "types.h"

extern "C" {

int fn_803CCE9C(void*);
void fn_8010FF68(void* p);

void fn_8010FF68(void* p) { if (*(unsigned int*)((char*)p + 0x4) != 0) { fn_803CCE9C(*(void**)((char*)p + 0x4)); *(int*)((char*)p + 0x4) = 0; *(int*)((char*)p + 0xc) = 0; } }

}
