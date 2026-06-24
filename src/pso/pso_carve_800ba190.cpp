#include "types.h"

extern "C" {

int fn_800BA288(void* p);
int fn_800BA2AC(void* p);
int fn_800BA2D0(void* p);
int fn_800BA2F4(void* p);
int fn_80019528(void*, int);

int fn_800BA190(void) { return 0; }
int fn_800BA1C8(void) { return 0; }
int fn_800BA200(void) { return 0; }
int fn_800BA244(void) { return 0; }
int fn_800BA288(void* p) { return fn_80019528(p, 8); }
int fn_800BA2AC(void* p) { return fn_80019528(p, 4); }
int fn_800BA2D0(void* p) { return fn_80019528(p, 2); }
int fn_800BA2F4(void* p) { return fn_80019528(p, 1); }

}
