#include "types.h"

extern "C" {

int fn_801EC834(void* p);
int fn_801EC854(void* p);
int fn_801EC874(void* p);
int fn_801EC894(void* p);
int fn_801A3BA4(void*);
int fn_801A3BF4(void*);
int fn_801F36BC(void*);
int fn_801F36D8(void*);

int fn_801EC834(void* p) { return fn_801A3BA4(p); }
int fn_801EC854(void* p) { return fn_801F36BC(p); }
int fn_801EC874(void* p) { return fn_801A3BF4(p); }
int fn_801EC894(void* p) { return fn_801F36D8(p); }

}
