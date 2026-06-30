#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019690();
s32 TRaderMapCore__sub_801F907C();
M2C_UNK TWindowSubTradeMain__sub_80244A4C(u32);
M2C_UNK fn_80244B64(u32);
s32 TWindowCtrl__sub_8024B000(void *, s32);
s32 TWindowCtrl__sub_8024B054(s32);
extern s32 lbl_805D53A0;

void TWindowCtrl__sub_8024BA18(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        if ((TWindowCtrl__sub_8024B054(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024B000(arg0, lbl_805D53A0) != 0) || ((fn_80019690() != 0) && (TRaderMapCore__sub_801F907C() == 0))) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, u32 *, 0x34));
            return;
        }
        fn_80244B64(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

}
