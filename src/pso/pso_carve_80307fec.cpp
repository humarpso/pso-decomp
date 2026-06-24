#include "types.h"

extern "C" {

int fn_80307FEC(void);
int OSSetProgressiveMode(void*);

int fn_80307FEC(void) { return OSSetProgressiveMode((void*)(0)); }
int fn_80308010(void) { return 0; }
int fn_80308038(void) { return 0; }
int fn_8030806C(void) { return 0; }

}
