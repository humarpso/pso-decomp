#include "types.h"

extern "C" {

int fn_801AA64C(void*);
int fn_80313260(void* a0 = 0);
void fn_803130BC(void* p);
int fn_803131AC(void* a0 = 0);
int fn_803131C8(void* a0 = 0, void* a1 = 0);
void fn_80312F0C(void* p);
int fn_80313184(void* p);
int fn_803131F0(void* p);
int fn_80313218(void* p);
void fn_80313248(void* p, s16 v);
int fn_80313268(void);
int fn_8001BED8(void*, int);
int fn_8001BEF8(void*, int);

int fn_80312E0C(void) { return 0; }
int fn_80312E98(void) { return 0; }
void fn_80312F0C(void* p) { { int n = fn_803131AC(p); int i; for (i = 0; i < n; i++) { fn_803131C8(p, (void*)i); } } }
int fn_80312F5C(void) { return 0; }
int fn_80312FB0(void) { return 0; }
int fn_80313010(void) { return 0; }
void fn_803130BC(void* p) { { int n = fn_80313260(p); int i; for (i = 0; i < n; i++) { fn_801AA64C((char*)p + 0x8 + i * 4); } } }
int fn_80313114(void) { return 0; }
int fn_80313138(void) { return 0; }
int fn_80313184(void* p) { return fn_8001BEF8((char*)p + 0x40, 4); }
int fn_803131AC(void*) { return 4; }
int fn_803131B4(void) { return 0; }
int fn_803131C8(void*, void*) { return 0; }
int fn_803131F0(void* p) { return fn_8001BED8((char*)p + 0x4, 1); }
int fn_80313218(void* p) { return (fn_8001BEF8((char*)p + 0x4, 1)) == 0; }
void fn_80313248(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int fn_80313250(void) { return 0; }
int fn_80313260(void*) { return 4; }
int fn_80313268(void) { return 0; }

}
