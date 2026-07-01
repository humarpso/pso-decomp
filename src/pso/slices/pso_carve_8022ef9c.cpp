#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TTecLuker__sub_80234F28();
extern s8 lbl_805D63A8;

void run_task__8TTecCtrlFv(void) {
    lbl_805D63A8 = 0;
    TTecLuker__sub_80234F28();
}

}
