#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK GXSetScissor(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9B78();
extern u16 lbl_805D65F8;

void restore_render_scissor(s32 arg0) {
    if ((u16) lbl_805D65F8 != 0) {
        TObjPlayer__sub_803D9B78();
        if (arg0 != 0) {
            GXSetScissor(0, 0, 0x280, 0x1E0);
        }
    }
}

}
