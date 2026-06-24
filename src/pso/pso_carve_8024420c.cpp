#include "types.h"

extern "C" {

void fn_8024420C(void* p);
void fn_8024421C(void* p);

void fn_8024420C(void* p) { *(u16*)((char*)p + 0x0) &= 0xfffffffd; }
void fn_8024421C(void* p) { *(u16*)((char*)p + 0x0) |= 0x2; }
int fn_8024422C(void) { return 0; }

}
