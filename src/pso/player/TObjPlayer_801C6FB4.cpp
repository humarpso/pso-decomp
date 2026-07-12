#include "types.h"

extern "C" {

void TObjPlayer__sub_801C6FB4(void* p, s32 v);
void TObjPlayer__sub_801C6FBC(void* p, s16 v);
void TObjPlayer__sub_801C6FC4(void* p, f32 v);
void TObjPlayer__sub_801C6FCC(void* p, f32 v);
void TObjPlayer__sub_801C6FD4(void* p, s32 v);
void TObjPlayer__sub_801C6FDC(void);
void TObjPlayer__sub_801C6FE0(void* p, f32 a, f32 b, f32 c);
u16 TObjPlayer__sub_801C6FF0(void* p);
int TAdRicoRing__sub_8001BEE8(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int clear_target_lock_flag__10TObjPlayerFPv(void* p);
int set_lock_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C6F90(void* p);
void fn_801C6F40(void* p, s32 v);

void TObjPlayer__sub_801C6FB4(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void TObjPlayer__sub_801C6FBC(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
void TObjPlayer__sub_801C6FC4(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801C6FCC(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void TObjPlayer__sub_801C6FD4(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801C6FDC(void) {  }
void TObjPlayer__sub_801C6FE0(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x0) = a; *(f32*)((char*)p + 0x4) = b; *(f32*)((char*)p + 0x8) = c; }
u16 TObjPlayer__sub_801C6FF0(void* p) { return *(u16*)((char*)p + 0x0); }

}
