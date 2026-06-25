#include "types.h"

extern "C" {

int fn_8030A694(void*);
void* fn_8030A114(void* p);
int fn_80309F0C(void* p, int a1);
int fn_8030A264(void*, int, int);

int fn_80309F0C(void* p, int a1) { return fn_8030A264(p, a1, 431); }
int fn_80309F30(void) { return 0; }
int fn_80309F78(void) { return 0; }
int fn_80309FD4(void) { return 0; }
int fn_8030A030(void) { return 0; }
int fn_8030A07C(void) { return 0; }
int fn_8030A0C8(void) { return 0; }
void* fn_8030A114(void* p) { fn_8030A694(p); *(int*)(p) = 0; *(int*)((char*)p + 0x4) = 0; return p; }
int fn_8030A150(void) { return 0; }

}
