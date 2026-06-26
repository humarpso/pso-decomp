#include "types.h"

extern "C" {

int fn_80068958(void*);
int fn_801F494C(void);
int fn_8030A808(void*);
void fn_801F487C(void* p);

void fn_801F487C(void* p) { if (fn_8030A808(p) == 1) { fn_80068958((void*)0); fn_801F494C(); } }

}
