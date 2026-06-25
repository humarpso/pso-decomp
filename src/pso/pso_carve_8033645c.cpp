#include "types.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);
void fn_8033645C(void* p);

void fn_8033645C(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
