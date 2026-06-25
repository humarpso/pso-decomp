#include "types.h"

extern "C" {

int fn_802CE088(void*, void*);
int queue_destruction__7TObjectFv(void*);
void fn_802CE1E8(void* p, void* a1);

void fn_802CE1E8(void* p, void* a1) { fn_802CE088(p, (char*)a1 + 0x38); queue_destruction__7TObjectFv(p); }

}
