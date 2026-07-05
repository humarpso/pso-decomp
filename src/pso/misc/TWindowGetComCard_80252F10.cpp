#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1);
M2C_UNK TObjPlayer__sub_801B56A4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024A314();
M2C_UNK TWindowReturnCity__sub_8024ACA8(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_8024AC20(s32);

extern void *__vt__17TWindowGetComCard[];
extern s32 lbl_805D53A0;

void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__17TWindowGetComCard;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x1C));
            M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        }
        TWindowReturnCity__sub_8024ACA8(lbl_805D53A0);
        fn_8024AC20(lbl_805D53A0);
        if ((TWindowCtrl__sub_8024A314() == 0) && (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U)) {
            TObjPlayer__sub_801B56A4();
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
