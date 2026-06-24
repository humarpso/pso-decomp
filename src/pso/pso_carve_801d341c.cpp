#include "types.h"

extern "C" {

s16 fn_801D341C(void* p);
void fn_801D3424(void* p, s16 v);
int fn_801D342C(void* p);
int fn_801D345C(void* p);
int fn_801D3484(void* p);
int fn_801D34A8(void* p);
int fn_8001BEF8(void*, int);
int fn_8011E204(void*, int);
int fn_80121248(void*, int);
int fn_801BF4DC(void*);

s16 fn_801D341C(void* p) { return *(s16*)((char*)p + 0x2); }
void fn_801D3424(void* p, s16 v) { *(s16*)((char*)p + 0x10) = v; }
int fn_801D342C(void* p) { return (fn_8001BEF8((char*)p + 0xc, 32)) == 0; }
int fn_801D345C(void* p) { return fn_80121248((char*)p + 0x30, 0); }
int fn_801D3484(void* p) { return fn_801BF4DC((char*)p + 0x340); }
int fn_801D34A8(void* p) { return fn_8011E204(p, 128); }
int fn_801D34CC(void) { return 0; }
int fn_801D34D0(void) { return 0; }
int fn_801D34D4(void) { return 0; }
int fn_801D34D8(void) { return 0; }
int fn_801D34DC(void) { return 0; }

}
