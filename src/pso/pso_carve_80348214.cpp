#include "types.h"

extern "C" {

int fn_80348304(void* p);
int fn_80340508(void*, int);

int fn_80348214(void) { return 0; }
int fn_80348248(void) { return 0; }
int fn_8034827C(void) { return 0; }
int fn_803482B0(void) { return 0; }
int fn_80348304(void* p) { return fn_80340508((char*)p + 0x1c, 4); }

}
