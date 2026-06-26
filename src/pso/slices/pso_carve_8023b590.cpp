#include "types.h"

extern "C" {

void TTecSlicer__sub_8023B5C8(void* p);

int fn_8023B590(void) { return 0; }
void TTecSlicer__sub_8023B5C8(void* p) { *(u8*)((char*)p + 0x1e) = 0; *(u8*)((char*)p + 0x1f) = 0; }

}
