#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024A35C(void);
void TWindowCtrl__sub_8024A3A4(void);
M2C_UNK TWindowSubStatusDisp__sub_80077760(M2C_UNK);
u32 fn_80244554();

extern void *lbl_805D63F8;

void TWindowCtrl__sub_8024A35C(void) {
    if (((void *) lbl_805D63F8 != NULL) && ((u32) M2C_FIELD(lbl_805D63F8, u32 *, 0x34) == 0U)) {
        TWindowSubStatusDisp__sub_80077760(0x111);
        M2C_FIELD(lbl_805D63F8, u32 *, 0x34) = fn_80244554();
    }
}

extern void *lbl_805D63F8;

void TWindowCtrl__sub_8024A3A4(void) {
    if (((void *) lbl_805D63F8 != NULL) && ((u32) M2C_FIELD(lbl_805D63F8, u32 *, 0x34) == 0U)) {
        TWindowSubStatusDisp__sub_80077760(0x112);
        M2C_FIELD(lbl_805D63F8, u32 *, 0x34) = fn_80244554();
    }
}

}
