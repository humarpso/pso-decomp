#include "types.h"

extern "C" {

int fn_802C3BB4(void*);
int fn_8033A138(void);
int fn_801FF5E4(void*);

int fn_8033A088(void) { return 0; }
int fn_8033A0D0(void) { return 0; }
int fn_8033A138(void) { return fn_801FF5E4((void*)(0)); }
void fn_8033A15C(void* p) { fn_802C3BB4(p); fn_801FF5E4((void*)1); }

}
