#include "types.h"

extern "C" {

void fn_80131F64(void* p);
void fn_80131F74(void* p);
int fn_80131F84(void* p);
void fn_80131F90(void* p);
int fn_80131FA0(void* p);
int fn_80131FAC(void* p);
void fn_80131FB8(void* p);

int fn_80131F5C(void) { return 0; }
int fn_80131F60(void) { return 0; }
void fn_80131F64(void* p) { *(u32*)((char*)p + 0x60) |= 0x200; }
void fn_80131F74(void* p) { *(u32*)((char*)p + 0x60) &= 0xfffffdff; }
int fn_80131F84(void* p) { return (*(u32*)((char*)p + 0x60) >> 8) & 0x1; }
void fn_80131F90(void* p) { *(u16*)((char*)p + 0x62) |= 0x2; }
int fn_80131FA0(void* p) { return (*(u16*)((char*)p + 0x60) >> 5) & 0x1; }
int fn_80131FAC(void* p) { return *(u16*)((char*)p + 0x60) & 0x1; }
void fn_80131FB8(void* p) { *(u16*)((char*)p + 0x62) |= 0x8; }
int fn_80131FC8(void) { return 0; }
int fn_8013206C(void) { return 0; }

}
