#include "types.h"

extern "C" {

void TBoss6PlotFalz__sub_802ABB84(void* p);
int queue_destruction__7TObjectFv(void*);

void TBoss6PlotFalz__sub_802ABB84(void* p) { if (*(unsigned int*)((char*)p + 0x384) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x384)); *(int*)((char*)p + 0x384) = 0; } }

}
