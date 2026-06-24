#include "types.h"

extern "C" {

u8 fn_8010B734(void* p);

u8 fn_8010B734(void* p) { return *(u8*)((char*)p + 0xee); }
int fn_8010B73C(void) { return 0; }

}
