#include "types.h"

extern "C" {

int fn_801E9CD0(void* p);
int fn_801EA5FC(void*);

int fn_801E9C7C(void) { return 0; }
int fn_801E9CD0(void* p) { return fn_801EA5FC(p); }

}
