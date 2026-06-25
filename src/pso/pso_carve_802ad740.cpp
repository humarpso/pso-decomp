#include "types.h"

extern "C" {

int fn_80052EA0(void*);
void fn_802AD75C(void* p);
int fn_802AD740(void* p);
void fn_802AD74C(void* p);

int fn_802AD740(void* p) { return *(u8*)((char*)p + 0x13) & 0x1; }
void fn_802AD74C(void* p) { *(u8*)((char*)p + 0x13) |= 0x2; }
void fn_802AD75C(void* p) { fn_80052EA0(p); *(unsigned char*)((char*)p + 0x14) = 8; }
int fn_802AD790(void) { return 0; }

}
