#include "types.h"

extern "C" {

int fn_8005354C(void*);
void fn_80053050(void* p);
void fn_8005307C(void* p);

void fn_80053050(void* p) { if (*(int*)((char*)p + 0x398) == 0) { fn_8005354C(p); } }
void fn_8005307C(void* p) { *(u32*)((char*)p + 0x398) = *(u32*)((char*)p + 0x3cc); }
int fn_80053088(void) { return 0; }

}
