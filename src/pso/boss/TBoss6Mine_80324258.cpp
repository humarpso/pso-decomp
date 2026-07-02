#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Mine__vt6(s32 arg0);
M2C_UNK TBoss6Mine__sub_803240F8();
M2C_UNK TOSwitchAttack__sub_80087278(s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_802ABE3C(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK queue_destruction__7TObjectFv(s32);

extern f32 lbl_805DF598;

void TBoss6Mine__vt6(s32 arg0) {
    TBoss6Mine__sub_803240F8();
    TOSwitchAttack__sub_80087278(arg0 + 0x38, 0xFB, 0x40);
    TOSwitchAttack__sub_80087278(arg0 + 0x38, 0xFC, 0x40);
    fn_802ABE3C(arg0 + 0x38, 0xC0, 0xF, lbl_805DF598);
    queue_destruction__7TObjectFv(arg0);
}

}
