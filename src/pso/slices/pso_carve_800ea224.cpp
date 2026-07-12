#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK set_display_mode__15TObjEneSlimeOneFPvi(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EC7F4(s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void fn_800EA224(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 0x14;
    TBoss3Volopt__sub_8022675C(0x4003AD1D, arg0 + 0x38, 0, 0);
    TObjEneSlimeOne__sub_800EC7F4(M2C_FIELD(arg0, s32 *, 0x388), 0xA);
    set_display_mode__15TObjEneSlimeOneFPvi(arg0, 1);
}

}
