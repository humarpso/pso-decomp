#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_80077680(void*);
int fn_80132F2C(void*, void*);
int fn_80077720(void* p);
int fn_80077788(void);
int fn_80077790(void);

int fn_80077720(void* p) { return *(u32*)((char*)p + 0x0) & 0x1; }
void fn_8007772C(void* p) { bswap_32__FPUl(p); fn_80077680((char*)p + 0x1c); }
void fn_80077760(void* p) { fn_80132F2C((void*)10, p); }
int fn_80077788(void) { return 0; }
int fn_80077790(void) { return 0; }
int fn_80077798(void) { return 0; }
int fn_800777C4(void) { return 0; }
int fn_80077814(void) { return 0; }
int fn_80077840(void) { return 0; }

}
