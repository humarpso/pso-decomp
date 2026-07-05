#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001DC24();
M2C_UNK fn_80229080(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TWindowCtrl__sub_8024B6B8(M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_805DC27C;

void fn_801B05B0(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2) {
    TWindowSubStatusDisp__sub_802290E0();
    fn_80229080(arg1);
    fn_80229080(arg2);
    fn_80229080(&lbl_805DC27C);
    TWindowCtrl__sub_8024B6B8(fn_8001DC24(), 0x200);
}

}
