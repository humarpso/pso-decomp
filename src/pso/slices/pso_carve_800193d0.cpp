#include "types.h"

extern "C" {

int fn_800192DC(void*);
s16 fn_800193D0(void* p);
s16 fn_800193F4(void* p);
s16 fn_8001944C(void* p);
s32 fn_80019454(void* p);
s32 fn_80019478(void* p);
f32 fn_80019480(void* p);
f32 fn_800194A4(void* p);
s16 fn_800194C4(void* p);
s16 fn_800194E8(void* p);
s16 fn_800194F0(void* p);
s16 fn_80019514(void* p);
void fn_8001951C(void* p);
void fn_80019528(void* p, u32 v);
void fn_80019568(void* p, s16 v);

s16 fn_800193D0(void* p) { return fn_800193F4(*(void**)((char*)p + 0x318)); }
s16 fn_800193F4(void* p) { return *(s16*)((char*)p + 0x0); }
int fn_800193FC(void) { return 0; }
int fn_8001940C(void) { return 0; }
int fn_8001941C(void) { return 0; }
int fn_8001942C(void) { return 0; }
int fn_8001943C(void) { return 0; }
s16 fn_8001944C(void* p) { return *(s16*)((char*)p + 0x2d0); }
s32 fn_80019454(void* p) { return fn_80019478(*(void**)((char*)p + 0x318)); }
s32 fn_80019478(void* p) { return *(s32*)((char*)p + 0xc); }
f32 fn_80019480(void* p) { return fn_800194A4(*(void**)((char*)p + 0x318)); }
f32 fn_800194A4(void* p) { return *(f32*)((char*)p + 0x8); }
int fn_800194AC(void) { return 0; }
s16 fn_800194C4(void* p) { return fn_800194E8(*(void**)((char*)p + 0x318)); }
s16 fn_800194E8(void* p) { return *(s16*)((char*)p + 0x4); }
s16 fn_800194F0(void* p) { return fn_80019514(*(void**)((char*)p + 0x318)); }
s16 fn_80019514(void* p) { return *(s16*)((char*)p + 0x2); }
void fn_8001951C(void* p) { *(s16*)((char*)p + 0x11c) = 0; }
void fn_80019528(void* p, u32 v) { *(u32*)((char*)p + 0x2e4) |= v; }
void* fn_80019538(void* p) { fn_800192DC(p); return p; }
void fn_80019568(void* p, s16 v) { *(s16*)((char*)p + 0x94) = v; }
int fn_80019570(void) { return 0; }

}
