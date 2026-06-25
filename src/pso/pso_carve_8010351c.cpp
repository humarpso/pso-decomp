#include "types.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);
void TItemAttacker__vt1(void* p);

void TItemAttacker__vt1(void* p) { if (*(int*)((char*)p + 0x34) != 0) { queue_destruction__7TObjectFv(p); } }

}
