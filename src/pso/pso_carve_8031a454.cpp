#include "types.h"

extern "C" {

int fn_8031A474(void* p);
int fn_800B97B4(void*);

int fn_8031A454(void) { return 0; }
int fn_8031A474(void* p) { return fn_800B97B4(p); }

}
