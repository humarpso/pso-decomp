#include "types.h"

extern "C" {

int fn_800884F0(void* p);
int fn_80020898(void*);

int fn_800884F0(void* p) { return fn_80020898((char*)p + 0x98); }
int fn_80088514(void) { return 0; }
int fn_80088548(void) { return 0; }
int fn_8008857C(void) { return 0; }

}
