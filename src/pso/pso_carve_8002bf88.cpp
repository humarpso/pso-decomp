#include "types.h"

extern "C" {

void fn_8002BF88(void* p);
void fn_8002BFB0(void* p);
int fn_8002BFD8(void* p);
int fn_8002B094(void*);

void fn_8002BF88(void* p) { *(int*)((char*)p + 0xbc) = 1; fn_8002BFD8(p); }
void fn_8002BFB0(void* p) { *(int*)((char*)p + 0xbc) = 0; fn_8002BFD8(p); }
int fn_8002BFD8(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

}
