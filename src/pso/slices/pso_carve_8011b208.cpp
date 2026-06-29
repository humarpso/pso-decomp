#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011B24C(s32);
extern s32 lbl_805D6140;

s32 fn_8011B208(s16 arg0) {
    if (arg0 > 0xB9F) {
        return 0;
    }
    fn_8011B24C(lbl_805D6140 + (arg0 * 4));
    return 1;
}

}
