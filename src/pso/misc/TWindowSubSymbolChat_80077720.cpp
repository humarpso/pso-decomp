#include "types.h"

extern "C" {

int TWindowSubSymbolChat__sub_80077720(void* p);
void TWindowSubSymbolChat__sub_8007772C(void* p);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int TWindowSubSymbolChat__sub_80077680(void*);
int bswap_32__FPUl(void*);
int fn_80077788(void);
int fn_80077790(void);

int TWindowSubSymbolChat__sub_80077720(void* p) { return *(u32*)((char*)p + 0x0) & 0x1; }
void TWindowSubSymbolChat__sub_8007772C(void* p) { bswap_32__FPUl(p); TWindowSubSymbolChat__sub_80077680((char*)p + 0x1c); }

}
