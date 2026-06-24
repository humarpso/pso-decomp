#include "types.h"

extern "C" {

s32 fn_8034EF30(void* p);
void fn_8034EF38(void* p, s32 v);
void fn_8034EF40(void* p, s16 v);
void fn_8034EFC8(void* p);

int fn_8034EE3C(void) { return 0; }
int fn_8034EE70(void) { return 0; }
int fn_8034EEB4(void) { return 0; }
int fn_8034EEE4(void) { return 0; }
s32 fn_8034EF30(void* p) { return *(s32*)((char*)p + 0x67c); }
void fn_8034EF38(void* p, s32 v) { *(s32*)((char*)p + 0x67c) = v; }
void fn_8034EF40(void* p, s16 v) { *(s16*)((char*)p + 0x678) = v; }
int fn_8034EF48(void) { return 0; }
int fn_8034EF94(void) { return 0; }
void fn_8034EFC8(void* p) { *(u8*)((char*)p + 0x0) = 105; *(u8*)((char*)p + 0x1) = 3; }

}
