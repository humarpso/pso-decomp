#include "types.h"

extern "C" {

void release_object__11TBoss6Type1FPv(void* p);
int queue_destruction__7TObjectFv(void*);

void release_object__11TBoss6Type1FPv(void* p) { if (*(unsigned int*)((char*)p + 0x680) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x680)); *(int*)((char*)p + 0x680) = 0; } }

}
