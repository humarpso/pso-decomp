#include "types.h"

extern "C" {

void fn_801C6F40(void* p, s32 v);
int TObjPlayer__sub_801C6F48(void* p);
int TObjPlayer__sub_801C6F6C(void* p);
int TObjPlayer__sub_801C6F90(void* p);
void fn_801C6FB4(void* p, s32 v);
void fn_801C6FBC(void* p, s16 v);
void fn_801C6FC4(void* p, f32 v);
void fn_801C6FCC(void* p, f32 v);
void fn_801C6FD4(void* p, s32 v);
void fn_801C6FDC(void);
void fn_801C6FE0(void* p, f32 a, f32 b, f32 c);
u16 fn_801C6FF0(void* p);
int fn_8001BEE8(void*, int);
int fn_8001BEF8(void*, int);

int fn_801C6F2C(void) { return 0; }
void fn_801C6F40(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
int TObjPlayer__sub_801C6F48(void* p) { return fn_8001BEE8(p, 1); }
int TObjPlayer__sub_801C6F6C(void* p) { return fn_8001BEF8(p, 1); }
int TObjPlayer__sub_801C6F90(void* p) { return fn_8001BEF8(p, 2); }
void fn_801C6FB4(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void fn_801C6FBC(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
void fn_801C6FC4(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }
void fn_801C6FCC(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void fn_801C6FD4(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_801C6FDC(void) {  }
void fn_801C6FE0(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x0) = a; *(f32*)((char*)p + 0x4) = b; *(f32*)((char*)p + 0x8) = c; }
u16 fn_801C6FF0(void* p) { return *(u16*)((char*)p + 0x0); }

}
