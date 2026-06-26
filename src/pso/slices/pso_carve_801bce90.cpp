#include "types.h"

extern "C" {

void TObjPlayer__sub_801BCED8(void* p);
int queue_destruction__7TObjectFv(void*);

int fn_801BCE90(void) { return 0; }
void TObjPlayer__sub_801BCED8(void* p) { void* m = *(void**)((char*)p + 0xd00); if (m) queue_destruction__7TObjectFv(m); }

}
