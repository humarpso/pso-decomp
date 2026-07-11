#include "types.h"

extern "C" {

int TAdMultiPlyChrSelectGC__sub_802DE094(void*);
int fn_802E0008(void*);
int fn_802E0064(void*, void*);
int fn_802E006C(void*, void*, void*);
void TAdMultiPlyChrSelectGC__sub_802DE1AC(void* p);

void TAdMultiPlyChrSelectGC__sub_802DE1AC(void* p) { fn_802E0064(*(void**)((char*)p + 0x5c), (void*)2); fn_802E006C(*(void**)((char*)p + 0x5c), (void*)2, (void*)2); fn_802E0008(*(void**)((char*)p + 0x5c)); TAdMultiPlyChrSelectGC__sub_802DE094(p); }

}
