#include "types.h"

extern "C" {

void queue_destruction_if_dead__10TNpcPlayerFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void queue_destruction_if_dead__10TNpcPlayerFPv(void* p) { if (*(int*)((char*)p + 0x2c) == 1) { queue_destruction__7TObjectFv(p); } }

}
