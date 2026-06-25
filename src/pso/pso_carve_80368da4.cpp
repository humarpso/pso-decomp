#include "types.h"

extern "C" {

int fn_80087278(void*, void*, void*);
int queue_destruction__7TObjectFv(void*);
void fn_80368DA4(void* p);

void fn_80368DA4(void* p) { fn_80087278((char*)p + 0x38, (void*)252, (void*)64); queue_destruction__7TObjectFv(p); }

}
