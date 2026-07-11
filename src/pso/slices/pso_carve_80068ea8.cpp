#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 TCameraCtrl__sub_8006B338();
extern f32 lbl_805D8FAC;
extern f32 lbl_805D8FC8;

f32 TCameraCtrl__sub_80068EA8(void) {
    if (is_split_screen() != 0) {
        if (TCameraCtrl__sub_8006B338() == 2) {
            return lbl_805D8FAC;
        }
        return lbl_805D8FC8;
    }
    return lbl_805D8FAC;
}

}
