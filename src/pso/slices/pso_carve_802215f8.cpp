#include "types.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);
void fn_802215F8(void* p);

void fn_802215F8(void* p) { if (*(unsigned int*)((char*)p + 0x50) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x50)); *(int*)((char*)p + 0x50) = 0; } }

}
