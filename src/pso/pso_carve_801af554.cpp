#include "types.h"

extern "C" {

int fn_801B42AC(void*);
int obj_clearFlags30(void*, void*);
int fn_801AF694(void* p);
int fn_801C543C(void*);

int fn_801AF554(void) { return 0; }
int fn_801AF5B0(void) { return 0; }
void fn_801AF5EC(void* p) { obj_clearFlags30(p, (void*)2048); fn_801B42AC(p); }
int fn_801AF624(void) { return 0; }
int fn_801AF694(void* p) { return fn_801C543C((char*)p + 0x7c4); }
int fn_801AF6B8(void) { return 0; }

}
