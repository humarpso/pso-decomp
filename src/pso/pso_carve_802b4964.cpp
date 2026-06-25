#include "types.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);
void fn_802B4964(void* p);

void fn_802B4964(void* p) { if (*(unsigned int*)((char*)p + 0x680) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x680)); *(int*)((char*)p + 0x680) = 0; } }

}
