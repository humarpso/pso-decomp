#include "types.h"

extern "C" {

void fn_80156BA8(void* p);

int fn_80156B18(void) { return 0; }
int fn_80156B38(void) { return 0; }
int fn_80156B74(void) { return 0; }
void fn_80156BA8(void* p) { *(u8*)((char*)p + 0x0) = 11; *(u8*)((char*)p + 0x1) = 3; }

}
