#include "types.h"

extern "C" {

int fn_8002ADD8(void* p);
int fn_8002AE38(void* p);
void fn_8002AE5C(void* p, f32 v);
void fn_8002AE74(void* p, s16 v);
void fn_8002AE7C(void* p, s32 v);
void fn_8002AE84(void* p, s32 v);
void fn_8002AE8C(void* p);
void fn_8002AEAC(void* p);
void fn_8002AEB8(void* p, s32 v);
int fn_801A529C(void*, int);

int fn_8002ADD8(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }
int fn_8002ADE4(void) { return 0; }
int fn_8002AE08(void) { return 0; }
int fn_8002AE38(void* p) { return fn_801A529C(p, 2); }
void fn_8002AE5C(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }
int fn_8002AE64(void) { return 0; }
void fn_8002AE74(void* p, s16 v) { *(s16*)((char*)p + 0xb8) = v; }
void fn_8002AE7C(void* p, s32 v) { *(s32*)((char*)p + 0xdc) = v; }
void fn_8002AE84(void* p, s32 v) { *(s32*)((char*)p + 0xd8) = v; }
void fn_8002AE8C(void* p) { fn_8002AEAC(p); }
void fn_8002AEAC(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void fn_8002AEB8(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
int fn_8002AEC0(void) { return 0; }
int fn_8002AEF4(void) { return 0; }
int fn_8002AF38(void) { return 0; }
int fn_8002AF4C(void) { return 0; }
int fn_8002AF90(void) { return 0; }

}
