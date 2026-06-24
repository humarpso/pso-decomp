#include "types.h"

extern "C" {

void fn_801C4FBC(void* p, f32 v);
s32 fn_801C4FC4(void* p);
void fn_801C4FCC(void* p, f32 v);
void fn_801C4FD4(void* p, f32 v);
void fn_801C5060(void* p);

void fn_801C4FBC(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }
s32 fn_801C4FC4(void* p) { return *(s32*)((char*)p + 0x14); }
void fn_801C4FCC(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void fn_801C4FD4(void* p, f32 v) { *(f32*)((char*)p + 0xc) = v; }
int fn_801C4FDC(void) { return 0; }
int fn_801C5010(void) { return 0; }
void fn_801C5060(void* p) { *(u8*)((char*)p + 0x0) = 125; *(u8*)((char*)p + 0x1) = 6; }
int fn_801C5074(void) { return 0; }

}
