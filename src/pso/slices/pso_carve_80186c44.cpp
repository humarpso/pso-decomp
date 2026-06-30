#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubComCard__sub_80244A14(void *);
M2C_UNK fn_8024A054();
M2C_UNK fn_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
extern s32 lbl_805D53A0;

void fn_80186C44(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x168));
        M2C_FIELD(arg0, u32 *, 0x168) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0xB0));
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x164));
        M2C_FIELD(arg0, u32 *, 0x164) = 0U;
    }
    fn_8024AD30(lbl_805D53A0);
    fn_8024A054();
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

}
