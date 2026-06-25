#include "types.h"

extern "C" {

int fn_80354A30(void*);
int queue_destruction__7TObjectFv(void*);
void fn_803538E8(void* p);

void fn_803538E8(void* p) { if (fn_80354A30(p) == 0) { *(int*)((char*)p + 0x1c) = 0; queue_destruction__7TObjectFv(p); } }

}
