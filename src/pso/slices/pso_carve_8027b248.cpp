#include "types.h"

extern "C" {

void fn_8027B248(void* p);
int fn_8027B258(void* p);
void fn_8027B278(void* p);
int fn_8027B288(void* p);
void fn_8027B2A8(void* p);
int fn_802644D4(void*);
int fn_80264514(void*);

void fn_8027B248(void* p) { *(u32*)((char*)p + 0x4c) &= 0xfffffff7; }
int fn_8027B258(void* p) { return fn_802644D4(p); }
void fn_8027B278(void* p) { *(u32*)((char*)p + 0x4c) |= 0x8; }
int fn_8027B288(void* p) { return fn_80264514(p); }
void fn_8027B2A8(void* p) { *(u16*)((char*)p + 0x1e) |= 0x200; }

}
