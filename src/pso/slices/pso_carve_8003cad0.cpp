#include "types.h"

extern "C" {

int fn_80242DA0(void*, void*);
int fn_8003CB48(void);
int fn_80242D74(void*);

int fn_8003CAD0(void) { return 0; }
int fn_8003CB48(void) { return fn_80242D74((void*)(0)); }
void fn_8003CB6C(void) { fn_80242DA0((void*)160, (void*)0); }

}
