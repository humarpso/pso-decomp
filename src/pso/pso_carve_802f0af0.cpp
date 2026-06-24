#include "types.h"

extern "C" {

void fn_802F0B70(void* p);
void fn_802F0B80(void* p);

int fn_802F0AF0(void) { return 0; }
int fn_802F0B08(void) { return 0; }
int fn_802F0B58(void) { return 0; }
void fn_802F0B70(void* p) { *(u32*)((char*)p + 0x3c) |= 0x2; }
void fn_802F0B80(void* p) { *(u32*)((char*)p + 0x3c) &= 0xfffffffd; }

}
