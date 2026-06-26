#include "types.h"

extern "C" {

int fn_801B25C4(void*);
int fn_801D0BC0(void*, void*, void*);
void fn_801CB364(void* p);
void fn_801CB2F0(void);
void fn_801CB360(void);

int fn_801CB27C(void) { return 0; }
void fn_801CB2F0(void) {  }
int fn_801CB2F4(void) { return 0; }
void fn_801CB360(void) {  }
void fn_801CB364(void* p) { if (fn_801B25C4(p) != 0) { fn_801D0BC0(p, (void*)19, (void*)5); } }

}
