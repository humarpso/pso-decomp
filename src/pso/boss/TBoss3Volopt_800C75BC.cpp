#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss3Volopt__sub_800C75BC(void *arg0, s32 *arg1);
M2C_UNK TBoss3Volopt__sub_800C7544();

extern s32 *lbl_805D5190;
extern s32 lbl_805D5194;

s32 TBoss3Volopt__sub_800C75BC(void *arg0, s32 *arg1) {
    s32 temp_r31;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    lbl_805D5190 = arg1;
    lbl_805D5194 = 0;
    TBoss3Volopt__sub_800C7544();
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r31;
    *lbl_805D5190 = 0;
    return lbl_805D5194;
}

}
