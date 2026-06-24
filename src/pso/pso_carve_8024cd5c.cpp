#include "types.h"

extern "C" {

int fn_8024CDB0(void* p);
int fn_8024CDD0(void*);

int fn_8024CD5C(void) { return 0; }
int fn_8024CD80(void) { return 0; }
int fn_8024CDB0(void* p) { return fn_8024CDD0(p); }

}
