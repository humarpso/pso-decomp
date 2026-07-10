#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1);
M2C_UNK init_and_set_field50__9TWindowDDFPvPv(u32, s32);
M2C_UNK TWindowDD__sub_803412A0(u32);
M2C_UNK TWindowDD__sub_803412F0(u32, s32);
s32 TWindowDD__sub_80348B70(s32);

extern s32 lbl_805DFB50;

s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1) {
    s32 var_r31;
    u32 temp_r30;

    s32 temp_r4;
    var_r31 = 0;
    temp_r30 = M2C_FIELD(arg0, u32 *, 0x6C);
    if ((temp_r30 != 0U) && ((temp_r4 = TWindowDD__sub_80348B70(arg1)) != 0)) {
        TWindowDD__sub_803412F0(temp_r30, temp_r4);
        TWindowDD__sub_803412A0(temp_r30);
        init_and_set_field50__9TWindowDDFPvPv(temp_r30, lbl_805DFB50);
        var_r31 = 1;
    }
    return var_r31;
}

}
