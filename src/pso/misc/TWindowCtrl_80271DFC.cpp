#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *TWindowCtrl__active_window;

void set_flag_bit0__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) | 1);
    }
}

extern void *TWindowCtrl__active_window;

void clear_active_flag__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) & 0xFFFE);
    }
}

    extern int TRaderMapCore__view_mode;
void clear__13TRaderMapCoreFv(void) { TRaderMapCore__view_mode = 0; }

    extern int TWindowSubStatusDisp__count_ratio_value;
int get_window_count_ratio_value(void) {  return TWindowSubStatusDisp__count_ratio_value; }

}
