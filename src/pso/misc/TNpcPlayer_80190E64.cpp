#include "types.h"

extern "C" {

void TNpcPlayer__sub_80190E64(void* p);
int queue_destruction__7TObjectFv(void*);

void TNpcPlayer__sub_80190E64(void* p) { if (*(int*)((char*)p + 0x2c) == 1) { queue_destruction__7TObjectFv(p); } }

}
