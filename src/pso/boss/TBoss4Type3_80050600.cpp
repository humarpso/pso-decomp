#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__sub_80050600(void *arg0);

extern s32 lbl_805D5550;
extern f32 lbl_805D8A44;

void TBoss4Type3__sub_80050600(void *arg0) {
    if (((s32) lbl_805D5550 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x338) >= 0x78) && (M2C_FIELD(arg0, f32 *, 0x37C) > (lbl_805D8A44 * M2C_FIELD(arg0, f32 *, 0x378)))) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
    }
}

}
