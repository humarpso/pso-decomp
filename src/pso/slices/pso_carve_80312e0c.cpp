#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_80313250(void *arg0, s32 arg1);
int fn_801AA64C(void* a0 = 0);
int fn_80313260(void* a0 = 0);
void fn_803130BC(void* p);
int fn_80313184(void* p);
int fn_803131AC(void);
int fn_803131F0(void* p);
int fn_80313218(void* p);
void fn_80313248(void* p, s16 v);
int fn_8001BED8(void*, int);
int fn_8001BEF8(void*, int);

int fn_80312E0C(void) { return 0; }
int fn_80312E98(void) { return 0; }
int fn_80312F0C(void) { return 0; }
int fn_80312F5C(void) { return 0; }
int fn_80312FB0(void) { return 0; }
int fn_80313010(void) { return 0; }
void fn_803130BC(void* p) { { int n = fn_80313260(p); int i; for (i = 0; i < n; i++) { fn_801AA64C((char*)p + 0x8 + i * 4); } } }
int fn_80313114(void) { return 0; }
int fn_80313138(void* a0 = 0) { return 0; }
int fn_80313184(void* p) { return fn_8001BEF8((char*)p + 0x40, 4); }
int fn_803131AC(void) { return 4; }
int fn_803131B4(void) { return 0; }
void fn_803131C8(s32 arg0, s32 arg1) {
    fn_80313138((void*)(arg0 + (arg1 * 0x18)));
}
int fn_803131F0(void* p) { return fn_8001BED8((char*)p + 0x4, 1); }
int fn_80313218(void* p) { return (fn_8001BEF8((char*)p + 0x4, 1)) == 0; }
void fn_80313248(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void fn_80313250(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}
int fn_80313260(void*) { return 4; }

}
