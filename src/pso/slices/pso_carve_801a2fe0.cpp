#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 TCameraCtrl__sub_8002ADD0();
extern s32 lbl_805D53A0;

s32 fn_801A2FE0(void) {
    if (is_split_screen() != 0) {
        return TCameraCtrl__sub_8002ADD0();
    }
    return lbl_805D53A0;
}

}
