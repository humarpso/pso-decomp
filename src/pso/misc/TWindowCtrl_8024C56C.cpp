#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__11TWindowCtrlFv(void);
M2C_UNK fn_8024E3D0();
M2C_UNK fn_8026ACDC();

extern s32 lbl_805D63F8;

void close__11TWindowCtrlFv(void) {
    fn_8024E3D0();
    fn_8026ACDC();
    lbl_805D63F8 = 0;
}

}
