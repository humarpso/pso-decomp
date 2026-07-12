#include "types.h"

extern "C" {

void free_child__14TBoss7CrawfishFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void free_child__14TBoss7CrawfishFPv(void* p) { if (*(unsigned int*)((char*)p + 0x3cc) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x3cc)); *(int*)((char*)p + 0x3cc) = 0; } }

}
