#include "types.h"

extern "C" {

int fn_802F4360(void* p);
int fn_800BB858(void*);

int fn_802F4324(void) { return 0; }
int fn_802F4360(void* p) { return fn_800BB858(p); }

}
