#include "types.h"

extern "C" {

void destroy_child__8TObjFishFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void destroy_child__8TObjFishFPv(void* p) { if (*(unsigned int*)((char*)p + 0x7b0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x7b0)); *(int*)((char*)p + 0x7b0) = 0; } }

}
