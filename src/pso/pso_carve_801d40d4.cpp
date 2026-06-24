#include "types.h"

extern "C" {

int fn_801D42E0(void* p);
int memset(void*, int, int);

int fn_801D40D4(void) { return 0; }
int fn_801D415C(void) { return 0; }
int fn_801D41B4(void) { return 0; }
int fn_801D4270(void) { return 0; }
int fn_801D42E0(void* p) { return memset(p, 0, 28); }
int fn_801D4308(void) { return 0; }

}
