#include "types.h"

extern "C" {

s16 fn_801AA508(void* p);
u16 fn_801AA510(void* p);
void fn_801AA518(void* p, s16 v);
void fn_801AA520(void* p, s16 v);
u16 fn_801AA664(void* p);

s16 fn_801AA508(void* p) { return *(s16*)((char*)p + 0x2cc); }
u16 fn_801AA510(void* p) { return *(u16*)((char*)p + 0x0); }
void fn_801AA518(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void fn_801AA520(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int fn_801AA528(void) { return 0; }
int fn_801AA584(void) { return 0; }
int fn_801AA5C0(void) { return 0; }
int fn_801AA61C(void) { return 0; }
int fn_801AA64C(void) { return 0; }
u16 fn_801AA664(void* p) { return *(u16*)((char*)p + 0x0); }
int fn_801AA66C(void) { return 0; }
int fn_801AA6E4(void) { return 0; }

}
