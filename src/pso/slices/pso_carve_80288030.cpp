#include "types.h"

extern "C" {

int fn_80288030(void* p);
int fn_80288050(void* p);
int fn_80287974(void*);
int fn_802879B0(void*);

int fn_80288030(void* p) { return fn_80287974(p); }
int fn_80288050(void* p) { return fn_802879B0(p); }
int fn_80288070(void) { return 0; }

}
