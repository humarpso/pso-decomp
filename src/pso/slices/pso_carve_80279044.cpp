#include "types.h"

extern "C" {

int fn_80266CF8(void*);
int fn_80266D78(void*);
int fn_80266DB0(void*);
int fn_80279178(void*);
void fn_80279044(void* p);

void fn_80279044(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }

}
