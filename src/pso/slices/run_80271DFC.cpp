#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *TWindowCtrl__data_805D63F8;

void set_flag_bit0__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 1);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_80271E18(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFE);
    }
}

    extern int TRaderMapCore__data_805D5F3C;
void fn_80271E34(void) { TRaderMapCore__data_805D5F3C = 0; }

    extern int lbl_805D63E8;
int fn_80271E40(void) {  return lbl_805D63E8; }

}
