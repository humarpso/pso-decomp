#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D748C;

s32 TLobby__sub_803BDA04(s32 arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (lbl_805D748C + (arg0 * 0xF4));
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xEC) == 0) {
        return -1;
    }
    return M2C_FIELD(temp_r3, s32 *, 0xE8);
}

}
