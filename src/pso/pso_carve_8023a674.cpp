#include "types.h"

extern "C" {

int fn_8023A674(void* p);
int fn_8023A510(void*);

int fn_8023A674(void* p) { return fn_8023A510(p); }
int fn_8023A694(void) { return 0; }
int fn_8023A70C(void) { return 0; }

}
