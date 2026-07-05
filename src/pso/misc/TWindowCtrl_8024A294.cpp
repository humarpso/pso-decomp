#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024A294(void);
s32 TWindowCtrl__sub_8024A2CC(void);
s32 TWindowCtrl__sub_8024C5C4(u32);
M2C_UNK fn_802472A8(u32);

extern void *lbl_805D63F8;

void TWindowCtrl__sub_8024A294(void) {
    if (((void *) lbl_805D63F8 != NULL) && ((u32) M2C_FIELD(lbl_805D63F8, u32 *, 0x38) != 0U)) {
        fn_802472A8(M2C_FIELD(lbl_805D63F8, u32 *, 0x38));
    }
}

extern void *lbl_805D63F8;

s32 TWindowCtrl__sub_8024A2CC(void) {
    if ((void *) lbl_805D63F8 == NULL) {
        return 0;
    }
    if ((u32) M2C_FIELD(lbl_805D63F8, u32 *, 0x38) == 0U) {
        return 0;
    }
    return TWindowCtrl__sub_8024C5C4(M2C_FIELD(lbl_805D63F8, u32 *, 0x38));
}

}
