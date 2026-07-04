#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __nw__7TObjectFUl(M2C_UNK);
s32 TWindowHelpItem__ct(s32, s32, s32);
s32 fn_8026CBB8(M2C_UNK);
M2C_UNK fn_802787AC();
s32 TWindowShortListCtrl__sub_80278E48(s32, M2C_UNK *, s32);
extern M2C_UNK lbl_80449B2C[];
extern s32 lbl_805D53A0;
extern s32 lbl_805D5EBC;
extern s32 lbl_805D5EC0;

void fn_801E76E4(void) {
    s32 var_r31;

    lbl_805D5EBC = TWindowShortListCtrl__sub_80278E48(fn_8026CBB8(3), lbl_80449B2C, lbl_805D53A0);
    fn_802787AC();
    var_r31 = __nw__7TObjectFUl(0xBC);
    if (var_r31 != 0) {
        var_r31 = TWindowHelpItem__ct(var_r31, fn_8026CBB8(2), lbl_805D53A0);
    }
    lbl_805D5EC0 = var_r31;
}

}
