#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802260C4();
M2C_UNK fn_8022743C();
M2C_UNK fn_802274B8();
M2C_UNK fn_8036A648(s32);

void fn_8026B3C4(void *arg0, s32 arg1) {
    fn_8022743C();
    fn_8022743C();
    fn_802260C4();
    fn_8036A648(arg1);
    fn_802274B8();
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 2);
}

}
