#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3Volopt__sub_80048A38(void *arg0, void *arg1, void *arg2);
void TBoss3Volopt__sub_80048BC8(void *, void *);

extern void *tl_fade;
extern const f32 lbl_805D8858;
extern M2C_UNK lbl_804848A0[];
extern u32 lbl_805D4D14;

void *TBoss3Volopt__sub_80048A38(void *arg0, void *arg1, void *arg2) {
    TBoss3Volopt__sub_80048BC8(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848A0;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D8858;
    M2C_FIELD(arg0, u8 *, 0x20) = 255;
    M2C_FIELD(arg0, u8 *, 0x21) = 255;
    M2C_FIELD(arg0, u8 *, 0x22) = 255;
    lbl_805D4D14 = 0;
    return arg0;
}

}
