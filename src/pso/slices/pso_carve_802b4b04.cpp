#include "types.h"

extern "C" {

int fn_802B4B14(void* p);
int fn_802B4A9C(void*);

int fn_802B4B04(void) { return 0; }
int fn_802B4B14(void* p) { return fn_802B4A9C(p); }

}
