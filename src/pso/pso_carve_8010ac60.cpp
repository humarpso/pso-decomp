#include "types.h"

extern "C" {

void fn_8010AD1C(void* p, u8 v);

int fn_8010AC60(void) { return 0; }
int fn_8010ACC8(void) { return 0; }
void fn_8010AD1C(void* p, u8 v) { *(u8*)((char*)p + 0x171) = v; }

}
