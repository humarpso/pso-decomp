#include "types.h"

extern "C" {

int fn_800EACFC(void*, void*);
int fn_800EAE0C(void*, void*, void*);
int fn_800EC7F4(void*, void*);
void fn_800E9D7C(void* p);

void fn_800E9D7C(void* p) { fn_800EAE0C(p, (void*)30, (void*)30); fn_800EC7F4(*(void**)((char*)p + 0x388), (void*)0); fn_800EACFC(p, (void*)2); }

}
