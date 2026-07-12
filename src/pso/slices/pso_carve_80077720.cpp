#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int TWindowSubSymbolChat__sub_80077680(void*);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int fn_80077720(void* p);
int fn_80077788(void);
int fn_80077790(void);

int fn_80077720(void* p) { return *(u32*)((char*)p + 0x0) & 0x1; }
void fn_8007772C(void* p) { bswap_32__FPUl(p); TWindowSubSymbolChat__sub_80077680((char*)p + 0x1c); }

}
