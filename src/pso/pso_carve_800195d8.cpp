#include "types.h"

extern "C" {

int fn_8001960C(void* p);
int bswap_16__FPUs(void*);

int fn_800195D8(void) { return 0; }
int fn_8001960C(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
int fn_80019630(void) { return 0; }
int fn_80019664(void) { return 0; }

}
