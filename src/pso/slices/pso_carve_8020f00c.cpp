#include "types.h"

extern "C" {

s32 fn_8030A7B0();
s32 TRaderMapCore__sub_8030A808();
void fn_8020F028(void* p);

int fn_8020F00C(void) { return 0; }
void fn_8020F028(void* p) { *(s32*)((char*)p + 0x64) = 0; }
s32 fn_8020F034(void) {
    if (TRaderMapCore__sub_8030A808() == 0) {
        return 1;
    }
    return (u32)__cntlzw(fn_8030A7B0()) >> 5;
}
int fn_8020F070(void) { return 0; }

}
