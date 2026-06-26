#include "types.h"

extern "C" {

int fn_802C3AC0(void*);
int fn_802C4518(void*, void*);
int fn_802C4520(void*);
int fn_802C46BC(void*);
int fn_802C367C(void* p);

int fn_802C367C(void* p) { *(unsigned char*)(p) = 0; fn_802C4520(p); fn_802C46BC((char*)p + 0x3c0); fn_802C3AC0(p); *(int*)((char*)p + 0x36c) = 300; fn_802C4518(p, (void*)1); return 1; }

}
