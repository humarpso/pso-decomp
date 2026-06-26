#include "types.h"

extern "C" {

int fn_80249220(void* p);
int fn_80268C5C(void*);

int fn_802491C4(void) { return 0; }
int fn_80249220(void* p) { return fn_80268C5C(p); }
int fn_80249240(void) { return 0; }

}
