#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_803D99F8(void *, int);
M2C_UNK scale_current_matrix(void *);
extern s32 lbl_805D68EC;

void fn_802E3BA8(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xE4) & 8) && ((s32) lbl_805D68EC == 1)) {
        TObjPlayer__sub_803D99F8(arg0 + 0x114, 1);
        scale_current_matrix(arg0 + 0x120);
    }
}

}
