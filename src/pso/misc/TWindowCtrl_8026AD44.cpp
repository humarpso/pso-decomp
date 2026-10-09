#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8026AD60(void);
void TWindowCtrl__sub_8026AD78(s32 arg0);
s32 get_field44__11TWindowCtrlFv(void);

extern void *TWindowCtrl__active_window;

s32 get_field44__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window == NULL) {
        return 0;
    }
    return M2C_FIELD(TWindowCtrl__active_window, s32 *, 0x44);
}

extern void *TWindowCtrl__active_window;

void TWindowCtrl__sub_8026AD60(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        M2C_FIELD(TWindowCtrl__active_window, s32 *, 0x44) = 0;
    }
}

extern void *TWindowCtrl__active_window;

void TWindowCtrl__sub_8026AD78(s32 arg0) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        M2C_FIELD(TWindowCtrl__active_window, s32 *, 0x44) = arg0;
    }
}

}
