#include "types.h"

extern "C" {

s32 fn_801B0EE8();
s32 fn_8030A730();
s32 TRaderMapCore__sub_8030A808();
void TRaderMapCore__sub_801F9104(void* p);

s32 TRaderMapCore__sub_801F90C4(void) {
    if ((TRaderMapCore__sub_8030A808() == 1) && (fn_8030A730() == 0)) {
        return 0;
    }
    return fn_801B0EE8();
}
void TRaderMapCore__sub_801F9104(void* p) { *(s32*)((char*)p + 0x184) = 0; }

}
