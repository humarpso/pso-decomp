#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_8011CABC(u8 arg0);
s32 TItemData__sub_8010EEDC(s32);

extern s32 lbl_805D2B10;

s32 TObjPlayer__sub_8011CABC(u8 arg0) {
    if (arg0 & 0x3F) {
        if (arg0 & 0x80) {
            return TItemData__sub_8010EEDC(0x1F4);
        }
        if ((arg0 != 0) && (arg0 < 0x29U)) {
            return TItemData__sub_8010EEDC(arg0 + 0x1CB);
        }
        goto block_6;
    }
block_6:
    return lbl_805D2B10;
}

}
