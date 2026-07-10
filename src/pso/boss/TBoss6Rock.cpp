#include "types.h"

extern "C" {

void release_object__10TBoss6RockFPv(void* p);

int queue_destruction__7TObjectFv(void*);

void release_object__10TBoss6RockFPv(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0xb0)); *(int*)((char*)p + 0xb0) = 0; } }

}
