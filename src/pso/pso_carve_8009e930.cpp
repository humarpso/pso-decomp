#include "types.h"

extern "C" {

int fn_8009EA54(void*);
int fn_800B9194(void*);
int fn_800B96A4(void*);
int fn_800B99D8(void*);
void fn_8009EA08(void* p);
int fn_8009E95C(void* p);
int fn_800BA8E8(void*);

int fn_8009E930(void) { return 0; }
int fn_8009E948(void) { return 0; }
int fn_8009E95C(void* p) { return fn_800BA8E8(p); }
int fn_8009E97C(void) { return 0; }
void fn_8009EA08(void* p) { if (fn_800B9194(p) != 0) { fn_800B96A4(p); fn_800B99D8(p); fn_8009EA54(p); } }

}
