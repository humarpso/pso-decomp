#include "types.h"

extern "C" {

int fn_800F5884(void* p);
int fn_80143118(void*);

int fn_800F5864(void) { return 0; }
int fn_800F5874(void) { return 0; }
int fn_800F5884(void* p) { return fn_80143118(p); }
int fn_800F58A4(void) { return 0; }

}
