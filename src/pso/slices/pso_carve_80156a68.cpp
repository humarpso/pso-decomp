#include "types.h"

extern "C" {

void fn_80156A68(void* p);
void fn_80156A74(void* p);

void fn_80156A68(void* p) { *(s16*)((char*)p + 0x96) = 0; }
void fn_80156A74(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
