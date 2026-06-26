#include "types.h"

extern "C" {

int fn_800740DC(void* p);
void fn_800740FC(void* p);
int fn_8024A3EC(void*);

int fn_80074034(void) { return 0; }
int fn_800740DC(void* p) { return fn_8024A3EC(p); }
void fn_800740FC(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

}
