#include "types.h"

extern "C" {

int fn_80132F2C(void*, void*);
int fn_80307FEC(void);
int OSSetProgressiveMode(void*);

int fn_80307FEC(void) { return OSSetProgressiveMode((void*)(0)); }
void TAdVIConfigGC__vt8(void) { fn_80132F2C((void*)29, (void*)0); }
int fn_80308038(void) { return 0; }
int fn_8030806C(void) { return 0; }

}
