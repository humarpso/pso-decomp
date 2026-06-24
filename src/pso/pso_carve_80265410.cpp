#include "types.h"

extern "C" {

void fn_80265410(void* p);
int fn_8026543C(void* p);
int fn_80247D2C(void*);

void fn_80265410(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) fn_80247D2C(m); }
int fn_8026543C(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
int fn_80265448(void) { return 0; }

}
