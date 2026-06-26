#include "types.h"

extern "C" {

int fn_80115AF0(void* p);
int fn_8001BED8(void*);

int fn_80115AF0(void* p) { return fn_8001BED8((char*)p + 0x1c); }
int fn_80115B14(void) { return 0; }

}
