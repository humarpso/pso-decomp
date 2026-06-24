#include "types.h"

extern "C" {

int fn_802FB150(void* p);
int fn_802FB170(void* p);
int fn_802FB190(void* p);
int fn_800BA498(void*);
int fn_800BA4E8(void*);
int fn_800BA5F4(void*);

int fn_802FB150(void* p) { return fn_800BA5F4(p); }
int fn_802FB170(void* p) { return fn_800BA498(p); }
int fn_802FB190(void* p) { return fn_800BA4E8(p); }

}
