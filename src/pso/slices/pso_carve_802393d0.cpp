#include "types.h"

extern "C" {

int fn_80239490(void* p);
int fn_80236EE8(void*);

int fn_802393D0(void) { return 0; }
int fn_80239490(void* p) { return fn_80236EE8(p); }

}
