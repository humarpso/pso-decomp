#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowOptionCtrl__sub_8026CBA4(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK fn_802A5830(u32, s32, s32, f32);
M2C_UNK TAdChrSelASlotGC__sub_802A596C(u32, s32, s32, f32);
u32 TWindowMessageYesNo__sub_802A59D8(s32, s32, M2C_UNK, M2C_UNK);
extern s32 lbl_805D53A0;
extern s32 tl_01;
extern const f32 lbl_805DFDD0;

void fn_8034C3CC(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = TWindowMessageYesNo__sub_802A59D8(tl_01, lbl_805D53A0, 0, 0);
    if (arg2 != 0) {
        TAdChrSelASlotGC__sub_802A596C(M2C_FIELD(arg0, u32 *, 0x2C), arg1, TWindowOptionCtrl__sub_8026CBA4(0xCF), lbl_805DFDD0);
        return;
    }
    fn_802A5830(M2C_FIELD(arg0, u32 *, 0x2C), arg1, TWindowOptionCtrl__sub_8026CBA4(0xCF), lbl_805DFDD0);
}

}
