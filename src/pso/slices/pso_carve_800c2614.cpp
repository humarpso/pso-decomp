#include "types.h"

extern "C" {

void fn_800C2614(void);
void fn_800C2618(void* p);

void fn_800C2614(void) {  }
void fn_800C2618(void* p) { *(u32*)((char*)p + 0x3c4) |= 0x2; }

}
