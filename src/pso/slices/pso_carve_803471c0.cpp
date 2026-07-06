#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowCtrl__sub_8024B558(s32, s32, M2C_UNK);
M2C_UNK TWindowDD__sub_8034861C(s32, s32, s32);
extern s32 lbl_805D6E10;

void TWindowDD__sub_803471C0(s32 arg0, s32 arg1) {
    TWindowDD__sub_8034861C(arg0, lbl_805D6E10, arg1);
    TWindowCtrl__sub_8024B558(arg1, lbl_805D6E10, 0x4F);
}

}
