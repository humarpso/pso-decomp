#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowKeyBoardHard__vt2(void *arg0);
s32 TWindowKeyBoardHard__sub_80260444();
s32 fn_80244CF4(void *);
M2C_UNK TWindowKeyBoardHard__sub_80260020(void *, s32);

void TWindowKeyBoardHard__vt2(void *arg0) {
    s32 temp;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x68) > 0) && (TWindowKeyBoardHard__sub_80260444() == 0)) {
        temp = fn_80244CF4(arg0);
        TWindowKeyBoardHard__sub_80260020(arg0, temp);
    }
}

}
