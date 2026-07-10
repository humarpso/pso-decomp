#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_80011014(void *);
M2C_UNK set_display_mode__15TObjEneSlimeOneFPvi(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE0C(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EC7F4(s32, M2C_UNK);
extern f32 lbl_805DA678;

void fn_800E9E88(void *arg0) {
    TObjEneSlimeOne__sub_800EAE0C(arg0, 0x1E, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0x888;
    if (fn_80011014(arg0) > lbl_805DA678) {
        M2C_FIELD(arg0, s32 *, 0x3C4) = M2C_FIELD(arg0, s32 *, 0x3C4) * 0xFFFFFFFF;
    }
    TObjEneSlimeOne__sub_800EC7F4(M2C_FIELD(arg0, s32 *, 0x388), 1);
    set_display_mode__15TObjEneSlimeOneFPvi(arg0, 2);
}

}
