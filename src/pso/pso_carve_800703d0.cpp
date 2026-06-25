#include "types.h"

extern "C" {

int fn_8006FF98(void*);
int fn_80070170(void*);
int fn_800704CC(void* a0 = 0);
void fn_80070554(void* p);
void fn_80070550(void);

int fn_800703D0(void) { return 0; }
int fn_800704CC(void*) { return 0; }
void fn_80070550(void) {  }
void fn_80070554(void* p) { if (fn_800704CC(p) == 0) { fn_80070170(p); fn_8006FF98(p); } }
int fn_80070598(void) { return 0; }

}
