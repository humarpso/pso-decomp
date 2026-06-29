#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowDD__sub_80346FC0(s16);
extern s16 lbl_805D6E24;

void TWindowDD__sub_80346F74(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 2) == 1) && (TWindowDD__sub_80346FC0(M2C_FIELD(arg0, s16 *, 4)) != 0)) {
        lbl_805D6E24 = M2C_FIELD(arg0, s16 *, 4);
    }
}

}
