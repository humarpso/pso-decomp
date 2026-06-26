#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void TWindowInputNumber__sub_802560B4(void *arg0) {
    u8 temp_r4;

    fn_8022675C(0x54100, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x63) = (u8) (M2C_FIELD(arg0, u8 *, 0x63) + 1);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x63) >= (s8) (temp_r4 = M2C_FIELD(arg0, u8 *, 0x62))) {
        if (M2C_FIELD(arg0, u16 *, 0x60) & 1) {
            M2C_FIELD(arg0, u8 *, 0x63) = (u8) (temp_r4 - 1);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x63) = 0U;
    }
}

}
