#include "types.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);
void fn_80190E64(void* p);

void fn_80190E64(void* p) { if (*(int*)((char*)p + 0x2c) == 1) { queue_destruction__7TObjectFv(p); } }

}
