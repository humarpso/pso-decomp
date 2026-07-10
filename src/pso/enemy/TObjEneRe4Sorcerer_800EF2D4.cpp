#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 cast_resta__18TObjEneRe4SorcererFPv(u8 *arg0);
s32 is_alive__9TObjEneDDFPv(s32);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TTecResta__sub_8023980C(void *, void *, s32);
s32 fn_800B9B28(s32);
u8 *fn_800ED488();

extern u8 *lbl_805D52DC;

s32 cast_resta__18TObjEneRe4SorcererFPv(u8 *arg0) {
    u8 *var_r31;

    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x390)) != 0) {
        if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4)) != 0U) {
            var_r31 = fn_800ED488();
        } else {
            var_r31 = arg0 + 0x38;
        }
        TTecResta__sub_8023980C(arg0, var_r31, fn_800B9B28(M2C_FIELD(lbl_805D52DC, s32 *, 0x20)));
        return 1;
    }
    return 0;
}

}
