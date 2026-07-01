#include "types.h"

extern "C" {

void run_task__13TItemAttackerFv(void* p);
int queue_destruction__7TObjectFv(void*);

void run_task__13TItemAttackerFv(void* p) { if (*(int*)((char*)p + 0x34) != 0) { queue_destruction__7TObjectFv(p); } }

}
