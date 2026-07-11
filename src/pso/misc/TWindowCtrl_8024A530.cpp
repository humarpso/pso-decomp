#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_alt_timer__11TWindowCtrlFv(void);
u32 create_alt__12TWindowTimerFv();

extern void *TWindowCtrl__data_805D63F8;

void create_alt_timer__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) == 0U)) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) = create_alt__12TWindowTimerFv();
    }
}

}
