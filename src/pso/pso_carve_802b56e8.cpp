#include "types.h"

extern "C" {

int fn_802B56E8(void* p);
int fn_802B570C(void*);

int fn_802B56E8(void* p) { return fn_802B570C((char*)p + 0x1); }

}
