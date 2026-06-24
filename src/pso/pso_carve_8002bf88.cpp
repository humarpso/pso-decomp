#include "types.h"

extern "C" {

int fn_8002BFD8(void* p);
int fn_8002B094(void*);

int fn_8002BF88(void) { return 0; }
int fn_8002BFB0(void) { return 0; }
int fn_8002BFD8(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

}
