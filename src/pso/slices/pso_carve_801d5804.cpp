#include "types.h"

extern "C" {

int fn_801D5814(void* p);
void fn_801D5838(void* p);
int fn_801D5844(void* p);
void* fn_801D587C(void* p);
void fn_801D5884(void* p, u8 v);
void fn_801D58C8(void* p);
u8 fn_801D58D4(void* p);
u16 fn_801D58DC(void* p);
int fn_801D5968(void* p);
void fn_801D59DC(void* p);
void fn_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int fn_80102E68(void*);

int fn_801D5804(void) { return 0; }
int fn_801D5814(void* p) { return fn_80102E68((char*)p + 0x8); }
void fn_801D5838(void* p) { *(s32*)((char*)p + 0x0) = 1; }
int fn_801D5844(void* p) { return *(u32*)((char*)p + 0x0) == 0; }
int fn_801D5854(void) { return 0; }
int fn_801D5868(void) { return 0; }
void* fn_801D587C(void* p) { return (char*)p + 0x44; }
void fn_801D5884(void* p, u8 v) { *(u8*)((char*)p + 0x1d) = v; }
int fn_801D588C(void) { return 0; }
void fn_801D58C8(void* p) { *(s32*)((char*)p + 0x0) = 3; }
u8 fn_801D58D4(void* p) { return *(u8*)((char*)p + 0x1c); }
u16 fn_801D58DC(void* p) { return *(u16*)((char*)p + 0x20); }
int fn_801D58E4(void) { return 0; }
int fn_801D591C(void) { return 0; }
int fn_801D5968(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x4); }
int fn_801D598C(void) { return 0; }
int fn_801D59A0(void) { return 0; }
void fn_801D59DC(void* p) { *(s32*)((char*)p + 0x0) = 2; }
int fn_801D59E8(void) { return 0; }
int fn_801D5A0C(void) { return 0; }
int fn_801D5A28(void) { return 0; }
void fn_801D5A64(void* p) { *(s32*)((char*)p + 0x0) = 0; }
int fn_801D5A70(void) { return 0; }

}
