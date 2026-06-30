#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8002AE08(s32);
M2C_UNK fn_800FC924(s32);
s32 TWindowShortListCtrl__sub_801A6DA0(void *, s32, M2C_UNK *);
s32 TOKeyMachine01__sub_802034A8();
s32 TWindowCtrl__sub_8024AF74(s32);
s32 TWindowCtrl__sub_8024B000(s32, s32);
s32 TWindowCtrl__sub_8024B054(s32);
extern u8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void TWindowCtrl__sub_8024BA9C(s32 arg0) {
    if ((TOKeyMachine01__sub_802034A8() == 0xF) && (TWindowCtrl__sub_8024B054(lbl_805D53A0) == 0) && (TWindowCtrl__sub_8024B000(arg0, lbl_805D53A0) == 0) && (TWindowCtrl__sub_8024AF74(lbl_805D53A0) == 0) && (TWindowShortListCtrl__sub_801A6DA0(lbl_8050E208 + 0x20, fn_8002AE08(lbl_805D53A0), (M2C_UNK *)lbl_8050E208) != 0)) {
        fn_800FC924(lbl_805D53A0);
    }
}

}
