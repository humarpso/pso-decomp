#include "types.h"

extern "C" {

void TObjEneMe1GiGueMissile__vt4(void* p);
void TObjEneMe1GiGueMissile__vt7(void* p, void* a1);

int fn_802CE088(void*, void*);
int queue_destruction__7TObjectFv(void*);

void TObjEneMe1GiGueMissile__vt4(void* p) { fn_802CE088(p, (char*)p + 0x6c); queue_destruction__7TObjectFv(p); }

void TObjEneMe1GiGueMissile__vt7(void* p, void* a1) { fn_802CE088(p, (char*)a1 + 0x38); queue_destruction__7TObjectFv(p); }

}
