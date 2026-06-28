#include "types.h"
typedef s32 M2C_UNK;

extern "C" {

int fn_8007EB94(void* p);
int fn_8007EBDC(void* p);
int fn_8007EBFC(void* p);
int fn_803DE864(void*);
int xmalloc__FUl(void*);
M2C_UNK xfree__FPv();

int fn_8007EB94(void* p) { return xmalloc__FUl(p); }
void fn_8007EBB4(u32 arg0) {
    if (arg0 != 0U) {
        xfree__FPv();
    }
}
int fn_8007EBDC(void* p) { return fn_803DE864(p); }
int fn_8007EBFC(void* p) { return xmalloc__FUl(p); }

}
