#include "types.h"

extern "C" {

int fn_801B25C4(void*);
int fn_801D0BC0(void*, void*, void*);
void fn_801CAF70(void* p);
void fn_801CAEAC(void);
void fn_801CAF6C(void);

void fn_801CAEAC(void) {  }
int fn_801CAEB0(void) { return 0; }
void fn_801CAF6C(void) {  }
void fn_801CAF70(void* p) { if (fn_801B25C4(p) != 0) { fn_801D0BC0(p, (void*)19, (void*)5); } }

}
