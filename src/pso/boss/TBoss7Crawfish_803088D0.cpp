#include "types.h"

extern "C" {

void TBoss7Crawfish__sub_803088D0(void* p);
int queue_destruction__7TObjectFv(void*);

void TBoss7Crawfish__sub_803088D0(void* p) { if (*(unsigned int*)((char*)p + 0x3cc) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x3cc)); *(int*)((char*)p + 0x3cc) = 0; } }

}
