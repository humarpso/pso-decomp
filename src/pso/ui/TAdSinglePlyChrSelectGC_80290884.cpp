#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q);
void TAdSinglePlyChrSelectGC__sub_80290898(void* p);
int TAdSinglePlyChrSelectGC__sub_8029071C(void*);
int TAdSinglePlyChrSelectGC__sub_802907E4(void*);

void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void TAdSinglePlyChrSelectGC__sub_80290898(void* p) { TAdSinglePlyChrSelectGC__sub_802907E4(p); TAdSinglePlyChrSelectGC__sub_8029071C(p); }

}
