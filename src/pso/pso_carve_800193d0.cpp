#include "types.h"

extern "C" {

s16 fn_800193F4(void* p);
s16 fn_8001944C(void* p);
s32 fn_80019478(void* p);
f32 fn_800194A4(void* p);
s16 fn_800194E8(void* p);
s16 fn_80019514(void* p);
void fn_8001951C(void* p);
void fn_80019568(void* p, s16 v);

int fn_800193D0(void) { return 0; }
s16 fn_800193F4(void* p) { return *(s16*)((char*)p + 0x0); }
int fn_800193FC(void) { return 0; }
int fn_8001940C(void) { return 0; }
int fn_8001941C(void) { return 0; }
int fn_8001942C(void) { return 0; }
int fn_8001943C(void) { return 0; }
s16 fn_8001944C(void* p) { return *(s16*)((char*)p + 0x2d0); }
int fn_80019454(void) { return 0; }
s32 fn_80019478(void* p) { return *(s32*)((char*)p + 0xc); }
int fn_80019480(void) { return 0; }
f32 fn_800194A4(void* p) { return *(f32*)((char*)p + 0x8); }
int fn_800194AC(void) { return 0; }
int fn_800194C4(void) { return 0; }
s16 fn_800194E8(void* p) { return *(s16*)((char*)p + 0x4); }
int fn_800194F0(void) { return 0; }
s16 fn_80019514(void* p) { return *(s16*)((char*)p + 0x2); }
void fn_8001951C(void* p) { *(s16*)((char*)p + 0x11c) = 0; }
int fn_80019528(void) { return 0; }
int fn_80019538(void) { return 0; }
void fn_80019568(void* p, s16 v) { *(s16*)((char*)p + 0x94) = v; }
int fn_80019570(void) { return 0; }

}
