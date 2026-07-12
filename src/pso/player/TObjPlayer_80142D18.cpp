#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_next_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1);
M2C_UNK TObjPlayer__sub_80142BDC();

extern u8 *lbl_805D5684;

void clear_next_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1) {
    lbl_805D5684 = arg1;
    TObjPlayer__sub_80142BDC();
    lbl_805D5684 += 8;
    M2C_FIELD(lbl_805D5684, s32 *, 0) = 0;
}

}
