#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowKeyBoardSoft__sub_8024EE44(void*, int);
extern u32 lbl_805D6420;

void fn_8024EEF8(void) {
    if ((u32) lbl_805D6420 != 0U) {
        TWindowKeyBoardSoft__sub_8024EE44((void*)lbl_805D6420, 1);
        lbl_805D6420 = 0U;
    }
}

}
