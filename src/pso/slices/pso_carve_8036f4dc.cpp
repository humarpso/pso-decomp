#include "types.h"

extern "C" {

s32 fn_8036F538(s32 arg0, s16 arg1);
int __dl__FPv();
void fn_8036F5A4(void* p);

int fn_8036F4DC(void) { return 0; }
s32 fn_8036F538(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
int fn_8036F574(void) { return 0; }
int fn_8036F590(void) { return 0; }
void fn_8036F5A4(void* p) { *(s32*)((char*)p + 0x10) = 0; }

}
