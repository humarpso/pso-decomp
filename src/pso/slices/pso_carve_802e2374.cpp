#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_802E19B0(s32, s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK fn_802E1C6C();
M2C_UNK fn_8039DC70(s32, M2C_UNK *);
M2C_UNK fn_8039DCE0(s32, s32);
extern M2C_UNK lbl_805DE8F8;

void fn_802E2374(s32 arg0) {
    fn_802E1C6C();
    fn_8039DCE0(arg0 + 0x68, fn_80132F2C(0x1C, 1));
    fn_8039DC70(arg0 + 0x68, &lbl_805DE8F8);
    fn_802E19B0(arg0, arg0 + 0x68, -2, fn_80132F2C(0x1C, 0x16), 0);
}

}
