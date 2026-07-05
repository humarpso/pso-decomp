#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801A8868(s32, s32);
s32 TObjPlayer__sub_801B19EC();
s32 fn_801CBD98(s32);
M2C_UNK fn_80312C50(u32);
M2C_UNK fn_80312F0C(u32);
extern u32 lbl_805D5D68;

void fn_801CBE10(s32 arg0) {
    if ((u32) lbl_805D5D68 != 0U) {
        if (TObjPlayer__sub_801B19EC() == 0) {
            fn_80312F0C(lbl_805D5D68);
            return;
        }
        fn_80312C50(lbl_805D5D68);
        fn_801A8868(fn_801CBD98(0), arg0);
    }
}

}
