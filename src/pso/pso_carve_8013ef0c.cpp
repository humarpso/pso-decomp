#include "types.h"

extern "C" {

void fn_8013F104(void* p, s32 v);
void fn_8013F10C(void* p, s32 v);
void fn_8013F124(void* p, s16 v);
void fn_8013F12C(void* p, s16 v);
void fn_8013F134(void* p, f32 v);
f32 fn_8013F14C(void* p);
s32 fn_8013F168(void* p);
void fn_8013F170(void* p, s32 v);
f32 fn_8013F178(void* p);
void fn_8013F180(void* p, f32 v);
int fn_8013F188(void* p);
int fn_8002F588(void*);

int fn_8013EF0C(void) { return 0; }
int fn_8013EF3C(void) { return 0; }
int fn_8013EF6C(void) { return 0; }
int fn_8013EFB8(void) { return 0; }
int fn_8013F000(void) { return 0; }
int fn_8013F054(void) { return 0; }
int fn_8013F08C(void) { return 0; }
int fn_8013F0A0(void) { return 0; }
void fn_8013F104(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_8013F10C(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
int fn_8013F114(void) { return 0; }
void fn_8013F124(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void fn_8013F12C(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void fn_8013F134(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }
int fn_8013F13C(void) { return 0; }
f32 fn_8013F14C(void* p) { return *(f32*)((char*)p + 0x4); }
int fn_8013F154(void) { return 0; }
s32 fn_8013F168(void* p) { return *(s32*)((char*)p + 0x0); }
void fn_8013F170(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
f32 fn_8013F178(void* p) { return *(f32*)((char*)p + 0x0); }
void fn_8013F180(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }
int fn_8013F188(void* p) { return fn_8002F588(p); }

}
