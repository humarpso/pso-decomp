#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_802C3AC0(void*);
int TObjPlayer__sub_802C4518(void*, void*);
int TObjPlayer__sub_802C4520(void*);
int TObjPlayer__sub_802C46BC(void*);
int fn_802C367C(void* p);

int fn_802C367C(void* p) { *(unsigned char*)(p) = 0; TObjPlayer__sub_802C4520(p); TObjPlayer__sub_802C46BC((char*)p + 0x3c0); TAdSinglePlyChrSelectGC__sub_802C3AC0(p); *(int*)((char*)p + 0x36c) = 300; TObjPlayer__sub_802C4518(p, (void*)1); return 1; }

}
