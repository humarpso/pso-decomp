#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_8011C55C(u8 arg0);
s32 TObjPlayer__sub_8011C914(s32);

s32 TObjPlayer__sub_8011C55C(u8 arg0) {
    if ((arg0 & 0x3F) && !(arg0 & 0x80)) {
        return TObjPlayer__sub_8011C914(arg0 + 0x1CB);
    }
    return 0;
}

}
