#include "types.h"

extern "C" {

int fn_802B97E0(void*);
int fn_802B9858(void*);
s32 fn_802B9930(void* p);

void TBoss6Type2__vt2(void* p) { fn_802B9858(p); fn_802B97E0(p); }
s32 fn_802B9930(void* p) { return *(s32*)((char*)p + 0x37c); }

}
