#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *TWindowCtrl__data_805D63F8;

void set_field28__11TWindowCtrlFs(s16 arg0) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, s16 *, 0x28) = arg0;
    }
}

extern void *TWindowCtrl__data_805D63F8;

u16 get_window_id__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0xFFFFU;
    }
    return M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x28);
}

}
