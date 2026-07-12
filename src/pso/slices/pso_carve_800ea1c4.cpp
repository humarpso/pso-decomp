#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
s32 is_reached_target_depth__15TObjEneSlimeOneFPv(s32);

void fn_800EA1C4(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        TObjEneSlimeOne__sub_800EAE78(arg0, 3);
    }
}

}
