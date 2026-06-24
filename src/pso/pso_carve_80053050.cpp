#include "types.h"

extern "C" {

void fn_8005307C(void* p);

int fn_80053050(void) { return 0; }
void fn_8005307C(void* p) { *(u32*)((char*)p + 0x398) = *(u32*)((char*)p + 0x3cc); }
int fn_80053088(void) { return 0; }

}
