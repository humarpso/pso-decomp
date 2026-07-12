#include "types.h"

extern "C" {

void TObjFish__sub_802E7970(void* p);
int queue_destruction__7TObjectFv(void*);

void TObjFish__sub_802E7970(void* p) { if (*(unsigned int*)((char*)p + 0x7b0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x7b0)); *(int*)((char*)p + 0x7b0) = 0; } }

}
