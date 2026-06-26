#include "types.h"

extern "C" {

int fn_802431D0(void);
int fn_802431F4(void* p);
int fn_802432CC(void* p, int a1, int a2);
int fn_801A529C(void*, int);
int fn_801E1944(void*, int, int, int);
int fn_80243070(void*);

int fn_802431D0(void) { return fn_80243070((void*)(0)); }
int fn_802431F4(void* p) { return fn_801A529C(p, 8); }
int fn_80243218(void) { return 0; }
int fn_80243274(void) { return 0; }
int fn_802432CC(void* p, int a1, int a2) { return fn_801E1944(p, a1, a2, 0); }

}
