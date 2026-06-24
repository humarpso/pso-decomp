#include "types.h"

extern "C" {

int fn_80039E68(void* p);
int fn_80039ED8(void* p);
int fn_80039D98(void*);
int fn_80039DC8(void*);

int fn_80039E68(void* p) { return fn_80039D98(p); }
int fn_80039E88(void) { return 0; }
int fn_80039ED8(void* p) { return fn_80039DC8(p); }

}
