#include "types.h"

extern "C" {

int fn_801D2D48(void* p);
int fn_801D2D6C(void* p);
void fn_801D2DA4(void* p, s32 v);
s32 fn_801D2DAC(void* p);
int fn_8001BED8(void*, int);
int fn_8012ADD4(void*);

int fn_801D2D48(void* p) { return fn_8012ADD4((char*)p + 0x30); }
int fn_801D2D6C(void* p) { return fn_8001BED8((char*)p + 0xc, 1); }
int fn_801D2D94(void) { return 0; }
void fn_801D2DA4(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
s32 fn_801D2DAC(void* p) { return *(s32*)((char*)p + 0x1c); }
int fn_801D2DB4(void) { return 0; }
int fn_801D2DDC(void) { return 0; }
int fn_801D2E20(void) { return 0; }
int fn_801D2E6C(void) { return 0; }
int fn_801D2EA8(void) { return 0; }
int fn_801D2EE8(void) { return 0; }
int fn_801D2F0C(void) { return 0; }
int fn_801D2F4C(void) { return 0; }
int fn_801D2F8C(void) { return 0; }

}
