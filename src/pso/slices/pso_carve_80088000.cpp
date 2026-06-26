#include "types.h"

extern "C" {

void fn_80088000(void* p);
void fn_80088010(void* p);

void fn_80088000(void* p) { *(u16*)((char*)p + 0x2c) &= 0xfffe; }
void fn_80088010(void* p) { *(u16*)((char*)p + 0x2c) |= 0x1; }

}
