#include "types.h"

extern "C" {

int fn_8012EF40(void* p);
int fn_80115BFC(void*, int);

int fn_8012EEC0(void) { return 0; }
int fn_8012EF40(void* p) { return fn_80115BFC((char*)p + 0x1f8, 3276); }

}
