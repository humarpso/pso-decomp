#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowReturnCity__sub_8026D4BC(void);
void TWindowReturnCity__sub_8026D4C0(void);
void clear_flag_bit5__17TWindowReturnCityFv(void);

void TWindowReturnCity__sub_8026D4BC(void) {  }

    extern int TWindowReturnCity__data_805D6468;
void TWindowReturnCity__sub_8026D4C0(void) { TWindowReturnCity__data_805D6468 = 4; }

extern void *TWindowCtrl__data_805D63F8;

void clear_flag_bit5__17TWindowReturnCityFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFDF);
    }
}

}
