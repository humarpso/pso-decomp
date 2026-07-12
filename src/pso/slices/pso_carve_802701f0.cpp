#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOKeyMachine01__sub_802034A8();
s32 get_array_entry__20TWindowSubStatusDispFPvi(s32, M2C_UNK);
s32 TWindowCtrl__sub_8024C818();
M2C_UNK TWindowHelpItem__sub_80270060(s32, s32);

void fn_802701F0(s32 arg0) {
    s32 var_r31;

    var_r31 = TWindowCtrl__sub_8024C818();
    if (TOKeyMachine01__sub_802034A8() == 0xF) {
        var_r31 = 0;
    }
    TWindowHelpItem__sub_80270060(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), var_r31);
}

}
