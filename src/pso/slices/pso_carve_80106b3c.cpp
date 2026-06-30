#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemDrop__sub_80106154();
s32 fn_80107460(s32, s32, s32);
extern s32 *lbl_805D5464;

s32 fn_80106B3C(s32 arg0, s32 arg1, s32 arg2) {
    if ((TItemDrop__sub_80106154() == 1) && ((s32 *) lbl_805D5464 != NULL) && (arg1 > 0) && (arg1 < 0x58)) {
        return fn_80107460(arg0, *lbl_805D5464 + (arg1 * 4), arg2);
    }
    return 0;
}

}
