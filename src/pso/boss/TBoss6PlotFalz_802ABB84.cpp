#include "types.h"

extern "C" {

void release_object__14TBoss6PlotFalzFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void release_object__14TBoss6PlotFalzFPv(void* p) { if (*(unsigned int*)((char*)p + 0x384) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x384)); *(int*)((char*)p + 0x384) = 0; } }

}
