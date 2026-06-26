#include "types.h"

extern "C" {

int fn_8028DBC4(void* a0 = 0);
int fn_8028DC1C(void* p);
int fn_8028DC14(void);

int fn_8028DB88(void) { return 0; }
int fn_8028DBC4(void*) { return 0; }
int fn_8028DC14(void) { return 1; }
int fn_8028DC1C(void* p) { fn_8028DBC4(p); return 1; }

}
