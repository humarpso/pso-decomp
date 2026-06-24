#include "types.h"

extern "C" {

int fn_80170EEC(void* p);
int fn_801B4AC8(void*);

int fn_80170EEC(void* p) { return fn_801B4AC8(p); }
int fn_80170F0C(void) { return 0; }

}
