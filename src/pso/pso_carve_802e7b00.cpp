#include "types.h"

extern "C" {

void fn_802E7B00(void* p);

void fn_802E7B00(void* p) { *(u32*)((char*)p + 0x628) |= 0x800; }
int fn_802E7B10(void) { return 0; }
int fn_802E7B40(void) { return 0; }
int fn_802E7B94(void) { return 0; }

}
