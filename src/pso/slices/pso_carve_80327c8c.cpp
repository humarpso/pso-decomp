#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOBoss4Rock__sub_80147AA8(s32);
M2C_UNK fn_80327844(void *, s32, s32);
M2C_UNK fn_803279CC();
extern s32 lbl_805D6C70;
extern s32 lbl_805D6C74;

void *fn_80327C8C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_803279CC();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 8) = TOBoss4Rock__sub_80147AA8(temp_r0 * 8);
        M2C_FIELD(arg0, s32 *, 0xC) = TOBoss4Rock__sub_80147AA8(M2C_FIELD(arg0, s32 *, 0) * 4);
        lbl_805D6C70 = M2C_FIELD(arg0, s32 *, 8);
        lbl_805D6C74 = M2C_FIELD(arg0, s32 *, 0xC);
        fn_80327844(arg0, arg1, arg2);
    }
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    return arg0;
}

}
