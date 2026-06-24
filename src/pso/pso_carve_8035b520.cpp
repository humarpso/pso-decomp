#include "types.h"

extern "C" {

int fn_8035B520(void* p);
u16 fn_8035B530(void* p);
void fn_8035B538(void* p, s16 v);
void fn_8035B56C(void* p, f32 v);
void fn_8035B574(void* p);

int fn_8035B520(void* p) { return *(u32*)((char*)p + 0x94) == 0; }
u16 fn_8035B530(void* p) { return *(u16*)((char*)p + 0x90); }
void fn_8035B538(void* p, s16 v) { *(s16*)((char*)p + 0x90) = v; }
int fn_8035B540(void) { return 0; }
void fn_8035B56C(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void fn_8035B574(void* p) { *(s32*)((char*)p + 0x18) = 2; }

}
