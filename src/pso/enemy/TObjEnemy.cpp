#include "types.h"

extern "C" {

int TObjEnemy__sub_800F790C(void* p);
void fn_800F792C(void* p);
void fn_800F793C(void* p);

int fn_80154A00(void*);

int TObjEnemy__sub_800F790C(void* p) { return fn_80154A00(p); }
void fn_800F792C(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffbff; }
void fn_800F793C(void* p) { *(u16*)((char*)p + 0x4) |= 0x400; }

}
