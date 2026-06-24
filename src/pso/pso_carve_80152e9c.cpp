#include "types.h"

extern "C" {

void fn_80152E9C(void* p, s16 v);
void fn_80152EA4(void* p, s16 v);
void fn_80152EAC(void* p, s32 v);
void fn_80152EE8(void* p, s16 v);
void fn_80152EF0(void* p, s16 v);

void fn_80152E9C(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void fn_80152EA4(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void fn_80152EAC(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
int fn_80152EB4(void) { return 0; }
void fn_80152EE8(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void fn_80152EF0(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int fn_80152EF8(void) { return 0; }
int fn_80152F28(void) { return 0; }

}
