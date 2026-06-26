#include "types.h"

extern "C" {

int fn_800EACFC(void*, void*);
int fn_800EC7F4(void*, void*);
void fn_800E9B7C(void* p);

void fn_800E9B7C(void* p) { *(int*)((char*)p + 0x390) = 90; *(int*)((char*)p + 0x394) = 19; fn_800EC7F4(*(void**)((char*)p + 0x388), (void*)3); fn_800EACFC(p, (void*)2); }

}
