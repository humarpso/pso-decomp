#include "types.h"

extern "C" {

int queue_destruction__7TObjectFv(void*);
void fn_80353F1C(void* p);

void fn_80353F1C(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0xb0)); *(int*)((char*)p + 0xb0) = 0; } }

}
