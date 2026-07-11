#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TShopWindowBase__sub_8022393C(void);
s32 TCameraCtrl__sub_8006B330();
s32 is_not_split_screen__13TRaderMapCoreFv();

extern f32 lbl_805DC728;
extern f32 lbl_805DC72C;

f32 TShopWindowBase__sub_8022393C(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (TCameraCtrl__sub_8006B330() > 2)) {
        return lbl_805DC728;
    }
    return lbl_805DC72C;
}

}
