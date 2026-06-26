#include "types.h"

extern "C" {

int fn_802B6078(void*, void*);
int fn_802B60E8(void*);
void fn_802B621C(void* p);

void fn_802B621C(void* p) { fn_802B6078(p, (char*)p + 0x5d8); fn_802B6078(p, (char*)p + 0x5e4); fn_802B6078(p, (char*)p + 0x5f0); fn_802B60E8(p); }

}
