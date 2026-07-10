#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_models__20TBoss3VoloptHiraisinFv(void);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 fn_8001E1D8(M2C_UNK);
s32 fn_8001E210(M2C_UNK);
s32 fn_8001E248(M2C_UNK);
s32 fn_8001E280(M2C_UNK);
s32 fn_8007EB94(M2C_UNK);
s32 *fn_80131700(M2C_UNK, M2C_UNK);

extern s32 lbl_805D4C10;
extern s32 lbl_805D4C70;
extern s32 lbl_805D4C74;
extern s32 lbl_805D4C78;
extern s32 lbl_805D4C7C;
extern s32 lbl_805D4C80;
extern s32 *lbl_805D4C84;
extern s32 lbl_805D4C88;

void init_models__20TBoss3VoloptHiraisinFv(void) {
    s32 *temp_r3;
    s32 var_r31;

    lbl_805D4C80 = lbl_805D4C10;
    temp_r3 = fn_80131700(TObjFish__sub_8001EDC4(lbl_805D4C10, 0x10), 0xB);
    lbl_805D4C84 = temp_r3;
    *temp_r3 &= 0xFFFFFFFD;
    var_r31 = fn_8007EB94(0x10);
    if (var_r31 != 0) {
        var_r31 = TBreakUpMdl__sub_8009705C(var_r31, TObjFish__sub_8001EDC4(lbl_805D4C80, 0x10));
    }
    lbl_805D4C88 = var_r31;
    lbl_805D4C70 = fn_8001E280(0x24);
    lbl_805D4C74 = fn_8001E248(0x24);
    lbl_805D4C78 = fn_8001E210(0x24);
    lbl_805D4C7C = fn_8001E1D8(0x24);
}

}
