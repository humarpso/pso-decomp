#include "types.h"

extern "C" {

int fn_80227D14(void* p);
int fn_80227D38(void);
int fn_8023F8B0(void*, int);
int fn_8023FF64(void*);

int fn_80227D14(void* p) { return fn_8023F8B0(p, 64); }
int fn_80227D38(void) { return fn_8023FF64((void*)(0)); }

}
