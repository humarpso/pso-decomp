#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_2__11TWindowCtrlFv(void);
void set_close_flag__11TWindowCtrlFv(void);

extern void *TWindowCtrl__active_window;

void clear_flag_2__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) & 0xFFFFFFFD);
    }
}

extern void *TWindowCtrl__active_window;

void set_close_flag__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__active_window, u16 *, 0x1C) | 2);
    }
}

}
