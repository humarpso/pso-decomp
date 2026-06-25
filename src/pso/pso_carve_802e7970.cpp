#include "types.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);
void fn_802E7970(void* p);

void fn_802E7970(void* p) { if (*(unsigned int*)((char*)p + 0x7b0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x7b0)); *(int*)((char*)p + 0x7b0) = 0; } }

}
