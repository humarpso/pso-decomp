#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_if_current__26TWindowSubInformationBoardFUi(u32 arg0);

extern u32 lbl_805D6E9C;

void clear_if_current__26TWindowSubInformationBoardFUi(u32 arg0) {
    if ((u32) lbl_805D6E9C == arg0) {
        lbl_805D6E9C = 0U;
    }
}

}
