#include "types.h"

extern "C" {

int fn_80242C48(void* p);

int fn_80242C48(void* p) { return *(u8*)((char*)p + 0x0) & 0x1; }
int fn_80242C54(void) { return 0; }

}
