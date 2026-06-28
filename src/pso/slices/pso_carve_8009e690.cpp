#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800BBA18(void * a0 = 0, s32 a1 = 0);
int fn_8009E690(void* p);
void fn_8009E6B0(void);
void TObjEneMe1Canadin__vt105(void);
int fn_800B97B4(void*);

int fn_8009E690(void* p) { return fn_800B97B4(p); }
void fn_8009E6B0(void) {  }
s32 fn_8009E6B4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
        fn_800BBA18(arg0, 0xE);
        return 1;
    }
    return 0;
}
int TObjEneMe1Canadin__vt106(void) { return 0; }
void TObjEneMe1Canadin__vt105(void) {  }

}
